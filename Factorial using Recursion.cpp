// Exp - 15
// Siddhesh
// 25070123505 (A3)

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {   
        return 1;
    }
    return n * factorial(n - 1); 
}
int main() {
    int num;
    cout << "Enter any Number :- ";
    cin >> num;
    int result = factorial(num);
    if (result != -1) { 
        cout << "Factorial is = " << result << endl;
    }
    return 0;
}

Output :-
Enter any Number :- 3
Factorial is = 6


=== Code Execution Successful ===
