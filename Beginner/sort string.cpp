#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char s[10];
	int len,i,j,temp;
	cin>>s;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	    for(j=i+1;j<len;j++)
	    {
	        if(s[i]>s[j])
	        {
	            temp=s[i];
	            s[i]=s[j];
	            s[j]=temp;
	        }
	    }
	}
	for(i=0;i<len;i++)
	{
	    cout<<s[i];
	}
	
	return 0;
}
