#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[15];
	cin>>s1;
	int len,i,flag=0;
	len=strlen(s1);
	for(i=0;i<len;i++)
	{
	    if(s1[i]=='1' || s1[i]=='0')
	    {
	        flag=1;
	    }
	    else
	    {
	        flag=0;
	    }
	}
	if(flag==1)
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
