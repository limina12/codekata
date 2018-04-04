#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[10],s2[10];
	int l1,l2,i,j,count=0;
	cin.getline(s1,10);
	cin.getline(s2,10);
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<l1;i++)
	{
	    if(s1[i]!=s2[i])
	    {
	        count++;
	    }
	}
	if(count==1)
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
