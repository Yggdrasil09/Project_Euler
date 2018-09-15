#include<iostream>
#include<cmath>

int main()
{
    double x,y;
    double z;
    for(x=1;x<1000;x++)
    {
        for(y=1;y<x;y++)
        {
            z=x*x+y*y;
            if(x+y+sqrt(z)==1000)
            {
                std::cout<<x<<" "<<y<<" "<<sqrt(z);
                break;
            }
        }
    }
}