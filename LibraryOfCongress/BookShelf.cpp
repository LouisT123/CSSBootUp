#include "BookShelf.h"

int BookShelf::getCount() const
{
    return count;
}

bool BookShelf::AddBook(const Book& book)
{
    int i = 0;
    //make sure bookshelf isn't full
    if (count == MAX_BOOKS_IN_SHELF)
    {
        return false;
    }
    //find empty slot (slot empty if title is blank)
    while (books[i].getTitle() != "")
    {
        i++;
    }
    //copy book we passed in into empty slot
    books[i] = book;
    //increase count
    count++;
    return true;
}

Book BookShelf::RemoveBook(const Book& book)
{
    //return book
    Book retBook;
    //find location and pull book from that location
    int location = Location(book);
    if (location != -1)
    {
        Book emptyBook;
        retBook = books[location];
        //takes slot and makes it empty
        books[location] = emptyBook;
        count--;

    }
    return retBook;
}

bool BookShelf::Contains(const Book& book)
{
    //if book was found bookshelf contains book
    if (Location(book) != -1)
    {
        return true;
    }
    else
    {
        return false;
    }
   
}


int BookShelf::Location(const Book& book)
{
    for (int i = 0; i < MAX_BOOKS_IN_SHELF; i++)
    {
        //if found same book, return location of book
        if (books[i].Equal(book))
        {
        return i;
        }
       
    }
    //book not found
    return -1;
}

void BookShelf::PrintDetails(ostream& theStream) const
{
    for (int i = 0; i < MAX_BOOKS_IN_SHELF; i++)
    {
        //if book is there print it out
        if (books[i].getTitle() != "")
        {
            books[i].PrintDetails(theStream);
        }
        
    }
}

