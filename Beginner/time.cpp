#include <iostream>
using namespace std;

int main() {
	int t,min=0,hr=0;
	cin>>t;
	min=t%60;
	hr=t/60;
	cout<<hr<<" "<<min;
	return 0;
}
