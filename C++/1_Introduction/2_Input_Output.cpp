// https://www.hackerrank.com/challenges/Input_and_Output


OBJECTIVE

In this challenge, we're practicing reading input from stdin and printing output to stdout.

In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:

string s;
int n;

and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:

cin >> s >> n;

The above code reads the first word ("High") from stdin and saves it as string s, then reads the second word("5") from stdin and saves it as integer n. If we want to print these values to stdout, we write the following code:

cout << s << " " << n << endl;

The above code prints the contents of string s, which is the word "High". Then it prints a single space(""), followed by the contents of integers n, becuase we also want to ensure that nothing else is printed on this line, we end our line of output with newline via endl. This results in the following output.

High 5

----------------------------------------------------------------------------------

TASK 

Read 3 numbers from stding and oprint their sum to stout.

NOTE: If you plan on completing this challenges in c instead of c++, you'll need to use format specifier with printf and scanf

INPUT FORMAT

A Single line containing 3 space-separated integers: a,b, & c.

CONSTRAINTS

1_<A,B,C_<1000

OUTPUT FORMAT

Print the sum of the three numbers on a single line.

SAMPLE INPUT

10

EXPLAINATION

The sum of the three numbers is 1+2+7=10.


----------------------------------------------------------------------------


CODE :-

// https://www.hackerrank.com/challenges/Input and Output
/* Made by SHIVAM SHARMA */

#include <iostream>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c;
    cin >> a >> b >> c;
    cout << a + b + c << endl;
    return 0;
}


NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.
