//People in Chefland have three different eye colors, namely brown, blue, and green. green is the rarest of the eye colors whereas brown is most common.

The eye color of the child of two people is most likely to be the most common eye color between them.

You are given two characters denoting the eye colors of two people in Chefland. The character R denotes bRown color, B denotes Blue color, and G denotes Green color.

Determine the most likely eye color of their child. (Print R, B or G denoting bRown, Blue or Green respectively).

Please see the sample test cases below for explained examples.//

//Sample Input 1 
R B
//Sample Output 1 
R
Explanation
The two people have brown and blue eyes and brown is the most common. Therefore, their child will most likely have brown eyes.

//Sample Input 2 
B B
//Sample Output 2 
B

#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char eyes[10];
    cin.getline(eyes , 10);
    if(strcmp(eyes,"R B")==0 || strcmp(eyes,"B R")==0 ||strcmp(eyes , "R R")==0 || strcmp(eyes , "R G")==0 || strcmp(eyes , "G R")==0)
    {
        cout<<'R';
    }
    else if(strcmp(eyes , "B B")==0 || strcmp(eyes , "B G")==0 ||strcmp(eyes , "G B")==0)
    {
        cout<<'B';
    }
    else if(strcmp(eyes, "G G")==0)
  { cout<<'G';}

	return 0;
}


