Chef is currently working for a secret research group called NEXTGEN. While the rest of the world is still in search of a way to utilize Helium-3 as a fuel, NEXTGEN scientists have been able to achieve 2 major milestones:

Finding a way to make a nuclear reactor that will be able to utilize Helium-3 as a fuel
Obtaining every bit of Helium-3 from the moon's surface
Moving forward, the project requires some government funding for completion, which comes under one condition: to prove its worth, the project should power Chefland by generating at least A units of power each year for the next B years.

Help Chef determine whether the group will get funded assuming that the moon has X grams of Helium-3 and 1 gram of Helium-3 can provide Y units of power.

Sample Input 1 
4
1 2 3 4
4 3 2 1
2 18 9 4
1 100 2 49
Sample Output 1 
Yes
No
Yes
No


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
		    int x= sc.nextInt();
		    int y= sc.nextInt();
		    int a= sc.nextInt();
		    int b= sc.nextInt();
		    
		    int req= x*y;
		    int prod= a*b;
		    
		    if(req<=prod)
		    {
		        System.out.println("yes");
		    }
		    else{
		         System.out.println("no");
		    }
		    
		}
	}
}
