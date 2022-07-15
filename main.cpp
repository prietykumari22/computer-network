#include <iostream>

using namespace std;

int xor1(int a,int b)
{
    if(a==b)return 0;
    return 1;
}


int main()
{
    int data[8]={1,0,1,1,0,0,1,0};
    int divs[4]={1,1,0,1};

    int code[12];
    int i,j,m;

    cout<<"DATA: ";
    for(i=0;i<8;i++)
        cout<<data[i];
    cout<<endl;

    cout<<"DIVS: ";
    for(i=0;i<4;i++)
        cout<<divs[i];
    cout<<endl;

    for(i=0;i<8;i++)code[i]=data[i];
    for(;i<11;i++)code[i]=0;

    for(i=0;i<8;i++)
    {
        m=code[i];
        for(j=0;j<4;j++)
        {
            code[i+j]=xor1(code[i+j],divs[j]*m);

        }
    }

    cout<<endl;
    cout<<"FINAL RESULT: "<<endl;
    for(i=0;i<8;i++)cout<<data[i];
    for(;i<11;i++)cout<<code[i];
    cout<<endl;

    //CHECKING PROCESS.................

    for(i=0;i<8;i++)
{
    printf("%d\t",data[i]);
}
