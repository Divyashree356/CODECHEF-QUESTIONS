        JANUARY LONG 2022
          DIV-3

//Two friends, Dragon and Sloth, are writing a computer science examination series. There are three subjects in this series: DSA, TOC, and DM. Each subject carries 100 marks.

//You know the individual scores of both Dragon and Sloth in all 3 subjects. You have to determine who got a better rank.

//The rank is decided as follows:

//The person with a bigger total score gets a better rank
//If the total scores are tied, the person who scored higher in DSA gets a better rank
//If the total score and the DSA score are tied, the person who scored higher in TOC gets a better rank
//If everything is tied, they get the same rank.

//Sample Input 1 
4
10 20 30
30 20 10
5 23 87
5 23 87
0 15 100
100 5 5
50 50 50
50 49 51
  
//Sample Output 1 
SLOTH
TIE
DRAGON
DRAGON

#include <iostream>
using namespace std;

int main() {
	int t , dsa1, dsa2, toc1, toc2,dm1, dm2 ;
	
		cin>>t;
		while(t)
		{
		   cin>>dsa1>>toc1>>dm1>>dsa2>>toc2>>dm2;
		   int s1=dsa1+toc1+dm1;
		   int s2=dsa2+toc2+dm2;
		   
		   if(s1>s2)
		   {
		       cout<<"Dragon"<<endl;
		   }
		   else if(s1==s2)
		   {
		       if(dsa1>dsa2)
		       {
		           cout<<"Dragon"<<endl;
		       }
		       else if(dsa1==dsa2)
		       {
		           if(toc1>toc2)
		           {
		               cout<<"Dragon"<<endl;
		           }
		           else if(toc1==toc2)
		           {
		               cout<<"Tie"<<endl;
		           }
		           else{
		               cout<<"Sloth"<<endl;
		           }
		       }
		       else{
		           cout<<"Sloth"<<endl;
		       }
		      }
		      else{
		          cout<<"Sloth"<<endl;
		      }
		      t--;
		   }
	return 0;
}
