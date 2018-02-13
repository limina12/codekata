#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[10],s2[10];
	int len,i;
	cin>>s1;
	cin>>s2;
	len=strlen(s1);
	for(i=0;s2[i]!='\0';i++)
	{
	    s1[len]=s2[i];
	    len++;
	}
	cout<<s1;
	return 0;
}
