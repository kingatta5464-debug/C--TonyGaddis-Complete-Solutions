#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Book
{
private:
    // Private members for Book details
    string ISBN;
    string title;
    string author;
    string genre;
    bool availibility;
    int borrowerid;

public:
    // Constructors
    Book();                                                                          // Default constructor
    Book(string ISBN, string title, string author, string genre, bool availibility); // Parametrized constructor

    // Setter methods to update private data members
    void setisbn(string i);
    void settitle(string i);
    void setauthor(string i);
    void setgenre(string i);
    void setavailibility(bool i);
    void setborrowerid(int i);

    // Getter methods to access private data members
    string getisbn();
    string gettitle();
    string getauthor();
    string getgenre();
    bool getavailibility();

    // Functions to display Book details, write to file and read from file
    void displayBooks();
    void writeBookinfile(ofstream &out);
    void getBookfromfile(ifstream &in);
};

// Function to write Book data to a file
void Book::writeBookinfile(ofstream &out)
{
    // Write each data member to the file
    out << ISBN << endl;
    out << title << endl;
    out << author << endl;
    out << genre << endl;
    out << availibility << endl;
    out << borrowerid << endl;
}

// Function to read Book data from a file
void Book::getBookfromfile(ifstream &in)
{
    // Check if the file opened successfully
    if (!in)
    {
        cerr << "Error: Could not read Books from file" << endl;
        return;
    }
    // Read data members from the file
    getline(in, ISBN);
    getline(in, title);
    getline(in, author);
    getline(in, genre);
    in >> availibility;
    in >> borrowerid;
    in.ignore(); // Clear any remaining newline character from the input buffer
}

// Default constructor
Book::Book() {}

// Parametrized constructor to initialize Book object with values
Book::Book(string ISBN, string title, string author, string genre, bool availibility)
{
    this->ISBN = ISBN;
    this->title = title;
    this->author = author;
    this->genre = genre;
    this->availibility = availibility;
    this->borrowerid = -1; // Default value for borrowerid when Book is available
}

// Setter functions to modify private members
void Book::setisbn(string i)
{
    ISBN = i;
}

void Book::settitle(string i)
{
    title = i;
}

void Book::setauthor(string i)
{
    author = i;
}

void Book::setgenre(string i)
{
    genre = i;
}

void Book::setavailibility(bool i)
{
    availibility = i;
}

void Book::setborrowerid(int i)
{
    borrowerid = i;
}

// Getter functions to return private members
string Book::getisbn()
{
    return ISBN;
}

string Book::gettitle()
{
    return title;
}

string Book::getauthor()
{
    return author;
}

string Book::getgenre()
{
    return genre;
}

// Function to check Book availability
bool Book::getavailibility()
{
    // Return true if available, else false
    return availibility;
}

// Function to display Book details on console
void Book::displayBooks()
{
    // Output each detail of the Book
    cout << "ISBN : " << ISBN << endl;
    cout << "Title : " << title << endl;
    cout << "Author : " << author << endl;
    cout << "Genre : " << genre << endl;

    // Check availability status
    if (availibility)
    {
        cout << "Status : Available" << endl;
    }
    else
    {
        cout << "Status : Unavailable" << endl;
    }

    cout << "Borrower Id : " << borrowerid << endl;
    cout << "----------------------------------------" << endl;
}

class User
{
private:
    // Private members for User details
    int Userid;
    string name;
    string email;

public:
    // Public member to store the list of borrowed Books (ISBNs)
    vector<string> borrowedBooks;

    // Constructors
    User();                           // Default constructor
    User(int id, string n, string e); // Parametrized constructor

    // Setter methods to update private data members
    void setUserid(int i);
    void setUsername(string n);
    void serUseremail(string e);

    // Setter method to update borrowed Books list by passing a vector
    void setborrowedBooksISBN(vector<string> &bb);

    // Getter methods to access private data members
    int getUserid();
    string getUsername();
    string getUseremail();

    // Getter method to access borrowed Books and count
    vector<string> getUserborrowedBooks();
    int getnumberofUserBookborrowed();

    // Methods to handle Book borrowing and returning
    void UserBookborrow(const string &title);
    void UserreturnaBook(string title);

    // Function to display User information
    void displayUserinfo();

    // Functions to write User data to a file and read from a file
    void writeUserinfile(ofstream &out);
    void getUserfromfile(ifstream &in);
};

