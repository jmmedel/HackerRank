// https://www.hackerrank.com/challenges/6_Poiinters.cpp
/* A pointer in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable, of which it doesn't have ownership.

In order to access the memory address of a variable,val, we need to prepend it with sign &. E.g., &val returns the memory address of va;.

This memory address is assigned to a pointer and can be shared among various functions. E.g int*p=&val. will assign the memory address of val to pointer p. To access the content of the memory to which the pointer points, prepend it with a *. For example, *p will return the value reflected by val and any modification to it will be reflected at the source (val).

void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  

You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets
with the sum of them, and with the absolute difference of them.

* a'=a+b
* b'=|a-b|

INPUT FORMAT

Input will contain two integer a and b seperated by a newline

OUTPUR FORMAT

You have to print the updated value of a and b, on two different lines.


P.S.: Input/ouput will be automatically handled. You only have to complete the void update(int *a,int *b) function.

Sample Input

4
5

Sample Output

9
1

Explanation
* a'=4+5=9
* b'=|4-5|=1
------------------------------------------------------------------------------------------------------------
CODE :-

// https://www.hackerrank.com/challenges/6_Poiinters.cpp
/* Made by SHIVAM SHARMA */


#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int aa = *a;
    *a = *a+*b;
    *b = aa-*b;
    if(*b < 0)*b *= -1;
}
int main() {

    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}


/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
