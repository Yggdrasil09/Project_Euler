#include<iostream>

int main()
{
    int y;
    int x[120];
    for(y=0;y<120;y++)
    {
        std::cin>>x[y];
    }
    int sum=x[0];
    int t=1;
    for(y=2;y<=15;y++)
    {
        if(x[t]>=x[t+1])
        {
            sum=sum+x[t];
            std::cout<<"!"<<x[t]<<"-"<<x[t+1]<<" ";
            t=t+y;
        }
        else
        {
            sum=sum+x[t+1];
            std::cout<<x[t]<<"-!"<<x[t+1]<<" ";
            t=t+y+1;
        }
    }
    std::cout<<sum;
}