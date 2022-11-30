#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float counterHot = 0;
    float counterPleas = 0;
    float counterCold = 0;
    bool start= true;
    float sum=0,mid;
    while(start==true)
    {
    float temp;
    cout<<"\n Enter the temperature:";
    cin>>temp;

        if (temp>=29.5)
    {
        counterHot++;
        cout<<"\n Today is hot.";
    }
        else if(temp>=15.5&&temp<29.5)
        {
            counterPleas++;
            cout<<"\n Today is pleasant.";
        }
        else
        {
            counterCold++;
            cout<<"\n Today is cold.";
        }
        sum=sum+temp;


        cout<<"\n is there another temperature?(y/n)";
        char ans;
        cin>>ans;
        if(ans=='y')
            start=true;
        else
            start= false;

    }

    cout<<"\n number of hot days:"<<counterHot;
    cout<<"\n number of pleasant days:"<<counterPleas;
    cout<<"\n number of cold days:"<<counterCold;
    mid=sum/(counterHot+counterPleas+counterCold);
    cout<<"\n The medial is:"<<mid;

    getch();
    return 0;
}