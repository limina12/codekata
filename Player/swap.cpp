#include <iostream>
#include<string.h>
using namespace std;
int main() {
	char s1[100000];
	int len,i,temp;
	cin.getline(s1,100000);
    len=strlen(s1);
    for(i=0;i<len;i+=2)
    {
        temp=s1[i];
        s1[i]=s1[i+1];
        s1[i+1]=temp;
    }
    cout<<s1;
	return 0;
}
