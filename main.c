
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int data[6]={1,0,0,1,0,1};
int b[5];
int code[10];
int n,k;
int check_power_2 (int m){
    int i,r=0;
    for(i=0;i<k;i++){
        if(pow(2,i)==m) r=1;
    }
    return r;
}
int xor1(int a, int b){
    if(a==b) return 0;
    else return 1;
}
void disp(){
    int i;
    printf("\f");
    for(i=1;i<=n+k;i++){
        printf("%d\t", code[i]);
    }
    printf("\n");
}
void convert(int d, int b[5]){
    for(int i=0;i<k;i++){
        b[i]=d%2;
        d=d/2;
    }
}

void main()
{
    int ndx=0,i,j,pos,p;
    n=6; k=1;
    while(pow(2,k)<n+k+1) k++;
    for(i=1;i<=n+k;i++){
        if(check_power_2(i)==1)
        {
            code[i]=0;
        }
        else code[i]=data[ndx++];
    }
    printf("Code before Encryption\n");
    disp();

    for(i=0;i<k;i++){
        pos=(int)pow(2,i);
        p=0;
        for(j=pos;j<=n+k;j++){
            convert(j,b);
            if(b[i]==1) p = xor1(p,code[j]);
        }
        code[pos]=p;
    }
    disp();
}
