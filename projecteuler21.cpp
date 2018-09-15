#include<iostream>

int main()
{
    int x,y,z;
    int sum;
    int sum1;
    int sum2=0;

    for(y=1;y<10000;y++)
    {
        sum=0;
        for(z=1;z<y;z++)
        {
            if(y%z==0)
            {
                sum=sum+z;
            }
        }
        sum1=0;
        for(z=1;z<sum;z++)
        {
            if(sum%z==0)
            {
                sum1=sum1+z;
            }
        }
        if(sum1==y&&sum!=sum1)
        {
            sum2=sum2+y;
        }
    }
    std::cout<<sum2;
}