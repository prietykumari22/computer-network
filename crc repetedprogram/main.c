#include <stdio.h>
#include <stdlib.h>
int xor1(int a,int b)
{
    if(a==b)
        return 0;
    else
        return 1;
}

int main()
{
    int data[8]={1,0,1,1,0,0,1,0};
    int div[4]={1,1,0,1};
    int code[12];
    int i,j,m;
    printf("printing data");
    for(i=0;i<8;i++)
    {
        printf("%d\t",data[i]);
    }
    printf("\n");
     printf("printing divisor");
    for(j=0;j<4;j++)
    {
     printf("%d\t",div[j]);
    }
    printf("\n");
    printf("printing code");
    for(i=0;i<8;i++)code[i]=data[i];
    for(i=8;i<11;i++)code[i]=0;
            for(i=0;i<8;i++)
            {
                m=code[i];
                for(j=0;j<4;j++)
                {
                    code[i+j]=xor1(code[i+j],div[j]*m);
                }
            }


for(i=0;i<8;i++)
{
    printf("%d\t",data[i]);
}
for(j=8;j<11;j++)
{
 printf("%d\t",code[i]);
}
printf("\n");
    printf("rechecking the result");
    for(i=0;i<8;i++)code[i]=data[i];
    for(i=8;i<11;i++)code[i]=code[i];
    for(i=0;i<8;i++)
    {
       m=code[i];
         for(j=0;j<4;j++)
         {
             code[i+j]=xor1(code[i+j],div[j]*m);
          }
    }

    for(i=0;i<8;i++)
    {
        printf("%d\t",data[i]);
        for(i=0;i<11;i++)
        {
          printf("%d\t",code[i]);
        }
    }
}


