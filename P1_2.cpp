/*
 Write a program that prints the message, “Hello, my name is Hal!”
 Then, on a new line, the program should print the message “What would you like me to do?”
 Then it’s the user’s turn to type in an input.
*/

#include <iostream>

using namespace std;

int main() {

    cout << "Hello, my name is Hal!\n";
    cout << "What would you like me to do?\n";

    string user_input;

    getline(cin, user_input);

    cout << "I am sorry, I cannot do that.";

    return 0;
}
