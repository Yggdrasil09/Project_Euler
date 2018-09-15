#include<iostream>
#include<cmath>

int main()
{
    double y,t,sum=0,sum1;
    for(y=1000;y<1000000;y++)
    {
        sum1=0;
        for(t=1;t<=y;t=t*10)
        {
            sum1=sum1+pow((long int)fmod(y,t*10)/(long int)t,5);
        }
        if(sum1==y)
        {
            sum=sum+y;
        }
    }
    std::cout<<sum;
}