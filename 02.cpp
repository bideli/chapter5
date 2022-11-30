#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1,num2,temp;
    cout<<"\n Enter two numbers:";
    cin>>num1>>num2;
    int num11=num1,num22=num2;
    if(num1>=num2)
    {
        cout<<"\n GCD("<<num1<<","<<num2<<")=";
        while (num1%num2!=0)
        {
            temp=num2;
            num2=num1%num2;
            num1=temp;
        }
        cout<<num2;
    }
    else
    {
        cout<<"\n GCD("<<num2<<","<<num1<<")=";
        while (num2%num1!=0)
        {
            temp=num1;
            num1=num2%num1;
            num2=temp;
        }
        cout<<num1;
    }
    if(num11>=num22)
    {
        int lcm=num11*num22/num2;
        cout<<"\n LCM["<<num11<<","<<num22<<"]="<<lcm;
    }
    else
    {
        int lcm=num11*num22/num1;
        cout<<"\n LCM["<<num22<<","<<num11<<"]="<<lcm;
    }
    getch();
    return 0;
}
