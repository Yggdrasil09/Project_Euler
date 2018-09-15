#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    double x=1,y=2,t;
    double sum=0;
    while(x<4000000)
    {
        t=x+y;
        x=y;
        y=t;
        if(fmod(x,2)==0)
        {
            sum=sum+x;
        }
    }
    cout<<setprecision(10);
    cout<<(double)sum;
}