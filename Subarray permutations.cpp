A permutation of length N is an array of N integers P=[P1,P2,…,PN] such that every integer from 1 to N (inclusive) appears in it exactly once. For example, [2,3,4,1] is a permutation of length 4.

A subsegment of an array A[L…R]=[AL,AL+1,…,AR] is called good if the subsegment is a permutation of length (R−L+1). For example, the array A=[2,3,1,4,2] contains 3 good subsegments: A[3…3]=[1], A[1…3] =[2,3,1], A[2…5]=[3,1,4,2].

You are given two integers N and K. Find a permutation of length N such that it contains exactly K good subsegments. Print -1 if no such permutation exists.

Sample Input 1 
4
1 1
3 2
4 1
5 3
Sample Output 1 
1
1 3 2 
-1
5 3 1 4 2


#include <iostream>
using namespace std;

int main() {
	
	      int t , n , x,c;
	      cin>>t;
	      while(t--)
	      {
	          cin>>n>>x;
	          if(x==1 && n==1)
	           cout<<1<<endl;
	           
	           else{
	               if(x<2 || x>n )
	                cout<<-1<<endl;
	                
	                else
	                {
	                    
	                 for(int i=0;i<x-1;i++)
	                  {cout<<i+1<<" ";
	                      c=i;
	                  }
	                  for(int i=0;i<n-c-1;i++)
	                  {
	                      cout<<n-i<<" ";
	                  }
	                  cout<<endl;
	                }
	                
	           }
	      }
	return 0;
}
