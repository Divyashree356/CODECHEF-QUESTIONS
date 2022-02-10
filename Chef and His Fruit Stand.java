Chef has closed his restaurant and decided to run a fruit stand instead. His signature dish is a fruit chaat consisting of 2 bananas and 1 apple. He currently has X bananas and Y apples. How many chaats can he make with the fruits he currently has?
Sample Input 1 
3
72 50
38 93
51 4
Sample Output 1 
36
19
4


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
		while (t-->0) 
		{
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    
		    int banana= x/2;
		    
		    if(banana<y)
		    {
		        System.out.println(banana);
		    }
		    else{
		        System.out.println(y);
		    }
		    }
		    sc.close();
	}
}
