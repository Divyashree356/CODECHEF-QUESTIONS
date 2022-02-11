The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, and the loser gets 0 points. If it’s a draw, both players get 1 point each.

The total prize pool of the championship is 100⋅X. At end of the 14 Classical games, if one player has strictly more points than the other, he is declared the champion and gets 60⋅X as his prize money, and the loser gets 40⋅X.

If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55⋅X, and the loser gets 45⋅X.

Given the results of all the 14 games, output the prize money that Carlsen receives.

The results are given as a string of length 14 consisting of the characters C, N, and D.
  
 Sample Input 1 
4
100
CCCCCCCCCCCCCC
400
CDCDCDCDCDCDCD
30
DDCCNNDDDCCNND
1
NNDNNDDDNNDNDN
Sample Output 1 
6000
24000
1650
40
  
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
		
		while (t-->0)
		{
		    int x=sc.nextInt();
		    String str=sc.next();
		    
		    int i=0;
		    int chef=0 , carl=0;
		    while(i!=14)
		    {
		        char ch=str.charAt(i);
		        if(ch=='C')
		        {
		           carl+=2; 
		        }
		        else if(ch=='N')
		        {
		            chef+=2;
		        }
		        else if(ch=='D')
		        {
		            carl++;
		            chef++;
		        }
		        
		       i++;
		      
		      }
		    if(carl>chef)
		       {
		           int ans= 60*x;
		           System.out.println(ans);
		       }
		       else if(chef>carl)
		       {
		           int ans=40*x;
		           System.out.println(ans);
		       }
		       else if(carl==chef)
		       {
		           int ans= 55*x;
		           System.out.println(ans);
		       }
		    }
	}
}
