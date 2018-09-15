#include<iostream>
#include<cmath>

int main()
{
       double y,z;
       y=pow(10,39);
       z=pow(10,40);
       double t,t1;
       double count=0;
       int count1=0;
       int count2=0;
       for(t=y;t<=z;t++)
       {
           std::cout<<t<<" ";
           count1=0;
           count2=0;
           for(t1=1;t1<=t;t1=t1*10)
           {
               if(fmod(t,t1*10)/t1==1)
               {
                   count1++;
               }
               else if(fmod(t,t1*10)/t1==2)
               {
                   count2++;
               }
           }
           if(count1==20&&count2==20)
           {
               count++;
           }
       }
       std::cout<<count;
}