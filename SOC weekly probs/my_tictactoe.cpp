#include<iostream>
using namespace std;

void print_the_board(char board[]){
    for(int i=0;i<9;i++){
        if(i==2 || i==5 || i==8) cout<<board[i]<<endl;
        else cout<<board[i]<<"|";
    }
}

int main(){
    char board[9]="  ";
    bool completed=false;
    while(completed==false){
        print_the_board(board);
        cout<<"Play your move X"<<endl;
        
        break;
    }
}