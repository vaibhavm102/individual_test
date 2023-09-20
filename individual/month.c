#include<stdio.h>
int main()
{
    int a;
   printf("plz select ur coice \n 1,2,3,4,5,6,7,8,9,10,11,12 \n");
   scanf("%d",&a);
   switch (a)
   {
   case 1 :
       printf("month is janaury");
    break;
   case 2 :
       printf("month is feb");
       break;
    case 3 :
       printf("month is march");
    break;
    case 4 :
       printf("month is April");
    break;
    case 5 :
       printf("month is may");
    break;
    case 6 :
       printf("month is jun");
    break;
    case 7 :
       printf("month is july");
    break;
    case 8 :
       printf("month is Aug");
    break;   
    case 9 :
       printf("month is sep");
    break;
    case 10 :
       printf("month is oct");
    break;
    case 11 :
       printf("month is nov");
    break;
    case 12 :
       printf("month is Dec");
    break;
   default:
   printf("invalid input sorry");
    break;
   }
}