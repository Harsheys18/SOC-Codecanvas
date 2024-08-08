#include <iostream>
#include <vector>
using namespace std;

class Library{
    private:
        int n;
    public:
        Library(): n(0) {}
        vector<string> books;  //string books[]; it is not possible 

        //adding new book with verification
        void addBook(string bookName){
            int k=-1;
            for(int i=0;i<n;i++){
                if(books[i]==bookName){
                    k=i;
                }
            }
            if(k==-1){
                n=n+1;
                books.push_back(bookName);
            }
            else{
                cout<<"Book already exists"<<endl;
            }
        }

        //checking and removing book
        void removeBook(string bookName){
            int k=-1;
            for(int i=0;i<n;i++){
                if(books[i]==bookName){
                    k=i;
                }
            }
            if(k==-1){
                cout<<"Book doesn't exist"<<endl;
            }
            else{
                for(int i=k;i<n-1;i++){
                    books[i]=books[i+1];
                }
                n=n-1;
                books.pop_back();
            }
        }

        // displaying all the books
        void displayBooks(){
            for(int i=0;i<n;i++){
                cout<<books[i]<<endl;
            }
        }
};

int main(){
    Library lib1;
    lib1.addBook("Harry Potter");
    lib1.addBook("Silent Patient");
    lib1.addBook("Princess");
    lib1.addBook("Powerrangers");
    lib1.displayBooks();
    lib1.removeBook("Princess");
    lib1.removeBook("harsheys");
    lib1.displayBooks();
    }

