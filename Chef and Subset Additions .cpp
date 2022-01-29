Chef is asked to write a program that takes an array A of length N and two integers X,Y as input and modifies it as follows:

Choose a random subset of elements of A (possibly empty)
Increase all the elements of the chosen subset by X
Increase the remaining elements in A by Y
You are given N, X, Y, A and the array B that is returned by Chef's program. Determine whether Chef's program gave the correct output.
  
Sample Input 1 
3
3 2 5
9 5 1
11 10 3
3 2 5
9 5 1
11 7 3
3 2 5
9 5 1
11 7 7
  
Sample Output 1 
Yes
Yes
No

#include <iostream>
using namespace std;

int main() {
	int t , a[1000] , b[1000] , n , x ,y;
	cin>>t;
	
	while(t--)
	{   int c=0;
	    cin>>n>>x>>y;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]-a[i]!=x && b[i]-a[i]!=y)
	          c=1;
	         
	    }
	   if(c==1) 
	   cout<<"NO"<<endl;
	   
	   else
	    cout<<"YES"<<endl;
	}
	return 0;
}
