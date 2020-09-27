#pragma once
#include "Book.h"
const int MAX_BOOKS_IN_SHELF = 100;
class BookShelf
{
public:
	//getters
	int getCount() const;
	bool AddBook(const Book& book);
	Book RemoveBook(const Book& book);
	//what books bookshelf contains
	bool Contains(const Book& book);
	//return location of where book is
	int Location(const Book& book);
	
	void PrintDetails(ostream& theStream) const;

private:
	//array
	Book books[MAX_BOOKS_IN_SHELF];
	//keep count of books in shelf
	int count;

};

