#include<iostream>

int main()
{
    int x,y,count=1,count1=1;
    for(y=11;y<100;y++)
    {
        for(x=10;x<y;x++)
        {
            if(x/10==y%10)
            {
                if((double)x/y==(double)(x%10)/(y/10))
                {
                    count=count*y; 
                    count1=count1*x;    
                }
                goto label;
            }
            if(x%10==y/10)
            {
                if((double)x/y==(double)(x/10)/(y%10))
                {
                    count=count*y; 
                    count1=count1*x; 
                }
            }
            label:
            {
                ;
            }
        }
    }
    for(y=(count>count1)?count1:count;y>=1;y--)
    {
        if(count%y==0&&count1%y==0)
        {
            count=count/y;
            count1=count1/y;
        }
    }
    std::cout<<count;
}