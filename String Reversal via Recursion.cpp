// Exp - 15
// Siddhesh
// 25070123505 (A3)

#include <iostream>
using namespace std;

void reverseString(char str[], int start, int end) {
    if (start >= end) {   
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}
int main() {
    char str[100];
    cout << "Enter any string :- ";
    cin.getline(str, 100);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    reverseString(str, 0, length - 1);
    cout << "Reversed of that string is :- " << str << endl;
    return 0;
}

Output :-
Enter any string :- RADAR LEVEL RACECAR
Reversed of that string is :- RACECAR LEVEL RADAR


=== Code Execution Successful ===
