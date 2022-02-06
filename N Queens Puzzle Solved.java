Although the formula is valid for large N, Chef is interested in finding the value of function f(N) = (0.143⋅N)N for a given small value of N. Since Chef is busy understanding the proof of the formula, please help him calculate this value.

Print the answer rounded to the nearest integer. That is, if the actual value of f(N) is x,

Print ⌊x⌋ if x−⌊x⌋<0.5
Otherwise, print ⌊x⌋+1
where ⌊x⌋ denotes the floor of x.
  
Sample Input 1 
2
4
10
Sample Output 1 
0
36


/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t--!=0)
		{
		    int n=sc.nextInt();
		    double p= 0.143*n;
		    double fN= Math.pow(p , n);
		    double res= Math.round(fN);
		    System.out.println((int)res);
		    }
		    sc.close();
	}
}
