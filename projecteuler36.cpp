#include<iostream>

long binary(long);

int main()
{
    long x,y,z;
    long rev=0,rem,rep;
    long rev1=0,rem1,rep1;
    long t;
    long sum=0;

    for(y=1;y<1000000;y++)
    {
        rep=y;
        while(rep!=0)
        {
            rem=rep%10;
            rev=rev*10+rem;
            rep=rep/10;
        }
        rep1=binary(y);
        t=binary(y);
        while(rep1!=0)
        {
            rem1=rep1%10;
            rev1=rev1*10+rem1;
            rep1=rep1/10;
        }
        if(y==rev&&rev1==t)
        {
            sum=sum+y;
        }
        rev=0;
        rev1=0;
    }

    std::cout<<sum;
}

long binary(long x)
{
    long y=0;
    long z=1;
   while(x!=0)
   {
       y=y+(x%2)*z;
       x=x/2;
       z=z*10;
   } 
   return y;
}