// Default constructor initializing member variables
User::User()
{
    Userid = 0;
    name = "";
    email = "";
    borrowedBooks = {};
}

// Parametrized constructor initializing member variables with given values
User::User(int id, string n, string e)
{
    Userid = id;
    name = n;
    email = e;
    borrowedBooks = {};
}

// Setter functions to modify private members
void User::setUserid(int i)
{
    Userid = i;
}

void User::setUsername(string n)
{
    name = n;
}

void User::serUseremail(string e)
{
    email = e;
}

// Setter function to update borrowed Books list using a vector
void User::setborrowedBooksISBN(vector<string> &bb)
{
    string a;
    for (int i = 0; i < bb.size(); i++)
    {
        a = bb[i];
        borrowedBooks.push_back(a);
    };
}

// Getter functions to return private members
int User::getUserid()
{
    return Userid;
}

string User::getUsername()
{
    return name;
}

string User::getUseremail()
{
    return email;
}

// Getter function to return the list of borrowed Books
vector<string> User::getUserborrowedBooks()
{
    return borrowedBooks;
}

// Getter function to return the count of borrowed Books
int User::getnumberofUserBookborrowed()
{
    return borrowedBooks.size();
}

// Function to allow the User to borrow a Book by adding it to the borrowedBooks list
void User::UserBookborrow(const string &title)
{
    borrowedBooks.push_back(title);
}

// Function to return a Book by removing it from the borrowedBooks list
void User::UserreturnaBook(string title)
{
    for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); it++)
    {
        if (*it == title)
        {
            borrowedBooks.erase(it); // Erase the Book if it matches the title
            break;
        }
    }
}

// Function to display User information on console
void User::displayUserinfo()
{
    // Output each detail of the User
    cout << "User Id : " << Userid << endl;
    cout << "User Name : " << name << endl;
    cout << "User Email : " << email << endl;
    cout << "Borrowed Books : " << endl;

    // Loop through borrowedBooks vector and display each Book
    for (int i = 0; i < borrowedBooks.size(); i++)
    {
        cout << borrowedBooks[i] << endl;
    }
    cout << "-----------------------------------" << endl;
}

// Function to write User data to a file
void User::writeUserinfile(ofstream &out)
{
    // Write each data member to the file
    out << Userid << endl;
    out << name << endl;
    out << email << endl;
    out << borrowedBooks.size() << endl;

    // Check if User has borrowed any Books
    if (borrowedBooks.empty())
    {
        out << "No Books Borrowed" << endl;
    }
    else
    {
        // Write all borrowed Books to the file
        for (string title : borrowedBooks)
        {
            out << title << endl;
        }
    }
}

// Function to read User data from a file
void User::getUserfromfile(ifstream &in)
{
    // Check if the file opened successfully
    if (!in)
    {
        cerr << "Error: Could not read Users from file" << endl;
        return;
    }

    // Read each data member from the file
    in >> Userid;
    in.ignore();
    getline(in, name);
    getline(in, email);

    int Booksize;
    in >> Booksize;
    in.ignore();

    // Clear the borrowedBooks vector before populating it
    borrowedBooks.clear();

    // Read all borrowed Books from the file and add them to borrowedBooks vector
    for (int i = 0; i < Booksize; i++)
    {
        string b;
        in >> b;
        borrowedBooks.push_back(b);
    }
}

class Library
{
private:
    list<Book> Books; // List to store all Books
    list<User> Users; // List to store all Users

public:
    // Default constructor
    Library() {};

    // Methods to add Books
    void addBook(Book &b);
    void addBook();

    // Methods to remove Books by title or ISBN
    void removeBookbytitle(string title);
    void removeBookbyISBN(string isbn);

    // Methods to search Books by title, author, genre, or ISBN
    void searchBookbytitle(const string &title);
    void searchBookbyauthor(const string &author);
    void searchBookbygenre(const string &genre);
    void searchBookbyISBN(const string &ISBN);

    // Methods to display Books (available, issued, or all Books)
    void displayavailibleBooks();
    void displayIssuedeBooks();
    void displayBooksIssuedToUser(string &isbn);
    void displayallBooks();

    // Method to update Book details by ISBN
    void updateBookdetailsbyISBN(string isbn);

