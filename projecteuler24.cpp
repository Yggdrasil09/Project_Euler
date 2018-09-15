#include<iostream>

int main()
{
    int x[10],y,z;
    double count=0;
    int check;

    for(x[0]=0;x[0]<=9;x[0]++)
    {
            for(x[1]=0;x[1]<=9;x[1]++)
            {
                for(x[2]=0;x[2]<=9;x[2]++)
                {
                    for(x[3]=0;x[3]<=9;x[3]++)
                    {
                        for(x[4]=0;x[4]<=9;x[4]++)
                        {
                            for(x[5]=0;x[5]<=9;x[5]++)
                            {
                                for(x[6]=0;x[6]<=9;x[6]++)
                                {
                                    for(x[7]=0;x[7]<=9;x[7]++)
                                    {
                                        for(x[8]=0;x[8]<=9;x[8]++)
                                        {
                                            for(x[9]=0;x[9]<=9;x[9]++)
                                            {
                                                check=0;
                                                for(y=0;y<10;y++)
                                                {
                                                   for(z=0;z<10;z++)
                                                   {
                                                       if(y==x[z])
                                                       {
                                                           check++;
                                                           break;
                                                       }
                                                   } 
                                                }
                                                if(check==10)
                                                {
                                                    count++;
                                                }
                                                if(count==1000000)
                                                {
                                                    std::cout<<x[0]<<x[1]<<x[2]<<x[3]<<x[4]<<x[5]<<x[6]<<x[7]<<x[8]<<x[9];
                                                    goto label;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }   
                }
            }

    }
    label:
    {
        ;
    }
}