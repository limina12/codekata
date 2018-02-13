#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[15];
	cin>>s1;
	int len,k,i;
	cin>>k;
	len=strlen(s1);
	for(i=0;i<k;i++)
	{
	    cout<<s1[i];
	}
	return 0;
}
