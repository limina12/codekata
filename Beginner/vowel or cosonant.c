#include <stdio.h>
int main(void)
{
	char a,b;
	scanf("%s",&a);
	b=tolower(a);
	if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
