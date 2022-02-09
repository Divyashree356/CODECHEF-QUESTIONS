Given N points of the form (xi,yi) on a 2-D plane.

From each point, you draw 2 lines one horizontal and one vertical. Now some of the lines may overlap each other, therefore you are required to print the number of distinct lines you can see on the plane.

Note:

Two horizontal lines are distinct if they pass through different y coordinates.
Two vertical lines are distinct if they pass through different x coordinates.
  
  Sample Input 1 
3
4
1 1
1 0
0 1
0 0
5
0 0
0 1
0 2
0 3
0 4
1
10 10
Sample Output 1 
4
6
2


/* package codechef; // don't place package name! */


import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Arrays;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    int n=sc.nextInt();
		    int[] x= new int[n];
		    int[] y=new int[n];
		    
		    for(int i=0;i<n;i++)
		    {
		        x[i]=sc.nextInt();
		        y[i]=sc.nextInt();
		    }
		    Arrays.sort(x);
		    Arrays.sort(y);
		    int countx=1;
		    int county=1;
		    for(int i=0;i<n-1;i++)
		    {
		        if(y[i]!=y[i+1])
		          county++;
		      
		        if(x[i]!=x[i+1])
		          countx++;
		    }
		    
		    int ans=countx+county;
		    System.out.println(ans);
		}
	}
}
