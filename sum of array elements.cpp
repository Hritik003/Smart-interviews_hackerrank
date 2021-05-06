#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
 long int t,n,i;
scanf("%ld",&t);
 while(t--)
        {
      
         scanf("%ld",&n);
            long int arr[n],sum=0;
            
            for(i=0;i<n;i++)
            {
                scanf("%ld",&arr[i]);
            }
            for(i=0;i<n;i++)
            {
                sum=sum+arr[i];
            }
            printf("%d \n",sum);
        }
          return 0;
}

