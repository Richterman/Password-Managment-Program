#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    string filename = "Passwords.txt";
    cout << "Welcome to the Password Managment Program\nCreated by Damon Richter\nThis is my first project on my own\n\n";
    cout << "COMMANDS:" << endl                 // list commands
         << "n - new login info" << endl
         << "v - view login info" << endl
         << "x - exit program" << endl 
         << "l - list commands" << endl;
    char command = 'v';
    
    // begin program loop
    while (command != 'x') {        
        cout << "Please Enter a command: ";
        cin >> command;
        
        if (command == 'n') {       // add new login info
            string account;
            string url;
            string password;
            string username;
            
            // Take user info
            cout << "\nWhat is the new account name you'd like to add?: ";
            cin >> account;
            cout << "\nWhat is the username asscociated with this account?: ";
            cin >> username;
            cout << "\nWhat is the url of the website? If no URL, plase use n/a as a place holder: ";
            cin >> url;
            cout << "What is the password asscociated with this account?: ";
            cin >> password;
            
            // begin file stream
            ofstream output_file;
            output_file.open(filename, ios::app);
            output_file << endl << account << '\t' << username << '\t' << password << '\t' << url << endl;
            output_file.close();
            cout << "Your information has been saved successfully\n";
        }
        
        // view account information
        else if (command == 'v') {
            cout << "Account information\n-----------------------------------------------------------------------------------------------------";
            double a = 23;
            double b = 15;
            ifstream input_file;
            input_file.open(filename);
            
            string account;
            string password;
            string username;
            string url;
            
            // if file opened successfully
            
            if (input_file) {
                cout << fixed << setprecision(1);
                while (input_file >> account >> username >> password >> url) {
                    cout << endl << account
                         << '\t' << username
                         << '\t' << password
                         << '\t' << url;
                }
                input_file.close();
            } 
            else {
                cout << "file could not be opened.\n";
            }
        }
        
        
        //exit program
        else if (command == 'x') {     
            cout << "Terminate Program\n";
            break;
        }
        // list commands
        else if (command == 'l') {                   
        cout << "COMMANDS:" << endl                 
             << "n - new login info" << endl
             << "v - view login info" << endl
             << "x - exit program" << endl
             << "l - show this menu item again" << endl << endl;
        }
        // invalid command
        else {                          
            cout << "\nPlease enter a valid command.\n";
        }
    }
    cout << "Program successfully terminated.\nSee you later.";     // out of loop
}
