#include <stdio.h>
int main(void)
{
	char b;
	scanf("%s",&b);
	if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u' || b=='A' || b=='E' || b=='I' || b=='O' || b=='U')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
