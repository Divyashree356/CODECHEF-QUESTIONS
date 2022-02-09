Chef wants to store some important numerical data on his personal computer. He is using a new data type that can store values only from 0 till N both inclusive. If this data type receives a value greater than N then it is cyclically converted to fit into the range 0 to N. For example:

Value N+1 will be stored as 0.
Value N+2 will be stored as 1.
and so on…

Given X, the value chef wants to store in this new data type. Determine what will be the actual value in memory after storing X.
  
  Sample Input 1 
5
15 0
15 10
11 12
27 37
50 49
Sample Output 1 
0
10
0
9
49



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
		
		int t= sc.nextInt();
		while(t-->0)
		{
		    int n =sc.nextInt();
		    int x=sc.nextInt();
		    
		   if(x<=n)
		   {
		       System.out.println(x);
		   }
		   else{
		       while(x>n)
		       {
		           x=x-n-1;
		       }
		       System.out.println(x);
		   }
		}
		sc.close();
	}
}
