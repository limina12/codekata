#include <iostream>
using namespace std;
int main() {
	int a,c,d;
	char b;
	cin>>a>>b>>c;
	if(b=='%')
	{
	    d=a%c;
	    cout<<d;
	}
	if(b=='/')
	{
	    d=a/c;
	    cout<<d;
	}
	return 0;
}
