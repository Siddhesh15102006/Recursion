---
# 🧪 Experiment 15 :- Recursion in C++

---

## 📖 Theory :-

Recursion is a programming technique where a function calls itself to solve a problem in smaller subproblems. It is often used for problems that can be broken down into simpler versions of the same problem.

🔁 Structure of a Recursive Function:

Base Case – Stops the recursion from continuing indefinitely.

Recursive Case – Calls the function itself with a modified argument.

## ✅ General Syntax:
ReturnType functionName(Parameters) {
    if (base condition) {
        // base case
        return base value;
    } else {
        // recursive call
        return functionName(modified parameters);
    }
}

---

## 📝 Experiment Questions and Code
# 🔹Q1. Factorial Using Recursion
✅ Syntax:
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // Base case
    else
        return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
```

---

# 🔹Q2. Sum via Recursion (Sum of First N Natural Numbers)
✅ Syntax:
int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)
        return 0;  // Base case
    else
        return n + sum(n - 1);  // Recursive case
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of first " << num << " natural numbers is: " << sum(num) << endl;
    return 0;
}
```

---

# 🔹Q3. String Reversal via Recursion
✅ Syntax:
void reverse(string str, int index) {
    if (index < 0)
        return;
    else {
        cout << str[index];
        reverse(str, index - 1);
    }
}

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

void reverseString(string str, int index) {
    if (index < 0)
        return;  // Base case
    cout << str[index];
    reverseString(str, index - 1);  // Recursive case
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Reversed string: ";
    reverseString(input, input.length() - 1);
    cout << endl;
    return 0;
}
```

---

✅ Conclusion:

We implemented three recursive functions :-
Factorial
Sum of natural numbers
String reversal
Recursion simplifies code by breaking problems into smaller instances of themselves.

It is a powerful technique for problems involving repetitive structures, especially in algorithms like divide and conquer, backtracking, and tree traversal.

However, recursion must be used carefully to avoid stack overflow due to excessive recursive calls.
---
