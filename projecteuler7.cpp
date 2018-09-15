#include<iostream>
#include<cmath>

int main()
{
    double y,z;
    int count=0;
    int check;

    for(y=2;;y++)
    {
        check=0;
        for(z=2;z<y/2;z++)
        {
            if(fmod(y,z)==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            count++;
        }
        if(count==10002)
        {
            break;
        }
    }
    
    std::cout<<y;
}