#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    double x;
    int count=0;
    double sum=0;
    while(count<100)
    {
        std::cin>>x;
        sum=sum+fmod(x,pow(10,10));
        count++;
    }  
    std::cout<<setprecision(12);
    std::cout<<" "<<sum;
}