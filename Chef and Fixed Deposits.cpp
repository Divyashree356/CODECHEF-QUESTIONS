              JANUARY LONG 2022
                DIV-3

//Chef wants to make a purchase. For this, he needs X gold coins, but he has none at the moment.

//Chef has N fixed deposits, the ith of which is worth Ai coins. He wants to open the minimum number of these deposits so that he has at least X coins.

//You have to tell Chef the minimum number of fixed deposits he must open in order to have X coins, or say that this is impossible.

//Sample Input 1 
4
4 6
4 3 5 1
3 15
1 5 3
2 5
10 3
4 7
1 2 3 4
  
//Sample Output 1 
2
-1
1
2
  
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int t  ;
    int n ,x ,arr[100];
	cin>>t;
	while(t)
	{

	    cin>>n>>x;
	    bool flag=false;
	   
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n,greater<>());
	    int s=0;
	    int i;
	    for(i=0;i<n;i++)
	    {
	        s+=arr[i];
	        if(s>=x)
	        {
	            flag=true;
	            break;
	        }
	        
	    }  
	    if(flag)
	    {
	        cout<<i+1<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	    t--;
	  }
	return 0;
}