    // Methods for Book borrowing and returning
    void borrowBook(string isbn, int Userid);
    void returnBook(string isbn, int Userid);

    // Methods to add, remove, and search Users
    void addUser(User &u);
    void addUser();
    void removeUserbyid(int id);
    void searchUserbyid(int id);
    User *getUserbyid(int id);

    // Method to display all Users
    void displayallUsers();

    // Methods to save and retrieve Library data from a file
    void writealldatatofile(string filename);
    void getalldatafromfile(string filename);
};

// Method definitions

// Method to add an existing Book object to the Library
void Library::addBook(Book &b)
{
    Books.push_back(b);
}

// Method to input and add a new Book
void Library::addBook()
{
    Book b;
    string ISBN, title, author, genre;
    bool availibility;
    int borrowerid;

    // Input Book details
    cout << "ISBN: ";
    getline(cin, ISBN);
    b.setisbn(ISBN);
    cout << "Title: ";
    getline(cin, title);
    b.settitle(title);
    cout << "Author: ";
    getline(cin, author);
    b.setauthor(author);
    cout << "Genre: ";
    getline(cin, genre);
    b.setgenre(genre);
    cout << "Availibility (0 for false, 1 for true): ";
    cin >> availibility;
    b.setavailibility(availibility);
    cout << "Borrower Id: ";
    cin >> borrowerid;
    b.setborrowerid(borrowerid);

    Books.push_back(b); // Add the Book to the Library
}

// Methods to remove Books by title or ISBN
void Library::removeBookbytitle(string title)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (it->gettitle() == title)
        {
            Books.erase(it);
            cout << "Book with Title '" << title << "' has been removed." << endl;
            return;
        }
    }
    cout << "Book with Title '" << title << "' not found." << endl;
}

void Library::removeBookbyISBN(string isbn)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (it->getisbn() == isbn)
        {
            Books.erase(it);
            cout << "Book with ISBN '" << isbn << "' has been removed." << endl;
            return;
        }
    }
    cout << "Book with ISBN '" << isbn << "' not found." << endl;
}

// Methods to search Books by title, author, genre, or ISBN
void Library::searchBookbytitle(const string &title)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (title == it->gettitle())
        {
            it->displayBooks();
            return;
        }
    }
    cout << "Book with Title '" << title << "' not found." << endl;
}

void Library::searchBookbyauthor(const string &author)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (author == it->getauthor())
        {
            it->displayBooks();
            return;
        }
    }
    cout << "Book with Author '" << author << "' not found." << endl;
}

void Library::searchBookbygenre(const string &genre)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (genre == it->getgenre())
        {
            it->displayBooks();
            return;
        }
    }
    cout << "Book with Genre '" << genre << "' not found." << endl;
}

void Library::searchBookbyISBN(const string &ISBN)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (ISBN == it->getisbn())
        {
            it->displayBooks();
            return;
        }
    }
    cout << "Book with ISBN '" << ISBN << "' not found." << endl;
}

// Methods to display available Books, issued Books, and all Books
void Library::displayavailibleBooks()
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (it->getavailibility())
        {
            it->displayBooks();
        }
    }
}

void Library::displayIssuedeBooks()
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (!it->getavailibility())
        {
            it->displayBooks();
        }
    }
}

void Library::displayBooksIssuedToUser(string &isbn)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (it->getisbn() == isbn)
        {
            it->displayBooks();
        }
    }
}

void Library::displayallBooks()
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        it->displayBooks();
    }
}

// Method to update Book details by ISBN
void Library::updateBookdetailsbyISBN(string isbn)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (it->getisbn() == isbn)
        {
            string newISBN, title, author, genre;
            bool availibility;
            int borrowerid;

            // Input new details
            cout << "Enter New Details:" << endl;
            cout << "ISBN: ";
            cin.ignore();
            getline(cin, newISBN);
            it->setisbn(newISBN);
            cout << "Title: ";
            getline(cin, title);
            it->settitle(title);
            cout << "Author: ";
            getline(cin, author);
            it->setauthor(author);
            cout << "Genre: ";
            getline(cin, genre);
            it->setgenre(genre);
            cout << "Availibility (0 for false, 1 for true): ";
            cin >> availibility;
            it->setavailibility(availibility);
            cout << "Borrower Id: ";
            cin >> borrowerid;
            it->setborrowerid(borrowerid);

            cout << "Book with ISBN " << isbn << " has been successfully updated." << endl;
            return;
        }
    }
    cout << "Book with ISBN " << isbn << " not found." << endl;
}

