#include <iostream>
using namespace std;

int main()   {
int a=10;
int b=20;
//variable = condition ? true value : false value
//variable = (condition) ? expression true : expression false;
string output = (a>b) ? "a is greater than b" : "a is less than b";
cout<<output;
return 0;
}
