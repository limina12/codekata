#include <iostream>
using namespace std;
int main() {
	int a=1,b=1,c,i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cout<<a<<" ";
	    c=a+b;
	    a=b;
	    b=c;
	}
	return 0;
}
