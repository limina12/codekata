#include <iostream>
#include<string.h>
using namespace std;

int main() {
int length,c=0,i;
char str1[100];
cin.getline(str1,100);
length=strlen(str1);
for (i = 0; str1[i]!='\0'; i++)
{
		if (str1[i]==' ')
		{
		   c++;
		}
}	
cout<<c+1;
return 0;
}
	
