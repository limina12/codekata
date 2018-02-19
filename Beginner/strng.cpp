#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char str[15];
	int len,n,i;
	cin>>str;
	cin>>n;
	len=strlen(str);
	for(i=n;i<=len;i++)
	{
	    cout<<str[i];
	}
	return 0;
}
