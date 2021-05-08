#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {

   int temp;
   int n,rem,count,i;
    long int fact,base;
   scanf("%d",&temp);
   
    while(temp--)
    {
       scanf("%d",&n);
        
        if(n==0||n==1)
        {
            fact=1;
        }
       else
       {
       base=1;
       for(i=1;i<=n;i++)
       {
           fact=base*i;
           base=fact;
          
       }
       }
       count=0;
       while(fact>0)
       {
            
          rem=fact%10;
          if(rem==0)
            {
               count++;
            }
           else
           {
               break;
           }
           fact=fact/10;
       }
       printf("%d \n",count);
    }
   return 0;
 }



