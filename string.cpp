#include<iostream>
using namespace std;
int main() {
    char str[100];
    char c;
    cin>>c;
    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Enter a string: ";
    cin.getline(str, 100); // Read a line of input into the string
    cout << "You entered: " << str << endl;
    return 0;
}