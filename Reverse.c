#include<stdio.h>
void main()
{
  int num,rev=0,m;
  printf("Enter a number : ");
  scanf("%d",&num);
  while(num>0)
  {
    m=num%10;
    rev=rev*10+m;
    num=num/10;
    
  }
  printf("The reversed number is : %d",rev);
}
