#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    Book(std::string title, std::string author, int year);

    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
};

#endif // BOOK_H
