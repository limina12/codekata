#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[10];
	int len,flag=0,i;
	cin.getline(s1,10);
	len=strlen(s1);
	for(i=0;i<len;i++)
	{
	    if((s1[i]>='0') && (s1[i]<='9'))
	    {
	        flag=1;
	    }
	    else
	    {
	        flag=0;
	        break;
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
