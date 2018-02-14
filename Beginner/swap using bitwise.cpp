#include <iostream>
using namespace std;

int main() {
	int i,k;
	cin>>i>>k;
	i=i^k;
	k=i^k;
	i=i^k;
	cout<<i<<" "<<k;
	return 0;
}
