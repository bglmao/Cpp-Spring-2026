/* Imani Hollie 01/16/2026
   5-Minute Challenge: Write a program that takes user input for a name
   and the last 4 digits of a phone number from the keyboard,
   then prints them to the console.
   
   Sample Output:
   Name? Imani Hollie
   Last 4-digit phone number? ****
   Your name: Imani Hollie
   Last 4-digit phone number: ****
*/

#include <iostream>   // Allows use of input/output objects like cout and cin
#include <string>     // Allows use of the string data type
using namespace std;  // Allows use of standard library without std:: prefix

int main() {          // Program execution starts here
  
  // Declare variables
  short phone;        // Variable to store the last 4 digits of the phone number
  string name;        // Variable to store the user's full name

  // Get user's name
  cout << "Name? ";   // Prompt asking for the user's name without a newline
  cin.ignore();       // Clears leftover newline from previous input
  getline(cin, name); // Reads the entire line, allowing spaces in the name

  // Get user's last 4-digits of phone number
  cout << "Last 4-digit phone number? ";  // Prompt asking for the user's phone without a newline
  cin >> phone;       // Reads the number from keyboard input

  // Validate phone number is 4 digits
  while (phone < 0 || phone > 9999) {        // While loop that ensures the number is between 0000 and 9999
    cout << "ERROR: Invalid Input" << endl;  // Error message for invalid input
    cout << "Enter 4 Digits: ";              // Prompt asking user to try again
    cin >> phone;                            // Reads new input
  }
  
  // Output user's name and last 4-digit phone number
  cout << "Your name: " << name << endl;                  // Prints user's name to the console
  cout << "Last 4-digit phone number: " << phone << endl; // Print's user's phone to the console
  
  return 0; // Ends the program
}
