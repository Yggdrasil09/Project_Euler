#include<iostream>
#include<cmath>


int main()
{
    int count=0;
    int a,b,y,t;

    for(b=2;b<=100;b++)
    {
        count++;
    }
    int g;
    for(a=3;a<=100;a++)
    {
        for(b=2;b<=100;b++)
        {
            g=0;
            for(y=a-1;y>=2;y--)
            {
                for(t=2;t<=100;t++)
                {
                    if(pow(a,b)==pow(y,t))
                    {
                        g=1;
                    }
                }
            }
            if(g==0)
            {
                count++;
            }
        }
    }
    std::cout<<count;
}