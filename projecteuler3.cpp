#include<iostream>
#include<cmath>
#include<iomanip>

int main()
{
    using std::setprecision;
    double y,z;
    int check;

    for(y=600851475143/2;y>=2;y--)
    {
        check=0;
        if(fmod(600851475143,y)==0)
        {
            for(z=2;z<=y/2;z++)
            {
                if(fmod(y,z)==0)
                {
                    check=1;
                    break;
                }
            }
        }
        if(check==0)
        {
            break;
        }
    }
    std::cout<<setprecision(12);
    std::cout<<y;
}