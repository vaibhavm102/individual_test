#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter any num");
    scanf("%d",&n);
    
    
    while (i<n)
    {
         i++;
        if (i%2==0)
        {
           printf("num is even %d \n",i);
        }
        else
        printf("num is odd %d \n",i);
        
    }
    
     
   
} 
