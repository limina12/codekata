#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  if(n>1)
  {
    printf("positive");
  }
  if(n<0)
  {
    printf("negative");
  }
  else
  {
    printf("zero");
  }
}