// Methods to borrow and return Books
void Library::borrowBook(string isbn, int Userid)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (it->getisbn() == isbn && it->getavailibility())
        {
            it->setavailibility(false);
            it->setborrowerid(Userid);
            list<User>::iterator itu;
            for (itu = Users.begin(); itu != Users.end(); itu++)
            {
                if (itu->getUserid() == Userid)
                {
                    itu->borrowedBooks.push_back(isbn);
                    break;
                }
            }
            cout << "Book Borrowed Successfully" << endl;
            return;
        }
    }
    cout << "Book is already borrowed or not available." << endl;
}

void Library::returnBook(string isbn, int Userid)
{
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        if (it->getisbn() == isbn && !it->getavailibility())
        {
            it->setavailibility(true);
            it->setborrowerid(-1);

            list<User>::iterator itu;
            for (itu = Users.begin(); itu != Users.end(); itu++)
            {
                if (itu->getUserid() == Userid)
                {
                    itu->UserreturnaBook(isbn);
                    break;
                }
            }
            cout << "Book Returned Successfully" << endl;
            return;
        }
    }
    cout << "This Book wasn't borrowed." << endl;
}

// Methods to add, remove, and search Users
void Library::addUser(User &u)
{
    Users.push_back(u);
}

void Library::addUser()
{
    User u;
    int Userid;
    string name, email;
    vector<string> borrowedBooks;

    // Input User details
    cout << "New User ID: ";
    cin >> Userid;
    u.setUserid(Userid);
    cout << "New Name: ";
    cin.ignore();
    getline(cin, name);
    u.setUsername(name);
    cout << "New Email: ";
    getline(cin, email);
    u.serUseremail(email);

    // Check if the User has borrowed Books
    bool hasBorrowedBooks;
    cout << "Has Borrowed Any Books? (1 for Yes, 0 for No): ";
    cin >> hasBorrowedBooks;

    if (hasBorrowedBooks)
    {
        int numBooks;
        cout << "How Many Books Borrowed? ";
        cin >> numBooks;
        string isbn;
        for (int i = 0; i < numBooks; i++)
        {
            cout << "Book " << i + 1 << " ISBN: ";
            cin >> isbn;
            borrowBook(isbn, Userid);
            borrowedBooks.push_back(isbn);
        }
        u.setborrowedBooksISBN(borrowedBooks);
    }

    Users.push_back(u); // Add User to the Library
}

void Library::removeUserbyid(int id)
{
    list<User>::iterator it;
    for (it = Users.begin(); it != Users.end(); it++)
    {
        if (it->getUserid() == id)
        {
            Users.erase(it);
            cout << "User with ID '" << id << "' has been removed." << endl;
            return;
        }
    }
    cout << "User with ID '" << id << "' not found." << endl;
}

void Library::searchUserbyid(int id)
{
    list<User>::iterator it;
    for (it = Users.begin(); it != Users.end(); it++)
    {
        if (it->getUserid() == id)
        {
            it->displayUserinfo();
            return;
        }
    }
    cout << "User with ID '" << id << "' not found." << endl;
}

User *Library::getUserbyid(int id)
{
    list<User>::iterator it;
    for (it = Users.begin(); it != Users.end(); it++)
    {
        if (it->getUserid() == id)
        {
            return &(*it); // Return pointer to the User object
        }
    }
    return nullptr; // User not found
}

// Method to display all Users
void Library::displayallUsers()
{
    list<User>::iterator it;
    for (it = Users.begin(); it != Users.end(); it++)
    {
        it->displayUserinfo();
    }
}

// Methods to save and retrieve Library data from a file
void Library::writealldatatofile(string filename)
{
    ofstream fout(filename);

    if (!fout)
    {
        cout << "Error: Unable to open file!" << endl;
        return;
    }

    // Save Book data
    fout << Books.size() << endl;
    list<Book>::iterator it;
    for (it = Books.begin(); it != Books.end(); it++)
    {
        it->writeBookinfile(fout);
    }

    // Save User data
    fout << Users.size() << endl;
    list<User>::iterator itu;
    for (itu = Users.begin(); itu != Users.end(); itu++)
    {
        itu->writeUserinfile(fout);
    }

    fout.close();
    cout << "Data successfully saved to file." << endl;
}

