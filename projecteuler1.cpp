#include<iostream>

int main()
{
    int y;
    int sum=0;
    for(y=3;y<=1000;y++)
    {
        if(y%3==0||y%5==0)
        {
            sum=sum+y;
        }
    }
    std::cout<<(int)sum;
}