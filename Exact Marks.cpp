#include <iostream>
using namespace std;

int main() {
	  int t , n , x;
	  cin>>t;
	  while(t--)
	  {
	      cin>>n>>x;
	      int correct =0 , incorrect =0 ;
	      if(x%3==0)
	      {
	          correct= correct +(x/3);
	      }
	      else if(x%3==1)
	      {
	         correct= correct+(x/3)+1;
	         incorrect+=2; 
	      }
	      else if(x%3==2)
	      {
	          correct= correct+(x/3)+1;
	          incorrect+=1;
	      }
	      
	      if((correct+incorrect)<=n)
	      {
	          cout<<"YES"<<endl;
	          cout<<correct<<" "<<incorrect<<" "<<n-correct-incorrect<<endl;
	    }   
	    else
	    cout<<"NO"<<endl;
	      
	  }
	return 0;
}
