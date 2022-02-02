There are three cities and thus three EVMs. An insider told Chef that his party got A,B,C votes respectively in these three cities according to the EVMs. Also, the total number of votes cast are P,Q,R respectively for the three cities.

Chef, being the party leader, can hack at most one EVM so that his party wins. On hacking a particular EVM all the votes cast in that EVM are counted in favor of Chef's party.

A party must secure strictly more than half of the total number of votes cast in order to be considered the winner. Can Chef achieve his objective of winning by hacking at most one EVM?

Sample Input 1 
3
1 1 1 3 3 3
49 1 49 50 100 50
0 0 0 1 1 1
  
Sample Output 1 
YES
YES
NO

#include <iostream>
using namespace std;

int main() {
        int t , a[3],b[3];
        cin>>t;
        while(t--)
        {
            cin>>a[0]>>a[1]>>a[2];
            cin>>b[0]>>b[1]>>b[2];
            
            float mean=(b[0]+b[1]+b[2])/2.0;
            
            if( (a[0]+a[1]+b[2]) >mean || (a[0]+a[2]+b[1]) >mean ||(a[1]+a[2]+b[0] )>mean)
                 {cout<<"YES"<<endl;}
                 
            else
                {cout<<"NO"<<endl;}
        }
	return 0;
}
