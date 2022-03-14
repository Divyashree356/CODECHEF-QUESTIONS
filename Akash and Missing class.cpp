#include <iostream>
using namespace std;

int main() {
	    int t , N ;
	    cin>>t;
	    while(t--)
	    {
	        cin>>N;
	        if(N<=5)
	         std::cout << 0 << std::endl;
	         
	        else if(N>5 && N<=12)
	        std::cout << 1 << std::endl;
	        
	        else
	        {
	            int ans = N/7;
	            int rem = N%7;
	            if(rem>5)
	            {
	                std::cout << ans+1<< std::endl;
	            }
	            else
	            {
	                std::cout << ans<< std::endl;
	            }
	        }
	    }
		return 0;
}
