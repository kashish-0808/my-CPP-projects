# Simple Document Search Engine (C++)

This is a small C++ program that works like a basic document search system.
It allows the user to search through stored documents using a **keyword**, and also apply optional filters like **category** or **date**.

The program checks each document and displays the ones that match the search conditions.

## Features

* Search documents using a keyword
* Optional filters for category and date
* Case-insensitive search (so uppercase/lowercase doesn't matter)
* Simple console-based interface
* Displays matching documents with their details

## How the Program Works

1. Some sample documents are stored in the program.
2. The user selects the **Search** option.
3. The program asks for:

   * Keyword
   * Category (optional)
   * Date (optional)
4. It checks all documents and prints the ones that match the search.

## Example Output

1. Search
2. Exit
   Choice: 1

Enter keyword: C++ OOP Concepts
Filter category (press enter to skip):
Filter date (press enter to skip):

Document Found
ID: 2
Title: C++ OOP Concepts
Category: Programming
Date: 2026-03-04

---

1. Search
2. Exit
   Choice: 2

Exiting program...

## Technologies Used

* C++
* Standard Library (vector, string, algorithm)
* Object-Oriented Programming concepts

## Purpose

This project was created to practice:

* Classes and objects in C++
* Working with vectors
* String handling and searching
* Basic user interaction through the console

## Author

Kashish Khan



----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

# Phonebook Application (C++)

This is a simple C++ console program that works like a basic phonebook system.  
It allows the user to store contact information and manage it easily using different options.

The program lets the user add new contacts, view all saved contacts, search for a specific contact, and sort the contact list alphabetically.

## Features

* Add new contacts with name and phone number
* Display all saved contacts
* Search for a contact by name
* Sort contacts alphabetically
* Simple console-based menu system

## How the Program Works

1. The program displays a menu with different options.
2. The user can choose an operation by entering a number.

Available operations:

* Add Contact
* Show Contacts
* Search Contact
* Sort Contacts
* Exit

3. When a contact is added, the name and phone number are stored in the program.
4. The search option finds a contact by name.
5. The sort option arranges contacts alphabetically.

## Example Output

1. Add Contact  
2. Show Contacts  
3. Search Contact  
4. Sort Contacts  
5. Exit  

Choice: 1  
Enter name: Kashish  
Enter phone number: 123456789  

Contact added successfully.

Choice: 3  
Enter name to search: Kashish  

Found: Kashish - 123456789

## Technologies Used

* C++
* Standard Library (vector, string, algorithm)
* Basic Object-Oriented Programming

## Purpose

This project was created to practice:

* Classes and objects in C++
* Working with vectors
* Searching and sorting data
* Building menu-based console applications

## Author

Kashish Khan
