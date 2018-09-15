#include<iostream>
#include<cmath>

int main()
{
    double y,z,mult,t,sum=0;
    for(y=2;y<=100000;y++)
    {
        for(z=1;z<y;z++)
        {
            mult=y*z;
            int count=0;
            int count1=0;
            for(t=1;t<=mult;t=t*10)
            {
                count=count+fmod(mult,t*10)/(long int)t;
                count1++;
            }
            for(t=1;t<=y;t=t*10)
            {
                count=count+fmod(y,t*10)/(long int)t;
                count1++;
            }
            for(t=1;t<=z;t=t*10)
            {
                count=count+fmod(z,t*10)/(long int)t;
                count1++;
            }
            if(count1==10&&count==45)
            {
                sum=sum+mult;
            }
        }
    }   
    std::cout<<sum;
}