#include <iostream>

using namespace std;

int main()
{
    string str1;
    int x,i;
    cout<<"enter a string in which you want to perform encryption"<<endl;
    cin>>str1;
    cout<<"enter the number ";
    cin>>x;
    switch(x)
    {
 case 1:
    for(i=0;i<=str1.length();i++)
        str1[i] = str1[i]+3;
    cout<<"/nencrypted STRING: "<<str1<<endl;
    break;
 case 2:
     for(i=0;i<= str1.length();i++)
      str1[i] = str1[i]-3;
      cout<<"/n DECRYPTED STRING: "<<str1<<endl;
      break;
 default:
    cout<<"invalid output";
}
return 0;
}



