#include <iostream>
using namespace std;

int main() {
	int N,Q,i;
	cin>>N>>Q;
	for(i=N+1;i<Q;i++)
	if(i%2==0)
	{
	    cout<<i<<" ";
	}

	return 0;
}
