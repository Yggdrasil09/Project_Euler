#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    int y;
    double sqr=0;
    double sum=0;
    for(y=1;y<=100;y++)
    {
        sqr=sqr+pow(y,2);
        sum=sum+y;
    }  
    sum=pow(sum,2);
    std::cout<<setprecision(10);
    std::cout<<sum-sqr; 
}