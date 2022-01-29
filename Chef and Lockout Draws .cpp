Problem Code: LOCKDRAW
Bob and Alice are having a lockout match between them. There are three problems in the contest worth A, B, and C points respectively. Only the first player to solve a problem gets points for that problem. It is impossible for Bob and Alice to solve a problem at the same time. Chef wants to know if there is any chance of a draw if Bob and Alice manage to solve all 3 problems. A draw occurs when both players end with equal number of points.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three space separated integers A, B, and C.
  
Sample Input 1 
3
2 5 2
4 2 2
3 5 5
Sample Output 1 
NO
YES
NO

#include <iostream>
using namespace std;

int main() {
	int t , A , B, C;
	cin>>t;
	while(t--)
	{
	    cin>>A>>B>>C;
	    if(A+B==C || B+C==A || A+C==B)
	     {cout<<"yes"<<endl;
	         
	     }
	     
	    else
	     {cout<<"NO"<<endl;}
	    
	}
	return 0;
}
