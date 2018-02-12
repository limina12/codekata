#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int n,rem=0,num;
	cin>>n;
	while(n>0)
	{
	    num=n%10;
	    rem=(rem*10)+num;
	    n/=10;
	}
	cout<<rem;
	return 0;
}
