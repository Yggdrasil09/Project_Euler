#include<iostream>
#include<cmath>
#include<iomanip>

int main()
{
    double y,z;
    double sum=0,count=0,i=2;
    for(y=1;y<=pow(1001,2);y=y+i)
    {
        sum+=y;
        if(count==4)
        {
            count=0;
            i=i*2;
        }
        count++;
    }
    std::cout<<std::setprecision(10);
    std::cout<<sum;
}