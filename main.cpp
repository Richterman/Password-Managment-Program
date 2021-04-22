#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    
    
    /* password protect and maybe encrypt?
    
    string protect = "protect.txt";
    string password;
    cout << "Enter password to gain access to this program: ";
    cin >> password;
    */
    
    // start program
    
     //open file and store info in vectors
    string filename = "Passwords.txt";
    string account, password, url, username;
    vector <string> account_vec, password_vec, url_vec, username_vec;
    ifstream input_file;
    input_file.open(filename);
    if (input_file) {
        while (input_file >> account >> username >> password >> url) {
              account_vec.push_back(account);
              username_vec.push_back(username);
              password_vec.push_back(password);
              url_vec.push_back(url);
          }
        input_file.close();
    }
    else {
        cout << "Unable to locate file";
    }
     
    
    cout << "Welcome to the Password Managment Program\nCreated by Damon Richter\nThis is my first project on my own\n\n";
    cout << "COMMANDS:" << endl                 // list commands
         << "n - new login info" << endl
         << "v - view login info" << endl
         << "x - exit program" << endl 
         << "l - list commands" << endl
         << "r - remove an account" << endl;
    char command = 'v';
    
    // begin program loop
    while (command != 'x') {        
        cout << "\nPlease Enter a command: ";
        cin >> command;
        
        int account_number, index;
        
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
            double a = 20;
            double b = 30;
            double c = 40;
            double d = 5;
            cout << "Account information\n-----------------------------------------------------------------------------------------------------";
            cout << endl
                 << "\tName"
                 << right << setw(a) << "Username"
                 << right << setw(b) << "Password"
                 << right << setw(c) << "Url";
                 cout << endl << "-----------------------------------------------------------------------------------------------------";
            ifstream input_file;
            input_file.open(filename);
            
            string account;
            string password;
            string username;
            string url;
            
            // if file opened successfully
            account_number = 1;
            if (input_file) {
                cout << fixed << setprecision(1);
                while (input_file >> account >> username >> password >> url) {
            cout << endl << account_number
                 << '\t' << account
                 << right << setw(a) << username
                 << right << setw(b) << password
                 << right << setw(c) << url;
                         ++account_number;
                }
                input_file.close();
            } 
            // if file not found
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
             << "l - show this menu item again" << endl
             << "r - remove an account" << endl << endl;
        }
        
        // remove an account
        
         else if (command == 'r') {
             int account_number;
             cout << "Enter an account number you would like to delete: ";
             cin >> account_number;
             cout << endl;
            
            input_file.open(filename);
            index = account_number - 1;
            account_vec.erase(account_vec.begin());
            username_vec.erase(username_vec.begin());
            password_vec.erase(password_vec.begin());
            url_vec.erase(url_vec.begin());
            cout << "Account " << account_number << " have been removed.\n";
            input_file.close();
        }
         
        // invalid command
        else {                          
            cout << "\nPlease enter a valid command.\n";
        }
    }
    cout << "Program successfully terminated.\nSee you later.";     // out of loop
}
