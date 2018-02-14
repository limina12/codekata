#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s[10];
	int len,i;
	cin>>s;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	    if(s[i]%2==1)
	    {
	        cout<<s[i]<<" ";
	    }
	}
	return 0;
}
