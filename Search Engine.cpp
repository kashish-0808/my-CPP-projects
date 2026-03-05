#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// class to store document info
class Document {
public:
    int id;
    string title;
    string category;
    string date;
    string content;

    // constructor
    Document(int i, string t, string c, string d, string con) {
        id = i;
        title = t;
        category = c;
        date = d;
        content = con;
    }
};

// convert string to lowercase (helps in case-insensitive search)
string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

// function to search documents
void searchDocs(vector<Document> &docs) {

    string key, cat, d;
    cin.ignore();

    cout << "Enter keyword: ";
    getline(cin, key);

    cout << "Filter category (press enter to skip): ";
    getline(cin, cat);

    cout << "Filter date (press enter to skip): ";
    getline(cin, d);

    key = toLower(key);
    cat = toLower(cat);
    d = toLower(d);

    bool found = false;

    // check each document
    for (int i = 0; i < docs.size(); i++) {

        string t = toLower(docs[i].title);
        string c = toLower(docs[i].content);
        string dc = toLower(docs[i].category);
        string dd = toLower(docs[i].date);

        bool keyOk = key.empty() || t.find(key) != string::npos || c.find(key) != string::npos;
        bool catOk = cat.empty() || dc == cat;
        bool dateOk = d.empty() || dd == d;

        if (keyOk && catOk && dateOk) {

            cout << "\nDocument Found\n";
            cout << "ID: " << docs[i].id << endl;
            cout << "Title: " << docs[i].title << endl;
            cout << "Category: " << docs[i].category << endl;
            cout << "Date: " << docs[i].date << endl;
            cout << "---------------------\n";

            found = true;
        }
    }

    if (!found) {
        cout << "No results found.\n";
    }
}

int main() {

    vector<Document> docs;

    // adding some sample documents
    docs.push_back(Document(
        1,
        "Data Structures Basics",
        "Education",
        "2026-03-04",
        "Stacks and queues are important data structures in C++"
    ));

    docs.push_back(Document(
        2,
        "C++ OOP Concepts",
        "Programming",
        "2026-03-04",
        "Classes, objects, inheritance and polymorphism in C++"
    ));

    int choice;

    while (true) {

        cout << "\n1. Search\n2. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            searchDocs(docs);
        }
        else if (choice == 2) {
            cout << "Exiting program...\n";
            break;
        }
        else {
            cout << "Wrong choice. Try again.\n";
        }
    }

    return 0;
}
