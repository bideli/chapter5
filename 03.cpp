#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n,i;
    float *mark,max=0,min=20,sum=0,ave,input;
    cout<<"\n Enter number of students:";
    cin>>n;
    mark=new float [n];
    for(i=0;i<n;i++)
    {
        do{
        cout << "\n Enter mark student " << i + 1 << ":";
        input=*(mark + i);
        cin >> input;
        }while (input>20||input<0);

        if (input>=max)
        {
            max=input;
        }
        else if(input<=min)
        {
            min=input;
        }
        sum=sum+input;
    }
    cout<<"\n The biggest mark is:"<<max;
    cout<<"\n The smallest mark is:"<<min;
    ave=sum/n;
    cout<<"\n The average of total marks of students is:"<<ave;

    getch();
    return 0;
}
