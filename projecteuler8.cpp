#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    char x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,t;
    int check,mult;
    std::cin>>x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,t;
    check=mult=((int)x1-48)*((int)x2-48)*((int)x3-48)*((int)x4-48)*((int)x5-48)*((int)x6-48)*((int)x7-48)*((int)x8-48)*((int)x9-48)*((int)x10-48)*((int)x11-48)*((int)x12-48)*((int)t-48);
    int count=0;
    while(count<987)
    {
        x1=x2;
        x2=x3;
        x3=x4;
        x4=x5;
        x5=x6;
        x6=x7;
        x7=x8;
        x8=x9;
        x9=x10;
        x10=x11;
        x11=x12;
        std::cin>>t;
        mult=((int)x1-48)*((int)x2-48)*((int)x3-48)*((int)x4-48)*((int)x5-48)*((int)x6-48)*((int)x7-48)*((int)x8-48)*((int)x9-48)*((int)x10-48)*((int)x11-48)*((int)x12-48)*((int)t-48);
        if(mult>check)
        {
            check=mult;
        }
        count++;
    }
    std::cout<<"the product is "<<check;
}