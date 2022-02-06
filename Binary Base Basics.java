You are given a binary string S and an integer K. In one operation, you can pick any bit and flip it, i.e turn 0 to 1 or 1 to 0. Can you make the string S a palindrome using exactly K operations?

Print YES if this is possible, and NO if it is not.

Sample Input 1 
2
3 0
110
6 1
101100
Sample Output 1 
NO
YES

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
		    int n =sc.nextInt();
		    int k =sc.nextInt();
		    String s= sc.next();
		    
		    int l=0, r=n-1;
		    int count=0;
		    while(l<=r)
		    {
		        if(s.charAt(l)!=s.charAt(r))
		        {
                    count++;
		        }
		        l++;
		        r--;
		    }
		  //  System.out.println(count);
		    if(count<=k)
		    {
		        if((k-count)%2==0)          //check even Number of flips
		    System.out.println("YES");
		    
		      else if(n%2!=0)
		        System.out.println("YES");   //check if string length is odd
		    
		    else
		        System.out.println("NO");
		        
		    }
		   else{
		        System.out.println("NO");
		   }
		    
		}
		sc.close();
	}
}
