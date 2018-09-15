#include<iostream>
#include<iomanip>
#include<cmath>

using std::setprecision ;

int main()
{
    double x=1;
    int y;
    for(y=1;y<=100;y++)
    {
        x=x*y;
    }
    std::cout<<setprecision(158);
    std::cout<<x;
    unsigned char t[159]="93326215443944102188325606108575267240944254854960571509166910400407995064242937148632694030450512898042989296944474898258737204311236641477561877016501813248";
    double sum=0;
    for(y=0;y<158;y++)
    {
        sum=sum+t[y]-48;
    }
    std::cout<<"\n"<<sum;
}