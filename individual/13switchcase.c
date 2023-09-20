#include<stdio.h>
int main()
{
  int a,b,r,arect,len,wid;
  float pi=3.14,acirc;
  printf(" 11)area of circle \n 22) area of rectangle \n plz select ur choice \n");
  scanf("%d",&a);

  switch(a)
  {
  case 11 :
    printf("enter value of radus");
    scanf("%d",&r);
     acirc=pi*r*r;
     printf("%d",acirc);

    break;

     case 22:
     printf("enter value of len & wid");
    scanf("%d %d",&len,&wid);
     arect=len*wid;
     printf("%d",arect);

    break;
  
  default:
  printf("invalid input sorry");
    break;
  }
   
  }