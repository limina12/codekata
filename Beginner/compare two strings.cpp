#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char str1[1000],str2[1000];
    int len1,len2;
    cin>>str1>>str2;
    len1=strlen(str1);
    len2=strlen(str2);
	if(len1>len2)
	{
	    cout<<str1;
	}
	else if(len2>len1)
	{
	    cout<<str2;
	}
	else
	{
	    cout<<str2;
	}
	return 0;
}
