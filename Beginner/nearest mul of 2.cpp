#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n,c,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        c=pow(2,i);
        if(c>n)
        {
            cout<<c;
            break;
        }
    }
	return 0;
}
