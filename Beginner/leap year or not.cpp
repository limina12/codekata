#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%4==0)
	{
	    cout<<"yes";
	}
	else if(n%400==0)
	{
	    cout<<"yes";
	}
	else if(n%100==0)
	{
	    cout<<"no";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
