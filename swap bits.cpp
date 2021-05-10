#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
swap_bits(int b)
{
    int arr[100];
    int s=sizeof(b);
    arr[s]=b;
    int i;
    
    for(i=0;i<s;i+=2)
    {
        if(i+1 == s)
        {
            break;
        }
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        
     }
    return b;
    
}

int main() {

    int temp,rem,bin,base,dec,x,n;
    scanf("%d",&temp);
    while(temp--)
    {
        scanf("%d",&n);
       x=0,dec=0;
        bin=0,base=1;
        
        while(n>0)
        {
          rem=n%2;
          bin=bin+(rem*base);
          base=base*10;
          n=n/2;
            
        }
        swap_bits(bin);
        rem1=0;
        
      while (bin != 0) {
        rem = bin % 10;
        bin /= 10;
        dec += rem * pow(2, x);
        ++x;
    }
        
        printf("%d \n",dec);
    }
    return 0;
}

