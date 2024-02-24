#include <iostream>
#include <string>

class Book {
    private:
        std::string title;
        std::string author;
        std::string ISBN;


    public:
        Book(std::string _title, std::string _author, std::string _ISBN){
            title = _title;
            author = _author;
            ISBN = _ISBN;
        }

    //set
    void setTitle(std::string _title) {
        title = _title;
    }

    void setAuthor(std::string _author) {
        author = _author;
    }

    void setISBN(std::string _ISBN) {
        ISBN = _ISBN;
    }

    //get
    std::string getTitle() {
        return title;
    }
     std::string getAuthor() {
        return author;
    }
     std::string getISBN() {
        return ISBN;
    }
    
};

int main() 
{
    
    Book myBook("Python Programming", "John Smith", "978-0134853987");


    std::cout << "Initial Book Details:" << std::endl;
    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Author: " << myBook.getAuthor() << std::endl;
    std::cout << "ISBN: " << myBook.getISBN() << std::endl;

   
    myBook.setTitle("New Python Programming");
    myBook.setAuthor("Jane Doe");
    myBook.setISBN("978-0321884916");


    std::cout << "\nUpdated Book Details:" << std::endl;
    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Author: " << myBook.getAuthor() << std::endl;
    std::cout << "ISBN: " << myBook.getISBN() << std::endl;

    return 0;
}