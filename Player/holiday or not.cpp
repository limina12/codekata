#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[15];
	cin.getline(s1,15);
	int l1,i;
	l1=strlen(s1);
	if(s1[i]=='s' || s1[i]=='S')
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
