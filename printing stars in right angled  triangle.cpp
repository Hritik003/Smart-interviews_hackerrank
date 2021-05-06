#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int x=1,row,col,n,temp;
    
    scanf("%d",&temp);
    
    while(temp--)
    {
        scanf("%d",&n);
         printf("Case #%d: \n",x++);
    for(row=1;row<=n;row++)
    {
        
        for(col=row; col<n; ++col)
        {
            printf(" ");
        }
       
        for(col=1; col<=row; ++col)
        {
            printf("*");
        }
      
        printf("\n");
        
    }
    }
    
         return 0;  
    
}

