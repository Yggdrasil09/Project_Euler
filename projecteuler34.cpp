#include<iostream>
#include<cmath>

double fact(int);

int main()
{
    double y,t;
    int count=0;
    for(y=3;y<1000000;y++)
    {
        double sum=0;
        for(t=1;t<=y;t=t*10)
        {
            sum=sum+fact(fmod(y,t*10)/(long)t);
        }
        if(sum==y)
        {
            count=count+y;
        }
    }  
    std::cout<<count;
}

double fact(int x)
{
    if(x==1)
    {
        return 1 ;
    }
    if(x==0)
    {
        return 1;
    }
    return x*fact(x-1);
}