#include <stdio.h>
#include <stdlib.h>
int XOR1(int a , int b){
  int p=0;
  if(a==1){
    if(b==1) p=0;
    else p=1;
  }
  else{
    if(b==1) p=1;
    else p=0;
  }
  return p;
}

int main()
{
    int j,i,p,d[5][5];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            d[i][j]= rand()%2;
        }
    }

    //lRC
    for(i=0;i<3;i++){
        p=0;
        for(j=0;j<3;j++){
            p=XOR1(p,d[i][j]);
        }
        d[i][3]=p;
    }
    //VRC
    for(j=0;j<3;j++){
        p=0;
        for(i=0;i<3;i++){
            p=XOR1(p,d[i][j]);
        }
        d[3][j]=p;
    }
    //Block Parity
    p=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            p=XOR1(p,d[i][j]);
        }
    }
    d[3][3]=p;

    //print
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",d[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",d[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //introducing error
    d[1][1]=1-d[1][1];


     //lRC
    for(i=0;i<4;i++){
        p=0;
        for(j=0;j<4;j++){
            p=XOR1(p,d[i][j]);
        }
        d[i][4]=p;
    }
    //VRC
    for(j=0;j<4;j++){
        p=0;
        for(i=0;i<4;i++){
            p=XOR1(p,d[i][j]);
        }
        d[4][j]=p;
    }
    //Block Parity
    p=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            p=XOR1(p,d[i][j]);
        }
    }
    d[4][4]=p;

    //print matrix after error
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d",d[i][j]);
        }
        printf("\n");
    }
    printf("\n");





    return 0;
}
