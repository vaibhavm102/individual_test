#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\n enter elememnts for matrix");
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
         printf("\n ur matrix is \n");
        
        for( i = 0; i <= 2; i++)
        {
            for( j = 0; j<= 2; j++)
            {
               printf("\t %d",a[i][j]);
              
            }
            printf("\n");  
        }
 /////////////////////////////////////////////////////////////
        printf("\n enter elememnts for matrix");
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            scanf("%d",&b[i][j]);
        }    
    }
         printf("\n ur matrix is \n");
        
        for( i = 0; i <= 2; i++)
        {
            for( j = 0; j<= 2; j++)
            {
               printf("\t %d",b[i][j]);
              
            }
            printf("\n");  
        }
      printf("multiplication of matrix is==> \n");   
      for (i = 0; i <= 2; i++)
      {
        for ( j = 0; j <= 2; j++)
        {
            c[i][j]=a[i][j]*b[i][j];
           printf("\t %d",c[i][j]); 
        }
        printf("\n");    
      }               
    return 0;
    
}
