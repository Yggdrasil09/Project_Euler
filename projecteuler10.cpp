#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    double x,y;
    int check=0;
    double sum=0.0;

    for(y=2;y<2000000;y++)
    {
        check=0;
        for(x=2;x<=y/2;x++)
        {
            if(fmod(y,x)==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            sum=sum+y;
            std::cout<<setprecision(10);
            std::cout<<sum<<" ";
        }
    }
    std::cout<<sum;
}