//Basic input and output in C++.

#include <iostream>
using namespace std;
int main(){
    int age;
    //taking input from user and store it in variable.
    cin >> age; // cin is used to take input from the user and store it in the variable age.

    //outpu the entered age to the console.
    cout << "Your age is: " << age; // cout is used to output the value of age to the console.

    //un-buffered error stream - cerr is used to output error messages to the console.
    cerr << "This is an error message."; // cerr is used to output error messages to the console.





    return 0;
}