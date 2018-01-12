#include <iostream>
using namespace std;

int main() {
	char s;
	cin>>s;
	if((s>='a' && s<='z') || (s>='A' && s<='Z'))
	{
	    cout<<"alphabet";
	}
	else
	{
	    cout<<"not an alphabet";
	}
	return 0;
}
