#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int grid[20][20];
    int y,z;
    for(y=0;y<20;y++)
    {
        for(z=0;z<20;z++)
        {
            std::cin>>grid[y][z];
        }
    }
    double mult,check=1;
    int t,t1;
    for(y=16;y>=0;y--)
    {
        t=0;
        t1=y;
        while(t1<=16)
        {
            mult=grid[t1][t]*grid[t1+1][t+1]*grid[t1+2][t+2]*grid[t1+3][t+3];
            t1++;
            t++;
            if(mult>check)
            {
                check=mult;
            }
        }
    }
    
    std::cout<<setprecision(10);
    std::cout<<check;
}