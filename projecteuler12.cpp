#include<iostream>
#include<cmath>

int main()
{
    double y,z;
    double sum=0;
    int count;

    for(y=1;;y++)
    {
        count=0;
        sum=sum+y;
        for(z=1;z<=sum;z++)
        {
            if(fmod(sum,z)==0)
            {
                count++;
            }
        }
        if(count>=500)
        {
            break;
        }
        std::cout<<sum<<" ";
    }
    std::cout<<sum;   
}