#include "Book.h"

Book::Book(std::string title, std::string author, int year)
    : title(title), author(author), year(year) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}
