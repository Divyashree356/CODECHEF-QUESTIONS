//DECEMBER LONG CHALLENGE
//Sample Input 1 
3
1
1
2
1 2
3
1 1 2
//Sample Output 1 
0
-1
2

#include <iostream>
using namespace std;
 int listOfList(int n)
 {
     int arr[n] , frequency[200005]={0};
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         frequency[arr[i]]++;
     }
     int maxi=-1;
     int count=0;
     for(int i=0;i<200005;i++)
     {
         if(frequency[i])
         {count++;}
         
         maxi= max(maxi , frequency[i]);
     }
     if(count==1)
       return 0;
      
     else if(maxi==1)
       return -1;
       
      else
      {
          int x= n-maxi;
          return x+1;
      }
      return 0;
 }
 int main() {
  int t , n ;
  cin>>t;
  while(t--)
  {
      cin>>n;
     int ans=listOfList(n);
     cout<<ans<<endl;
  }
	return 0;
}
