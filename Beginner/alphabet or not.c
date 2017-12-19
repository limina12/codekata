#include <stdio.h>
int main(void)
{
  char c;
  scanf("%s",&c);
  if(c>='A' && c<='Z' || c>='a' && c<='z')
	{
		printf("Alphabet");
	}
	else
	{
		printf("not an alphabet");
	}
}	
	
