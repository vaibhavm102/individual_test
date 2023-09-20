#include<stdio.h>
int main()
{
    int a,i,n,table;
    printf("enter any no");
    scanf("%d",&n);

    for ( i = 1; i < 10; i++)
    {
        table=i*n;
        printf("%d \n",table);
    }
    
}