#include <stdio.h>
#include <stdlib.h>
int xor1(int a, int b)
{
    int p=0;
    if(a==1)
    {
        if (b==1)
            p=0;
    else
        p=1;
    }
    else
    {
    if (b==1)
        p=1;
    else p=0;
    }
    return p;

}
int main()
{
int i,j,p,d[5][5];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        d[i][j]==rand()%2;
    }

}
/*Lrc*/
for(i=0;i<3;i++)
{
    p=0;
    for(j=0;j<3;i++)
    {
      p =xor1(p,d[i][j]);
    }
    d[i][3] =p;
}

/* vrc*/
for(j=0;j<3;j++)
{
    p=0;
    for(i=0;i<3;i++){
    p= xor1(p,d[i][j]);
    }
    d[3][j]=p;
}
//block parity
p=0
for(j=0;j<3;j++)
{
    for(i=0;i<3;i++){
    p= xor1(p,d[i][j]);
    }
}
d[3][3]=p;
//print
for(i=0;j<3;i++)
for(j=o;j<3;j++){
    printf("%d",d[i][j])
}
printf("/n");
}
for(i=0;j<3;i++)
for(j=o;j<3;j++){
    printf("%d",d[i][j])
}
printf("/n");
//introd





    return 0;
}
