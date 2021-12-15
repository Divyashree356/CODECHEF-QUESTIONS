#DECEMBER STARTERS

//Chef just had a big argument with his best friend. He is quite upset and doesn't want anything to remind him of his pal.

Chef has to construct a binary string S of length N. He would like it to be as far from a palindrome as possible, and so he would like S to satisfy the following condition:

Let T be the reverse of S. Then, Si≠Ti for every 1≤i≤N.
Can you help Chef construct S? If there are multiple possible strings that satisfy Chef's condition, you may print any of them.

Note 1: A string S is said to be a binary string if every character of S is either '0' or '1'.

Note 2: Let S be a string of length N. String T is said to be its reverse if Ti=SN+1−i for every 1≤i≤N. For example, the reverse of 10010 is 01001 and the reverse of 0110 is 0110.
//Sample Input 1 
2
9
8
//Sample Output 1 
-1
10010110
  
#include <iostream>
using namespace std;
int main(void) {
	int t;
	cin>>t;
	  while(t--){
	      int n;
	      cin>>n;
        if(n%2!=0)
	      {
	          cout<<-1<<endl;
	         }
	      if(n %2==0)
	      {
	         string s="";
	         for(int i=1;i<=n/2;i++)
	         {
	             s+="01";
	         }
	         cout<<s<<endl;
	      }
	  }
	return 0;
}

