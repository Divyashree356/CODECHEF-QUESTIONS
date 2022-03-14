#include <iostream>
using namespace std;

int main() {
	int t , A , B, C;
	cin>>t;
	while(t--)
	{
	    cin>>A>>B>>C;
	    int ans= max(A ,max(B  ,C));
	    std::cout << ans << std::endl;
	}
	return 0;
}
