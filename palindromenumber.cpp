#include<iostream>
using namespace std;

int main() {
    int n, rev = 0;

    cout << "Enter the number: ";
    cin >> n;

    int original = n;

    do {
        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    } while (n > 0);

    cout << "The reversed number is: " << rev << endl;

    if (original == rev) {
        cout << "Both numbers are same! So it's a palindrome.";
    } else {
        cout << "It's not a palindrome!";
    }

    return 0;
}