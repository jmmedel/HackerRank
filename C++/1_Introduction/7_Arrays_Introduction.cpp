// https://www.hackerrank.com/challenges/7_Arrays_Introduction.cpp
/* An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

Declaration:

int arr[10]; //Declares an array named arr of size 10, i.e; you can store 10 integers.

Accessing elements of an array:

Indexing in arrays starts from 0.So the first element is stored at arr[0],the second element at arr[1]...arr[9]

You'll be given an array of N integers and you have to print the integers in the reverse order.

Input Format

The first line of the input contains N,where N is the number of integers.The next line contains N integers separated by a space.

Constraints
1<=N<=1000
1<=Ai<=10000 where Ai is the ith integer in the array.

OUTPUT FORMAT
Print the N integer of the array in the reverse order in a single line seperated by a space.

Sample Input

4
1 4 3 2

Sample Output

2 3 4 1
--------------------------------------------------------------------------------------------------------

CODE :-

// https://www.hackerrank.com/challenges/7_Arrays_Introduction.cpp
/* Made by SHIVAM SHARMA */





#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int j = N - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }
    return 0;
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