void Library::getalldatafromfile(string filename)
{
    ifstream fin(filename);

    if (!fin)
    {
        cout << "Error: Unable to open file!" << endl;
        return;
    }

    // Retrieve Book data
    int numBooks;
    fin >> numBooks;
    Book b;
    for (int i = 0; i < numBooks; i++)
    {
        b.getBookfromfile(fin);
        Books.push_back(b);
    }

    // Retrieve User data
    int numUsers;
    fin >> numUsers;
    User u;
    for (int i = 0; i < numUsers; i++)
    {
        u.getUserfromfile(fin);
        Users.push_back(u);
    }

    fin.close();
    cout << "Data successfully retrieved from file." << endl;
}

class Admin
{
private:
    string name;     // Admin's name
    string password; // Admin's password

public:
    // Default constructor
    Admin()
    {
        name = "";
        password = "";
    }

    // Parameterized constructor
    Admin(string n, string p)
    {
        name = n;
        password = p;
    }

    // Setter methods
    void setAdminid(string p)
    {
        password = p;
    }

    void setAdminname(string n)
    {
        name = n;
    }

    // Getter methods
    string getAdminid() const
    {
        return password;
    }

    string getAdminname() const
    {
        return name;
    }

    // Method for the Admin to log in by checking the provided credentials
    bool login(const string &n, const string &p) const
    {
        return (name == n && password == p);
    }

    // Admin adds a new Book to the Library
    void addBook(Library &lib, Book &b)
    {
        lib.addBook(b);
        cout << "Book added successfully by Admin." << endl;
    }

    // Admin removes a Book from the Library by its ISBN
    void removeBook(Library &lib, const string &Bookid)
    {
        lib.removeBookbyISBN(Bookid);
        cout << "Book removed successfully by Admin." << endl;
    }

    // Admin adds a new User to the Library
    void addUser(Library &lib, User &u)
    {
        lib.addUser(u);
        cout << "User added successfully by Admin." << endl;
    }

    // Admin removes a User from the Library by their User ID
    void removeUser(Library &lib, int Userid)
    {
        lib.removeUserbyid(Userid);
        cout << "User removed successfully by Admin." << endl;
    }

