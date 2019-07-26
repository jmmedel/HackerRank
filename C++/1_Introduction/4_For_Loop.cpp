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
