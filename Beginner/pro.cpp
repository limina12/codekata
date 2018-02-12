#include <iostream>
using namespace std;

int main() {
	int n,pro=1,num;
	cin>>n;
	while(n>0)
	{
	    num=n%10;
	    pro=pro*num;
	    n/=10;
	}
	cout<<pro;
	
	return 0;
}
