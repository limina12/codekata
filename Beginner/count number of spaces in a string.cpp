#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int length,i,c=0;
	char str[100];
	cin.getline(str,100);
	for(i=0;str[i]!='\0';i++)
	{
	    if(str[i]==' ')
	    {
	    c++;
	    }
	}
	cout<<c;
	return 0;
}
