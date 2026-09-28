#include <iostream>
#include <string>
using namespace std;


class Library {
protected:
    string library_name;
public:
    void setLibraryDetails() {
        library_name = "Central City Library";
    }
};


class Book : public Library {
private:
    string title;
    string author;
public:
    void getBookDetails() {
        setLibraryDetails();
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
    }
    
    void displayBook() {
        cout << "\n--- Book Record [" << library_name << "] ---\n";
        cout << "Title: " << title << "\nAuthor: " << author << endl;
    }
};


class Magazine : public Library {
private:
    string title;
    int issue_number;
public:
    void getMagazineDetails() {
        setLibraryDetails();
        cout << "Enter Magazine Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Issue Number: ";
        cin >> issue_number;
    }
    
    void displayMagazine() {
        cout << "\n--- Magazine Record [" << library_name << "] ---\n";
        cout << "Title: " << title << "\nIssue No: " << issue_number << endl;
    }
};

int main() {
    Book b;
    Magazine m;
    
    cout << "--- Reading Book Data ---" << endl;
    b.getBookDetails();
    
    cout << "\n--- Reading Magazine Data ---" << endl;
    m.getMagazineDetails();
    
  
    b.displayBook();
    m.displayMagazine();
    
    return 0;
}
