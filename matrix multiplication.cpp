#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    long int i,j,k,temp,row1,col1,row2,col2;
    scanf("%ld",&temp);
    while(temp--)
    {
        
       long int arr1[50][50],arr2[50][50],arr[50][50];
        scanf("%ld %ld",&row1,&col1);
        
      
        
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
            scanf("%ld",&arr1[i][j]);  
            }
        }
       scanf("%ld %ld",&row2,&col2);
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
            scanf("%ld",&arr2[i][j]);  
            }  
            
         }
   
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                arr[i][j]=0;
                   
               for(k=0;k<col2;k++)    
                  {    
               arr[i][j]+=arr1[i][k]*arr2[k][j];    
                 }    
                printf("%ld ",arr[i][j]);
            }
            printf("\n");
        }
    
            
        
        
    }
    
    return 0;
}

