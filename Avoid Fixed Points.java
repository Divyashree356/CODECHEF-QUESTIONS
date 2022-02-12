Chef has a sequence of N integers A=[A1,A2,…,AN]. He can perform the following operation any number of times (possibly, zero):

Choose any positive integer K and insert it at any position of the sequence (possibly the beginning or end of the sequence, or in between any two elements).
For example, if A=[5,3,4] and Chef selects K=2, then after the operation he can obtain one of the sequences [2–,5,3,4],[5,2–,3,4],[5,3,2–,4], or [5,3,4,2–].

Chef wants this sequence to satisfy the following condition: for each 1≤i≤∣A∣, Ai≠i. Here, ∣A∣ denotes the length of A.

Help Chef to find the minimum number of operations that he has to perform to achieve this goal. It can be proved that under the constraints of the problem, it's always possible to achieve this goal in a finite number of operations.

 Sample Input 1 
3
3
2 4 5
3
4 1 3
4
3 2 4 2
Sample Output 1 
0
1
2
  
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
		int t = sc.nextInt();
		while(t-->0)
		{
		    int  n= sc.nextInt();
		    int[] arr= new int[n];
		    
		    for(int i=0;i<n;i++)
		    {
		        arr[i]= sc.nextInt();
		    }
		    
		    int c=0;
		    int x=0;
		    for(int i=0;i<n;i++)
		    {
		        x=i+c+1; //adding with 1 because indexing from 1
                    if(arr[i]==x)
                     c++;
		    }
		    
		    System.out.println(c);
		    
		}
	}
}
