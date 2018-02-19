#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char str[10];
	int len,n,c;
	cin.getline(str,10);
	cin>>n;
	len=strlen(str);
	c=len-n;
	cout<<str[c];
	return 0;
}
