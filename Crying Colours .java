//Sample Input 1 
2
3
3 0 0
0 3 0
0 0 3
5
2 1 2
1 4 0
2 0 3

  //Sample Output 1 
0
3

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{  Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t>0)
	    {
	        t--;
		int n =sc.nextInt();
		int[][] arr=new int[3][3];
		
		for(int i=0;i<3;i++)
		{
		    for(int j=0;j<3;j++)
		    {
		        arr[i][j]=sc.nextInt();
		    }
		}
		if(arr[0][0]==n && arr[1][1]==n && arr[2][2]==n)
		{
		    System.out.println(0);
		   continue;
		 }
		
		int left=arr[1][0] +arr[2][1] +arr[2][0];
		int right=arr[0][1] +arr[0][2] +arr[1][2];
		
		System.out.println(Math.max(left,right));
		  
			}
}
}
