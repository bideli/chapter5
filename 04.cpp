#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n,i,counterGREAT=0,counterGOOD=0,counterBAD=0;
    float *mark,sum=0,ave,input=0;
    cout<<"\n Enter number of students:";
    cin>>n;
    mark=new float [n];
    for(i=0;i<n;i++)
    {
        do {
            cout << "\n Enter mark student " << i + 1 << ":";
            input=*(mark + i);
            cin >> input;
        }while (input>20||input<0);

        if(input>=18)
        {
            cout<<"\n your mark is great~.";
            counterGREAT++;
        }
        else if(input>=12&&input<=17.75)
        {
            cout<<"\n your mark is good.";
            counterGOOD++;
        }
        else
        {
            cout<<"\n your mark is bad.";
            counterBAD++;
        }
        sum+=input;
    }

    cout<<"\n\n number of great marks:"<<counterGREAT;
    cout<<"\n number of good marks:"<<counterGOOD;
    cout<<"\n number of bad marks:"<<counterBAD;
    ave=sum/n;
    cout<<"\n\n The average of class is:"<<ave;
    getch();
    return 0;
}
