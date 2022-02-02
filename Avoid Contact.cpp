A hostel has N rooms in a straight line. It has to accommodate X people. Unfortunately, out of these X people, Y of them are infected with chickenpox. Due to safety norms, the following precaution must be taken:

No person should occupy a room directly adjacent to a room occupied by a chickenpox-infected person. In particular, two chickenpox-infected people cannot occupy adjacent rooms.
For example, if room 4 has a chickenpox-infected person, then nobody should occupy rooms 3 and 5. Similarly, if room 1 has a chickenpox-infected person then nobody should occupy room 2.

What's the minimum value of N for which all the people can be accommodated in the hostel, following the above condition?

Sample Input 1 
3
4 0
5 3
3 3
Sample Output 1 
4
8
5

#include <iostream>
using namespace std;

int main() {
	int t ,x ,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    int n=x-y;
	    
	    if(y==0)
	    {
	        cout<<x<<endl;
	    }
	    else if(n==0)
	    {
	        cout<<(y*2)-1<<endl;
	    }
	    else
	    {
	        cout<<(y*2)+n<<endl;
	    }
	}
	return 0;
}
