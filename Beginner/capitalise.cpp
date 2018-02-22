#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char str[20];
	int len,i;
	cin.getline(str,20);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
	    if(str[i]==str[0])
	    {
	        str[i]=toupper(str[i]);
	    }
	    if(str[i]==' ')
	    {
	        str[i+1]=toupper(str[i+1]);
	        i++;
	    }
	}
	for(i=0;i<len;i++)
	{
	    cout<<str[i];
	}
	return 0;
}
