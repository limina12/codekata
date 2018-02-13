#include <iostream>
using namespace std;
int main() {
	long int n;
	int count=0;
	cin>>n;
	while(n>0)
	{
	    n/=10;
	    count=count+1;
	}
	cout<<count;
	return 0;
}
