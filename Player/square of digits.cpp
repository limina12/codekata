#include <iostream>
using namespace std;
int main(void) {
	long int n,m,a,sum=0;
	cin>>n;
	while(n>0)
	{
		a=n%10;
		m=a*a;
		sum=sum+m;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
