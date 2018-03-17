#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char s1[21];
    int len,i,c=0;
    cin.getline(s1,21);
    len=strlen(s1);
    for(i=0;i<len;i++)
    {
        if(s1[i]=='I')
        {
            c=c+1;
        }
        if(s1[i]=='V')
        {
            c=c+5;
        }
        if(s1[i]=='X')
        {
            c=c+10;
        }
        if(s1[i]=='L')
        {
            c=c+50; 
        }
        if(s1[i]=='C')
        {
            c=c+100;
        }
        if(s1[i]=='D')
        {
            c=c+500;
        }
        if(s1[i]=='M')
        {
            c=c+1000;
        }
    }
    cout<<c;
	return 0;
}
