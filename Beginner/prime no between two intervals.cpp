#include <iostream>
using namespace std;

int main() {
	int a,b,i,j,c=0;
	cin>>a>>b;
	for(i=a+1;i<b;i++)
	{
	    c=0;
	    for(j=1;j<b;j++)
	    {
	        if(i%j==0)
	        {
	            c++;
	        }
	    }
	    
	    if(c==2)
	    {
	        cout<<i<<" ";
	    }
	        
   }
	return 0;
}
