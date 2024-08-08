#include<iostream>
#include<cstdlib>
using namespace std;

class Queue{
    private:
        int* queuearray;
        int front,back;

    public:
        Queue(){
            queuearray=new int[50];
            front=-1;
            back=-1;
        }

        void enqueue(int n){
            back++;
            queuearray[back]=n;
        }

        void dequeue(){
            front++;
        }

        void peek(){

        }

        void empty(){
            
        }
};