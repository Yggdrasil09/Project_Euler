#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    double y;
    int count=0;
    int i;
    for(y=2000;;y++)
    {
        count=0;
        
        for(i=1;i<=21;i++)
        {
            if(fmod(y,i)==0)
            {
                count++;
            }
        }
        if(count==21)
        {
            break;
        }
    }
    std::cout<<setprecision(10);
    std::cout<<y;
}