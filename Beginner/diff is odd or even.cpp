#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b;
	if(a>b)
	{
	    c=a-b;
	}
	else
	{
	    c=b-a;
	}
	if(c%2==0)
	{
	    cout<<"even";
	}
	else
	{
	    cout<<"odd";
	}
	return 0;
}
