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
