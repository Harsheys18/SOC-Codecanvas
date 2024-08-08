#include <iostream>
#include <string>
using namespace std;

class stack{
    private:
        int n=-1;
        char store[100];
    public:
        char* head=nullptr;
        void addChar(char s){
            n++;
            store[n]=s;
            head=&store[n];
        }
        void removeChar(char s){
            if(isEmpty()==false) {n--; head=&store[n];}
            else cout<<"Empty stack can't be removed";
        }
        bool isEmpty(){
            if(head==nullptr) return true;
            else return false;
        }
};

bool checkBalanced(string line){
    
}

// take string and check whether it is balanced or not
int main() {
    string line;
    cin >> line;
    checkBalanced(line);
}
