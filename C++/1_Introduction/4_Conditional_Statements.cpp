// https://www.hackerrank.com/challenges/4_Conditional_Statements.cpp
/* if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:
   1. if: This execuses the body of bracketed code starting with statement1 if condition ecaluates to true.
      if condition evaluates to true.
      
         if(condition){
           statement1;
           ...
          }
   2. If-Else: This executes the body of bracketed code starting with statement1 if condition evaluates to true, or it executes the body of code starting with statement2 if condition evaluates to false. Note that only one of the bracketed code sections will ever be executed.
         
         if(condition) {
           statements;
           ...
         }
   3. If-Else If-Else: In this structure, dependent statements are chained together and the condition for each statement is only checked if all prior conditions in the chain evaluated to false. Once a condition evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each

    condition in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

         if(first condition) {
        ...
      }
        else if(second condition) {
        ...
      }
      .
      .
      .
        else if((n-1)'th condition) {
        ....
      }
       else {
        ...
      }

Given a positive integer denoting n, do the following

  *  If 1_<n_<9, then print the lowercase english word corresponding to the number(e.g, one for 1, two for 2 etc)
  *  If n>(, print greater than 9.
 
INPUT FORMAT

A single integer denoting n.

CONSTRAINTS

* 1_<N_<10 TO THE POWER 9

OUTPUT FORMAT

If 1_<n_<9 then print the lowercase english word corresponding to the number (e.g. one for 1 two for 2 etc); otherwise print greater than 9

SAMPLE INPUT 0

5

SAMPLE OUTPUT 0

FIVE

EXPLAINATION 0

Five is the english word for the number 5.

SAMPLE OUTPUR 1

Eight

EXPLAINATION 1

Eight is the english word for the number 8.

SAMPLE INPUT 2

44

SAMPLE OUTPUT 2

Greater than 9

Explaiation 2

n=44 is greater than 9, so we print greater than 9

--------------------------------------------------------------------------------------------------------------------------------------------------
CODE :- */
// https://www.hackerrank.com/challenges/Input and Output
/* Made by SHIVAM SHARMA */

#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    if (N == 1) {
        cout << "one" << endl;
    } else if (N == 2) {
        cout << "two" << endl;
    } else if (N == 3) {
        cout << "three" << endl;
    } else if (N == 4) {
        cout << "four" << endl;
    } else if (N == 5) {
        cout << "five" << endl;
    } else if (N == 6) {
        cout << "six" << endl;
    } else if (N == 7) {
        cout << "seven" << endl;
    } else if (N == 8) {
        cout << "eight" << endl;
    } else if (N == 9) {
        cout << "nine" << endl;
    } else {
        cout << "Greater than 9" << endl;
    }

   return 0;
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system. */
