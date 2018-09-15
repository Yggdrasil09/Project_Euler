#include<iostream>
#include<cmath>

int main()
{
    double y;
    double t;
    double count=0,count1;
    double res;
    for(y=1;y<1000000;y++)
    {
        t=y;
        count1=0;
        while(t!=1)
        {
            if(fmod(t,2)==0)
            {
                t=t/2;
            }
            else
            {
                t=3*t+1;
            }
            count1++;
        }
        if(count1>count)
        {
            count=count1;
            res=y;
        }
    }
    std::cout<<count<<" "<<res; 
}