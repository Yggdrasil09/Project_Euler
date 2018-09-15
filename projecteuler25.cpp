#include<iostream>
#include<cmath>
#include<iomanip>

int main()
{
    double t=1,t1=1,t2;
    int g=0,count,count1=0;
    double y;
    while(g==0)
    {
        count=0;
        t2=t+t1;
        t=t1;
        t1=t2;
        count1++;
        for(y=1;y<=t2;y=y*10)
        {
            count++;
        }
        if(count==1000)
        {
            std::cout<<std::setprecision(100);
            std::cout<<t2<<std::endl<<count1+1;
            break;
        }
    }
}