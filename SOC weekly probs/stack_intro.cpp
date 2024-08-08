#include<iostream>
#include<cstdlib>
using namespace std;

class Stack{
private:
    int upper;
    int* stackarray;
    
public:
    Stack(){
        stackarray=new int[50];
        upper=-1;
    }

    void push(int a){
        upper++;
        stackarray[upper]=a;
    }
    void pop(){
        upper--;
    }
    void top(){
        cout<<upper<<endl;
    }
    void displaystack(){
        for(int i=0;i<=upper;i++){
            cout<<stackarray[i]<<endl;
        }
    }

    ~Stack(){
        delete[] stackarray;
    }
};

int main(){
    int n=5;
    cin>>n;
    Stack numberset;
    numberset.push(n);
    numberset.push(7);
    numberset.displaystack();
    numberset.top();
    numberset.pop();
    numberset.top();
}