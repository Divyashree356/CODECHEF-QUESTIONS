Sample Input 1 
6
3 5
380
3 9
380
4 2
0123
5 13
78712
6 10
051827
8 25
37159725
Sample Output 1 
0
3
1
3
2
5
  
Problem Code: PREZ

You are given a string S of length N, which consists of digits from 0 to 9. You can apply the following operation to the string:

Choose an integer L with 1≤L≤N and apply Si=(Si+1)mod10 for each 1≤i≤L.
For example, if S=39590, then choosing L=3 and applying the operation yields the string S=406––––90.

The prefix of string S of length l(1≤l≤∣S∣) is string S1S2…Sl. A prefix of length l is called good if S1=0,S2=0,…,Sl=0. Find the length of the longest good prefix that can be obtained in string S by applying the given operation maximum K times.

#include <iostream>
using namespace std;

int main() {
	 int t , n  , k;
	 cin>>t;
	 while(t--)
	 {
	     cin>>n>>k;
	     string s;
	     cin>>s;
	     int low=0;
	     int high=n+1;
	     while((high-low)>1)
	     {  int ops=0;
	         int mid= (high+low)/2;
	         for(int i=mid-1;i>=0;i--)
	         {
	             int req=(ops+s[i] -'0')%10;
	             if(req!=0)
	              {
	                  ops+=10-req;
	              }
	             
	         }
	         if(ops<=k)
	           low=mid;
	           
	         else
	           high=mid;
	     }
	     cout<<low<<endl;
	 }
	return 0;
}
