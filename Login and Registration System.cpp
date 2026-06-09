#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser() {
    string username, password;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ifstream check(username + ".txt");

    if (check.good()) {
        cout << "Username already exists!" << endl;
        return;
    }

    ofstream file(username + ".txt");

    file << username << endl;
    file << password << endl;

    file.close();

    cout << "Registration Successful!" << endl;
}

void loginUser() {
    string username, password;
    string storedUser, storedPass;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ifstream file(username + ".txt");

    if (!file) {
        cout << "User not found!" << endl;
        return;
    }

    getline(file, storedUser);
    getline(file, storedPass);

    if (username == storedUser && password == storedPass)
        cout << "Login Successful!" << endl;
    else
        cout << "Invalid Password!" << endl;
}

int main() {
    int choice;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Choice: ";

        cin >> choice;

        switch (choice) {
        case 1:
            registerUser();
            break;

        case 2:
            loginUser();
            break;

        case 3:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}