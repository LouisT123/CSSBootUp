// LibraryOfCongress.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
#include "Book.h"
#include "BookShelf.h"

int main()
{
    std::cout << "Welcome to the library of congress!\n\n";

    Book recentBook, favoriteBook;
    //utilizing author/title constructor
    Book scaryBook("It", "King");

    //create a bookshelf
    BookShelf myBookshelf;

    myBookshelf.AddBook(recentBook);
    myBookshelf.AddBook(favoriteBook);
    myBookshelf.AddBook(scaryBook);
    myBookshelf.PrintDetails(cout);

    recentBook.setTitle("Lord of the Rings");
    recentBook.setAuthor("JR Tolkein");
    recentBook.setLength(450);

    favoriteBook = recentBook;
    recentBook.setTitle("The Martian");
    recentBook.setAuthor("Andy Weir");
    recentBook.setLength(369);

    //testing turnpage and print details methods
    recentBook.TurnPage(15);
    int currentPage = recentBook.TurnPage(34);
    cout << "CP: " << currentPage << endl;
    recentBook.PrintDetails(cout);
    cout << endl;

    //testing contructor
    cout << "testing author/title contructor" << endl;
    scaryBook.PrintDetails(cout);
    //utilizing encapsulation with private data types
    cout << "\nRecent Book Title: " << recentBook.getTitle() << endl;
    cout << "Favorite Book Title: " << favoriteBook.getTitle() << endl;
  

}


