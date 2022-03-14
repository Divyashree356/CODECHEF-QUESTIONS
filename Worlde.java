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
		    String hidden= sc.next();
		    String guess = sc.next();
		    String answer="";
		    int len= hidden.length();
		    int i=0;
		    while(i<len)
		    {
		        if(hidden.charAt(i) == guess.charAt(i))
		        {
		            answer=answer+ 'G';
		        }
		        else{
		            answer=answer+ 'B';
		        }
		        i++;
		    }
		    System.out.println(answer);
		}
	}
}
