#include "Library.h"
#include <iostream>
#include <algorithm>

void Library::addBook(const Book& book) {
    books.push_back(book);
    std::cout << "Book added to the library.\n";
}

void Library::listBooks() const {
    if (books.empty()) {
        std::cout << "The library is empty.\n";
    } else {
        std::cout << "List of Books:\n";
        for (const auto& book : books) {
            std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", Year: " << book.getYear() << std::endl;
        }
    }
}

void Library::deleteBook(const std::string& title) {
    auto it = std::find_if(books.begin(), books.end(), [&](const Book& book) {
        return book.getTitle() == title;
    });

    if (it != books.end()) {
        books.erase(it);
        std::cout << "Book deleted from the library.\n";
    } else {
        std::cout << "Book not found in the library.\n";
    }
}
