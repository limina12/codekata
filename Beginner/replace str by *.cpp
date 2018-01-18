#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char str[20];
	int len;
	cin.getline(str,100);
	len=strlen(str);
	if(len%2==0)
	{
	    str[len/2]='*';
	    str[(len/2)-1]='*';
	    cout<<str;
	}
	else
	{
	    str[len/2]='*';
	    cout<<str;
	}
	return 0;
}
