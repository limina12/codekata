#include <iostream>
using namespace std;
int main() {
	long int a,b,i;
	cin>>a>>b;
	for(i=100000;i>0;i--)
	{
	    if((a%i==0) && (b%i==0))
	    {
	        cout<<i;
	        break;
	    }
	}
	return 0;
}
