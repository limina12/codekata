#include <iostream>
using namespace std;

int main() {
	char str[10];
	int i,flag=0;
	cin.getline(str,100);
	for(i=0;str[i]!='\0';i++)
	{
	    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
	{
	    flag=1;
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
