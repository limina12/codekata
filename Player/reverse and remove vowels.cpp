#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[10];
	int i,l1;
	cin>>s1;
	l1=strlen(s1);
	for(i=l1-1;i>=0;i--)
	{
	    if(s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u' && s1[i]!='A' && s1[i]!='E' && s1[i]!='I' && s1[i]!='O' && s1[i]!='U')
	    {
	    cout<<s1[i];
	}
	}
	return 0;
}
