#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[5];
	int len,i,rom;
	int a[5];
	cin.getline(s1,5);
	len=strlen(s1);
	for(i=0;i<len;i++)
	{
	    if(s1[i]=='I')
	    {
	        a[i]=1;
	    }
	    if(s1[i]=='V')
	    {
	        a[i]=5;
	    }
	    if(s1[i]=='X')
	    {
	        a[i]=10;
	    }
	    
	}
	if(a[0]>=a[1])
	{
	    rom=a[0]+a[1];
	}
	else
	{
	    rom=a[1]-a[0];
	}
	cout<<rom;
	return 0;
}
