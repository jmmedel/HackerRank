// https://www.hackerrank.com/challenges/3_Basic_Data_Type.cpp

/* Some C++ data types, their format specifiers, and their most common bit widths are as follows:

 *   Int ("%d"): 32 Bit integer
 *   Long ("%ld"): 64 bit integer
 *   Char ("%c"): Character type
 *   Float ("%f"): 32 bit real value
 *   Double ("%lf"): 64 bit real value

Reading
To read a data type, use the following syntax:

scanf("`format_specifier`", &val)

For example, to read a character followed by a double:

char ch;
double d;
scanf("%c %lf", &ch, &d);

For the moment, we can ignore the spacing between format specifiers.

Printing
To print a data type, use the following syntax:

printf("`format_specifier`", val)

For example, to print a character followed by a double:

char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);

Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.

Input Format

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

Sample Input

3 12345678912345 a 334.23 14049.30493

Sample Output

3
12345678912345
a
334.230
14049.304930000

Explanation

Print int 3,3
followed by long 12345678912345 ,
followed by char a,
followed by float 334.230 ,
followed by double 14049.304930000 .

----------------------------------------------------------------------------------------------------------------------------------   
CODE :- */

// https://www.hackerrank.com/challenges/Input and Output
/* Made by SHIVAM SHARMA */


#include <iostream>
using namespace std;
int main()
{
    int a; long b; char c; float d; double e;

    scanf("%i %li %c %f %lf",&a,&b,&c,&d,&e);
    printf("%i\n%li\n%c\n%.03f\n%.09lf\n",a,b,c,d,e);

    return 0;
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
