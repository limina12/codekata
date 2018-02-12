#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char s[10];
	int len,i,j,flag=0;
	cin.getline(s,10);
	len=strlen(s);
    for(i=0;i<len;i++)
    {
     if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
     {
         cout<<s[i];
     }
    }
	    return 0;
}
