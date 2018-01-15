#include <iostream>
using namespace std;

int main() {
	int n,num,rem=0,mul=0;
	cin>>n;
	num=n;
	while(n>0)
	{
	    rem=n%10;
	    mul=mul+(rem*rem*rem);
	    n=n/10;
	}
	if(num==mul)
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
