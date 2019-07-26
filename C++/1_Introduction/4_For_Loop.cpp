// https://www.hackerrank.com/challenges/4_For_Loop.cpp

/*A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax for this is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>

   * expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.
   * expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
   * expression_3 is generally used to update the flags/variables.

A sample loop will be

for(int i = 0; i < 10; i++) {
    ...
}

INPUT FORMAT

You will be given two positive integer, a&b(a_<b)separated by a newline.
   
OUTPUT FORMAT

For each integr n in the interval [a,b]:
*  If 1_<n_9 then print the englisg representation of it in lowercase.
    that is "one" for 1, "two" for 2 and so on.
*  Else if n>9 and it is an even number then print "even".
*  Else if n>9 and it is an odd number then print "odd".
    
SAMPLE INPUT
8
11
SAMPLE OUPUT
Eight

-----------------------------------------------------------------------------------------------------------------------

CODE :- */

// https://www.hackerrank.com/challenges/4_For_Loop.cpp
/* Made by SHIVAM SHARMA */


#include <iostream>
using namespace std;

int main()
{

    string str[] = {"","one","two","three","four","five","six","seven","eight","nine"};
    long long a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){

        if(i <= 9)cout << str[i] << endl;
        else{
            if(!(i%2))cout << "even" << endl;
            else cout << "odd" << endl;
        }
    }
    return 0;
}
