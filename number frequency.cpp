#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int s,i,q,j,c;
    scanf("%d",&s);
    int arr[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&q);
    int Q[q];
    for(i=0;i<q;i++)
    {
        c=0;
        scanf("%d",&Q[i]);
        for(j=0;j<s;j++)
        {
            if((Q[i])==(arr[j]))
                c++;
        }
        printf("%d \n",c);
    }
    
    
    return 0;
}