    // Admin generates a report of all Library data
    void generateReport(Library &lib)
    {
        cout << "===== Library Report =====" << endl;

        cout << "\nAll Books in the Library: " << endl;
        lib.displayallBooks();

        cout << "\nBooks Available in the Library: " << endl;
        lib.displayavailibleBooks();

        cout << "\nAll Registered Users: " << endl;
        lib.displayallUsers();

        cout << "\n===========================" << endl;
    }
};
int main()
{
    // Create some initial Users and Books for the Library
    User u1(101, "John Doe", "john.doe@example.com");
    User u2(102, "Johny Bairstow", "johnyybairstow@example.com");
    User u3(103, "Jonas Smith", "jonassmith@example.com");

    Book b1("980254783", "Over The Top", "James Anderson", "Science Fiction", true);
    Book b2("123456789", "Beyond The Horizon", "Anna Smith", "Adventure", true);
    Book b3("111222333", "Deep Space", "Chris Evans", "Science Fiction", true);

    // Create the Library and add initial data
    Library lib;
    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);
    lib.addUser(u1);
    lib.addUser(u2);
    lib.addUser(u3);

    // Create an Admin
    Admin admin("Atta", "12345");

    int choice;
    int Userchoice;
    string isbn;

    do
    {
        cout << "\n=== Welcome to the Library Management System ===\n";
        cout << "1. Login as User\n";
        cout << "2. Login as Admin\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter User ID: ";
            int Userid;
            cin >> Userid;
            User *loggedInUser = lib.getUserbyid(Userid);

            if (loggedInUser != nullptr)
            {
                do
                {
                    cout << "\n=== User Menu ===\n";
                    cout << "1. View all available Books\n";
                    cout << "2. Issue a Book\n";
                    cout << "3. Return a Book\n";
                    cout << "4. View issued Books\n";
                    cout << "5. Logout\n";
                    cout << "Enter your choice: ";
                    cin >> Userchoice;

                    switch (Userchoice)
                    {
                    case 1:
                        lib.displayavailibleBooks();
                        break;

                    case 2:
                        cout << "Enter Book ISBN to borrow: ";
                        cin.ignore();
                        getline(cin, isbn);
                        lib.borrowBook(isbn, Userid);
                        break;

                    case 3:
                        cout << "Enter Book ISBN to return: ";
                        cin.ignore();
                        getline(cin, isbn);
                        lib.returnBook(isbn, Userid);
                        break;

                    case 4:
                        if (!loggedInUser->borrowedBooks.empty())
                        {
                            for (int i = 0; i < loggedInUser->borrowedBooks.size(); i++)
                            {
                                lib.displayBooksIssuedToUser(loggedInUser->borrowedBooks[i]);
                            }
                        }
                        else
                        {
                            cout << "No Books borrowed yet!" << endl;
                        }
                        break;

                    case 5:
                        cout << "Logging out.\n";
                        break;

                    default:
                        cout << "Invalid choice, try again!\n";
                    }
                } while (Userchoice != 5);
            }
            else
            {
                cout << "User not found. Please register through the Admin.\n";
            }
            break;
        }

        case 2:
        {
            cout << "Enter Admin Username: ";
            string Username;
            cin >> Username;

            cout << "Enter Admin Password: ";
            string password;
            cin >> password;

            if (admin.login(Username, password))
            {
                int Adminchoice;
                do
                {
                    cout << "\n=== Admin Menu ===\n";
                    cout << "1. Add a new Book\n";
                    cout << "2. Remove a Book\n";
                    cout << "3. Update a Book\n";
                    cout << "4. Add a User\n";
                    cout << "5. Remove a User\n";
                    cout << "6. View all Users\n";
                    cout << "7. View all Books\n";
                    cout << "8. Generate report\n";
                    cout << "9. Logout\n";
                    cout << "Enter your choice: ";
                    cin >> Adminchoice;

                    switch (Adminchoice)
                    {
                    case 1:
                    {
                        cout << "Enter Book title: ";
                        string title;
                        cin.ignore();
                        getline(cin, title);

                        cout << "Enter Book author: ";
                        string author;
                        getline(cin, author);

                        cout << "Enter Book ISBN: ";
                        string isbn;
                        getline(cin, isbn);

                        cout << "Enter Book genre: ";
                        string genre;
                        getline(cin, genre);

                        Book newBook(isbn, title, author, genre, true);
                        admin.addBook(lib, newBook);
                        break;
                    }

                    case 2:
                    {
                        int removechoice;
                        do
                        {
                            cout << "1. Remove by Title\n";
                            cout << "2. Remove by ISBN\n";
                            cout << "3. Quit\n";
                            cout << "Choose one: ";
                            cin >> removechoice;

                            switch (removechoice)
                            {
                            case 1:
                                cout << "Enter Book title: ";
                                cin.ignore();
                                getline(cin, isbn);
                                lib.removeBookbytitle(isbn);
                                break;
                            case 2:
                                cout << "Enter Book ISBN: ";
                                cin.ignore();
                                getline(cin, isbn);
                                lib.removeBookbyISBN(isbn);
                                break;
                            case 3:
                                cout << "Quitting remove operation.\n";
                                break;
                            default:
                                cout << "Invalid choice, try again!\n";
                            }
                        } while (removechoice != 3);
                        break;
                    }

                    case 3:
                        cout << "Enter ISBN of Book to update: ";
                        cin >> isbn;
                        lib.updateBookdetailsbyISBN(isbn);
                        break;

                    case 4:
                        lib.addUser();
                        break;

                    case 5:
                    {
                        int id;
                        cout << "Enter User ID to remove: ";
                        cin >> id;
                        lib.removeUserbyid(id);
                        break;
                    }

                    case 6:
                        lib.displayallUsers();
                        break;

                    case 7:
                        lib.displayallBooks();
                        break;

                    case 8:
                        admin.generateReport(lib);
                        break;

                    case 9:
                        cout << "Logging out.\n";
                        break;

                    default:
                        cout << "Invalid choice, try again!\n";
                    }
                } while (Adminchoice != 9);
            }
            else
            {
                cout << "Incorrect Admin credentials.\n";
            }
            break;
        }

        case 3:
            lib.writealldatatofile("Library_data.txt");
            cout << "Exiting system. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice, try again!\n";
        }

    } while (choice != 3);

    return 0;
}
