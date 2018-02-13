#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char s[20];
	int len,i,count=0;
	cin.getline(s,20);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	    if(s[i]>='0' && s[i]<='9')
	    {
	        count=count+1;
	    }
	}
	cout<<count;
	return 0;
}
