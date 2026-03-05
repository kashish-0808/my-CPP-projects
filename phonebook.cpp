#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

struct Contact {
    string name;
    string phone;
};

vector<Contact> contacts;

string toLower(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    return s;
}

void loadContacts() {
    ifstream file("contacts.txt");
    Contact c;

    while (file >> c.name >> c.phone) {
        contacts.push_back(c);
    }

    file.close();
}

void saveContacts() {
    ofstream file("contacts.txt");

    for (auto c : contacts) {
        file << c.name << " " << c.phone << endl;
    }

    file.close();
}

void addContact() {
    Contact c;

    cout << "Enter name: ";
    cin >> c.name;

    cout << "Enter phone number: ";
    cin >> c.phone;

    for (auto existing : contacts) {
        if (toLower(existing.name) == toLower(c.name)) {
            cout << "Contact already exists.\n";
            return;
        }
    }

    contacts.push_back(c);
    saveContacts();

    cout << "Contact added successfully.\n";
}

void showContacts() {

    if (contacts.empty()) {
        cout << "No contacts found.\n";
        return;
    }

    cout << "\nContact List:\n";

    for (auto c : contacts) {
        cout << c.name << " - " << c.phone << endl;
    }
}

void searchContact() {
    string name;

    cout << "Enter name to search: ";
    cin >> name;

    bool found = false;

    for (auto c : contacts) {
        if (toLower(c.name) == toLower(name)) {
            cout << "Found: " << c.name << " - " << c.phone << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Contact not found.\n";
    }
}

void sortContacts() {

    sort(contacts.begin(), contacts.end(),
         [](Contact a, Contact b) {
             return toLower(a.name) < toLower(b.name);
         });

    saveContacts();

    cout << "Contacts sorted by name.\n";
}

int main() {

    loadContacts();

    int choice;

    while (true) {

        cout << "\n1. Add Contact\n";
        cout << "2. Show Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Sort Contacts\n";
        cout << "5. Exit\n";

        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            addContact();
        }

        else if (choice == 2) {
            showContacts();
        }

        else if (choice == 3) {
            searchContact();
        }

        else if (choice == 4) {
            sortContacts();
        }

        else if (choice == 5) {
            cout << "Exiting program...\n";
            break;
        }

        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
