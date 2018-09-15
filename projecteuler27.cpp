#include<iostream>
#include<cmath>

int main()
{
    int y,z,t,s,u;
    double n;
    int count,count1=0;
    int mult;

    for(y=-1000;y<1000;y++)
    {
        for(z=-1000;z<1000;z++)
        {
            count=0;
            for(t=1;;t++)
            {
                n=t*t+y*t+z;
                u=0;
                for(s=2;s<n/2;s++)
                {
                    if(fmod(n,s)==0)
                    {
                        u=1;
                    }
                }
                if(u==1)
                {
                    break;
                }
                else
                {
                    count++;
                }
            }
            if(count>count1)
            {
                count1=count;
                mult=y*z;
            }
        }
    }
    std::cout<<mult;
}