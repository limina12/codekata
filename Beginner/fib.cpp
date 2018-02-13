#include <iostream>
using namespace std;

int main() {
	int n,a=0,b=1,nextterm,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	   cout<<a<<" ";
	   nextterm=a+b;
	   a=b;
	   b=nextterm;
	}
	return 0;
}
