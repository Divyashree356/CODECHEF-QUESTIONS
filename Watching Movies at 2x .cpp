#include <iostream>
using namespace std;

int main() {
	int x ,y;
	cin>>x>>y;
	
	x=x-y;
	y=y/2;
	int totalTime= x+y;
	std::cout << totalTime << std::endl;
	return 0;
}
