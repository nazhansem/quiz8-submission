/********************************************************************************
 Question 1: Complete the Program
  
 This program intends to accept an integer N followed by N words 
 X1, X2, ..., XN. For each word Xi (1 <= i <= N), 
 it outputs "Hello Xi" without quotes. 
 
 However, the program is incomplete.
 
 Complete the program so that it works as intended.
 
 Input Range
 -----------
 The input to this program will only come from the following range.
 (Your code does not need to check if the input is in this range)

 1 <= N <= 10
 1 <= Xi.length() <= 20, where 1 <= i <= N

 Sample Run #1
 -------------
 N -> 3
 Input  -> Ali
 Output -> Hello Ali
 Input  -> Bala
 Output -> Hello Bala
 Input  -> Cindy
 Output -> Hello Cindy
 
 Sample Run #2
 -------------
 N -> 1
 Input  -> Dorothy
 Output -> Hello Dorothy
 
 ********************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "N -> ";
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cout << "Input  -> ";
        // Write your code here
        string name;
        cin >> name;

        cout << "Output -> ";
        // Write your code here
        cout << "Hello " << name << endl;

    }
}