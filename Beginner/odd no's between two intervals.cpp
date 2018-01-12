#include <iostream>
using namespace std;

int main() {
	int N,Q,i;
	cin>>N>>Q;
	for(i=N+1;i<Q;i++)
	if(i%2==1)
	{
	    cout<<i<<" ";
	}

	return 0;
}
