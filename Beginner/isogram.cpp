#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char s[10];
	int len,i,j,flag=0;
	cin.getline(s,10);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	    for(j=i+1;j<len;j++)
	    {
	        if(s[i]==s[j])
	        {
	            flag=1;
	            break;
	        }
	    }
	}
	if(flag==0)
	{
	    cout<<"Yes";
	}
	else
	{
	    cout<<"no";
	}
	    return 0;
}
