#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void listBooks() const;
    void deleteBook(const std::string& title);
};

#endif // LIBRARY_H
