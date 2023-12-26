#include <iostream>
#include "Book.h"
#include "Library.h"

int main() {
    Library library;

    // Sample books added to the library
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);

    library.addBook(book1);
    library.addBook(book2);

    library.listBooks();

    library.deleteBook("To Kill a Mockingbird");

    library.listBooks();

    return 0;
}
