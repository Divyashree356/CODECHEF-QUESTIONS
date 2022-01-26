
//Input Format
The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers X,Y and Z — the number of stocks, the price they were bought at, and the price they can be sold at, respectively.

//Output Format
For each test case print on a new line a single integer — Chef's profit after selling all the stocks he has.

Sample Input 1 
3
2 5 20
3 1 2
4 5 6
Sample Output 1 
30
3
4

#include <iostream>
using namespace std;

int main() {
	int t , x , y ,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    
	    int cp=x*y;
	    int sp=x*z;
	    
	    cout<<sp-cp<<endl;
	}
	return 0;
}
