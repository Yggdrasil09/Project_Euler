#include<iostream>
#include<cmath>
#include<iomanip>

int main()
{
    double x,y,z;
    double sum,sum1,check,check1,sum2=0;
    for(y=2;y<=28123;y++)
    {
        for(x=1;x<y;x++)
        {
            sum=0;
            sum1=0;
            check=0;
            check1=0;
            for(z=1;z<x;z++)
            {
                if(fmod(x,z)==0)
                {
                    sum+=z;
                }
            }
            if(sum>x)
            {
                check=1;
            }
            for(z=1;z<y-x;z++)
            {
                if(fmod(y,z)==0)
                {
                    sum1+=z;
                }
            }
            if(sum1>y-x)
            {
                check1=1;
            }
            if(check==1&&check1==1)
            {
                sum2=sum2+y;
                break;
            }
        }
    }
    std::cout<<std::setprecision(100);
    std::cout<<sum2;
}