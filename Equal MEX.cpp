The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:

The MEX of [2,2,1] is 0 because 0 does not belong to the array.
The MEX of [3,1,0,1] is 2 because 0 and 1 belong to the array, but 2 does not.
The MEX of [0,3,1,2] is 4 because 0,1,2 and 3 belong to the array, but 4 does not.
You're given an array A containing 2⋅N integers where 0≤Ai≤N. Is it possible to reorder the elements of the array in such a way that the MEX of the first N elements is equal to the MEX of the last N elements?

 Sample Input 1 
4
2
0 0 0 1
2
0 0 1 1
3
1 3 2 3 3 2
3
0 0 1 1 1 2
Sample Output 1 
NO
YES
YES
NO


#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t ,n;
	
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<int> vec(2*n);
     	map<int , int> mp;
	    for(int i=0;i<2*n;i++)
	    {
	        cin>>vec[i];
	        mp[vec[i]]++;
	    }
	    
	   bool check=true;
	   
	   for(int i=0;i<=n;i++)
	   {
	       if(mp[i]==0)
	        break;
	        
	       else if(mp[i]==1)
	        check=false;
	  }
	  cout<<(check? "yes\n":"NO\n");
	}
	
	return 0;
}
