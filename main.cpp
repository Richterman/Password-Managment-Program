#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void title();
void vectorGather();
void save();
void remove();
void add();
void help();
void invalidInput();
void saveExit();
void noSaveExit();
void viewIndivudialAccount();
void viewAllAccounts();

char command;

bool programLoop = 1;

bool noSave = 0;

string accountLists = "Account Files";
bool programExit;


string email, account, username, password, location, webAddress, secretQuestion, secretQuestion2, secretAnswer, secretAnswer2;
vector<string> accountTemp, emailTemp, usernameTemp, passwordTemp, locationTemp, webAddressTemp, secretQuestionTemp, secretQuestion2Temp, secretAnswerTemp, secretAnswer2Temp;


int main() {

    title();
    vectorGather();

    while (programLoop == 1) {                                                      // options

        cout << "\n\nPlease enter a command or press h for help\nCommand: ";
        cin >> command;

        if (command == 'h') {                                                                       // Show list of commands
            help();
            continue;
        } if (command == 'a') {                                                                         // Add an account
            add();
            continue;

        } if (command == 'r') {                                                                     // Remove an account ------Not implemented yet
           // remove();
            cout << "\n\ncommand not implemented yet";
        } if (command == 's') {                                                                                                                                         // Save to file
            save();
            continue;
        } if (command == 'x' && noSave == 1) {                                                                 // Exit Program without saving
            noSaveExit();
        } if (command == 'x' && noSave == 0) {                                                                  // Exit after saving
            saveExit();
        } if (command == 'v') {                                                                                             // view acocunts
            /* char question;
            while (true) {
                cout << "\n\nWould you like to see all the accounts or are you searching for an indivial account?\ni = indivial account lookup\na = Show All Accounts\nx = exit\nCommand: ";
                cin >> question;
                if (question == 'a') {
                    viewAllAccounts();
                }
                if (question == 'i') {
                    viewIndivudialAccount;
                }
                if (command == 'x') {
                    cout << "\n\nCancel!";
                }
                else {
                    cout << "Invalid command! Please enter a valid command.";
                }
            } */
            viewAllAccounts();
            continue;

        } if (programExit == 1) {                                             // exit program
            cout << "\n\nHave a nice day.";
            break;
        } else {                                                                                       // Invalid command
            invalidInput();
        } }
    cout << "\n\nProgram successfully terminated";
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



// Function defining


void title() {                                                                                                      // function to display title
    cout << "Welcome to the Password Management system.\nWritten by Damon Richter";
}

void vectorGather() {                                                                                                   // function to save information in vectors before starting initial loop

    ifstream create_Vectors;
    create_Vectors.open(accountLists);

    while(true) {

        if (create_Vectors) {                                                // file found

             while (create_Vectors >> account >> email >> username >> password >> secretQuestion >> secretAnswer >> secretQuestion >> secretQuestion2 >> location >> webAddress) {
                accountTemp.push_back(account);
                emailTemp.push_back(email);
                usernameTemp.push_back(username);
                passwordTemp.push_back(password);
                secretQuestionTemp.push_back(secretQuestion);
                secretAnswerTemp.push_back(secretAnswer);
                secretQuestion2Temp.push_back(secretQuestion2);
                secretAnswer2Temp.push_back(secretAnswer2);
                locationTemp.push_back(location);
                webAddressTemp.push_back(webAddress);
             }
                cout << "\n\nInformation successfully imported!";
                create_Vectors.close();

        }
        else {
            cout << "\n\nFile not found. May need to be created";
            break;
        }

    }
}

void invalidInput() {                                                                                   // Invalid Input
    cout << "\n\nInvalid command!";
}

void help() {

    cout << "\n\nCommands\na = Add an account"
         << "\nr = Remove an account"
         << "\ns = Save information to file"
         << "\nv = view accounts"
         << "\nx = Exit program";
}

void noSaveExit() {
    char input;
    while (true) {
        cout << "\n\nAre you sure you want to exit without saving?\nYou will loose all changes you have made\ny = yes, n = no\nCommmand: ";
        cin >> input;
        if (input == 'n') {
            break;
        }
        if (command == 'y') {
            cout << "\n\nExit program.";
            programLoop = 0;
            programExit = 1;
        } else {
            cout << "\n\nInvalid command!! Please enter either yes or no";
        }
        }
}

void saveExit() {
    char input;
    while (true) {
        cout << "\n\nAre you sure you want to exit the program?\ny = yes, n = no\nCommmand: ";
        cin >> input;
        if (input == 'n') {
            break;
        }
        if (command == 'y') {
            cout << "\n\nExit program.";
            programLoop = 0;
            programExit = 1;
        } else {
            cout << "\n\nInvalid command!! Please enter either yes or no";
        }
    }
}

void add() {
    char secret;

    cout << "\n\nFirst you will be asked to enter the accounts name, then the password, then the location, then the website address, then the secret questions and answers.";
    cout << "\n\nAdd a space before you input any information, for some reason it cuts off the first letter otherwise";

    cout << "\n\nWhat's the account's name? \naccount:";
    cin.ignore();
    getline (cin,account);
    cout << "\n\nWhat is your password: \nPassword:";
    cin.ignore();
    getline (cin,password);
    cout << "\n\nWhat is the email associated with this account?\nemail:";
    cin.ignore();
    getline (cin,email);
    cout << "\n\nWhere is this account located? Please do not enter a website address.\nLocation:";
    cin.ignore();
    getline (cin,location);
    cout << "\n\nWhat is the website's address? If no website, please enter n/a.\nWebsite:";
    cin.ignore();
    getline (cin,webAddress);
    while (true) {                                                                  // Secret Questions
        cout << "\n\nDo you have any secret questions? y = yes, n = no        : ";
        cin >> secret;
        if (secret == 'y') {
            cout << "\n\nWhat is your first secret question?\n";
            cin.ignore();
            getline (cin,secretQuestion);
            cout << "\n\nWhat is the answer?\n";
            cin.ignore();
            getline (cin,secretAnswer);
            cout << "\n\nWhat is your second secret question?\n";
            cin.ignore();
            getline (cin,secretQuestion2);
            cout << "\n\nWhat is the answer?\n";
            cin.ignore();
            getline (cin,secretAnswer2);
            break;
        } if (secret == 'n') {
            secretQuestion = "none";
            secretQuestion2 = "none";
            secretAnswer = "none";
            secretAnswer2 = "none";
            break;
        } else {
            cout << "\n\nInvalid command";
        }

    }
    accountTemp.push_back(account);
    emailTemp.push_back(email);
    usernameTemp.push_back(username);
    passwordTemp.push_back(password);
    secretQuestionTemp.push_back(secretQuestion);
    secretAnswerTemp.push_back(secretAnswer);
    secretQuestion2Temp.push_back(secretQuestion2);
    secretAnswer2Temp.push_back(secretAnswer2);
    locationTemp.push_back(location);
    webAddressTemp.push_back(webAddress);

    cout << "\n\nSuccessfuly added to buffer";


}

void save() {

    ofstream output_file;
    output_file.open(accountLists);

   // email, account, username, password, location, webAddress, secretQuestion, secretQuestion2, secretAnswer, secretAnswer2
    for (int i = 0; i < emailTemp.size(); ++i) {

        /////////////////////////////////////// To iteriate throug the vectors
        email = emailTemp[i];
        account = accountTemp[i];
        username = usernameTemp[i];
        password = passwordTemp[i];
        location = locationTemp[i];
        webAddress = webAddressTemp[i];
        secretQuestion = secretQuestionTemp[i];
        secretQuestion2 = secretQuestion2Temp[i];
        secretAnswer = secretAnswerTemp[i];
        secretAnswer2 = secretAnswer2Temp[i];



        output_file << email<< '\t' << account << '\t'  << username << '\t'  << location << '\t'  << webAddress << '\t'  << secretQuestion << '\t'  << secretQuestion2 << '\t'  << secretAnswer << '\t'  << secretAnswer2 << endl;
    }

    output_file.close();
    cout << "\n\nInformaton in buffer successfully saved to file.";
}

void viewAllAccounts() {

    cout << endl << endl << "-----------------------------------------------------------------------" << endl;
    cout << "Accounts" << endl;
    cout << "-----------------------------------------------------------------------" << endl << endl;

            /////////////////////////////////////// To iteriate throug the vectors
    double accountNumber = 0.0;
    for (int i = 0; i < emailTemp.size(); ++i) {
        email = emailTemp[i];
        account = accountTemp[i];
        username = usernameTemp[i];
        password = passwordTemp[i];
        location = locationTemp[i];
        webAddress = webAddressTemp[i];
        secretQuestion = secretQuestionTemp[i];
        secretQuestion2 = secretQuestion2Temp[i];
        secretAnswer = secretAnswerTemp[i];
        secretAnswer2 = secretAnswer2Temp[i];

        double lefty = 65;

        cout << account << endl << "-----------------------------------------------------------------------" << endl;
        cout << "Email" << right << setw(lefty) << email << endl;
        cout << "Username" << right << setw(lefty) << username << endl;
        cout << "Password" << right << setw(lefty) << password << endl;
        cout << "Location" << right << setw(lefty) << location << endl;
        cout << "Website" << right << setw(lefty) << webAddress << endl;
        cout << secretQuestion << endl << '\t' << secretAnswer << endl;
        cout << secretQuestion2 << endl << '\t' << secretAnswer2 << endl;
        cout << "Account Number" << accountNumber << endl << "-----------------------------------------------------------------------" << endl;
        ++accountNumber;
    }
}
