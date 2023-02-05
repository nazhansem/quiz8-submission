/********************************************************************************
 Question 2: Complete the Program
  
 This program intends to accept an integer N followed by N integers 
 X1, X2, ..., XN. For each integer Xi (1 <= i <= N), 
 it outputs "ODD" if Xi is odd or "EVEN" otherwise.
 
 However, the program is incomplete.
 
 Complete the program so that it works as intended.

 Input Range
 -----------
 The input to this program will only come from the following range.
 (Your code does not need to check if the input is in this range)

 1 <= N <= 10
 -99999 <= Xi <= 99999, where 1 <= i <= N
 
 Sample Run #1
 -------------
 N -> 3
 Input  -> 10
 Output -> EVEN
 Input  -> 211
 Output -> ODD
 Input  -> 3222
 Output -> EVEN
 
 Sample Run #2
 -------------
 N -> 5
 Input  -> 413
 Output -> ODD
 Input  -> 980
 Output -> EVEN
 Input  -> 678
 Output -> EVEN
 Input  -> 277
 Output -> ODD
 Input  -> 13578
 Output -> EVEN

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
        // Write your code here.
        int num;
        cin >> num;
        if (num%2 == 0)
        {
            cout << "Output -> " << "EVEN\n";
        }
        else
        {
            cout << "Output -> " << "ODD\n";
        }
    }
    return 0;
}