#include<iostream>

int main()
{
    int x,x1,x2,x3,x4,x5,x6;
    int count=0;
    for(x=0;x<=200;x++)
    {
        for(x1=0;x1<=100;x1++)
        {
            for(x2=0;x2<=40;x2++)
            {
                for(x3=0;x3<=20;x3++)
                {
                    for(x4=0;x4<=10;x4++)
                    {
                        for(x5=0;x5<=4;x5++)
                        {
                            for(x6=0;x6<=2;x6++)
                            {
                                if(x*1+x1*2+x2*5+x3*10+x4*20+x5*50+x6*100==200)
                                {
                                    count++;
                                }
                            }
                        }   
                    }
                }
            }
        }
    }
    std::cout<<count;
}