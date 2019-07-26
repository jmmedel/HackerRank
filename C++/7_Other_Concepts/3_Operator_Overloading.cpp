// https://www.hackerrank.com/challenges/3_Operator_Overloading.cpp
/* Classes define new types in C++. Types in C++ not only interact by means of constructions and assignments but also via operators. For example:

int a=2, b=1, c;
c = b + a;

The result of variable c will be 3.
Similarly, classes can also perform operations using operator overloading. Operators are overloaded by means of operator functions, which are regular functions with special names. Their name begins with the operator keyword followed by the operator sign that is overloaded. The syntax is:

type operator sign (parameters) { /*... body ...*/ }

/* You are given a main() function which takes a set of inputs to create two matrices and prints the result of their addition. You need to write the class Matrix which has a member a of type vector<vector<int> >. You also need to write a member function to overload the operator +. The function's job will be to add two objects of Matrix type and return the resultant Matrix.

Input Format

First line will contain the number of test cases T. For each test case, there are three lines of input.
The first line of each test case will contain two integers N or M and which denote the number of the rows and columns respectively of the two matrices that will follow on the next two lines. These next two lines will each contain N*M elements describing the two matrices in row-wise format i.e. first M elements belong to the first row,next M elements belong to the second row and so on.

Output Format

The code provided in the editor will use your class

and overloaded operator function to add the two matrices and give the output.

Sample Input

1
2 2
2 2 2 2
1 2 3 4

Sample Output

3 4
5 6

Explanation

The sum of first matrix and the second matrix is the matrix given in the output.

-----------------------------------------------------------------------------------------------------------------------------------


CODE :- */

// https://www.hackerrank.com/challenges/3_Operator_Overloading.cpp
/* Made by SHIVAM SHARMA */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix
{
public:
    vector<vector<int>> a;

    Matrix& operator+(const Matrix& r)
    {
        if (a.size() == r.a.size())
        {
            for (size_t i = 0; i < a.size(); ++i)
            {
                auto& ai = a[i];
                const auto& ri = r.a[i];
                if (ai.size() == ri.size())
                {
                    for (size_t j = 0; j < ai.size(); ++j)
                    {
                        ai[j] += ri[j];
                    }

                }
            }
        }
        return *this;
    }
};
int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
