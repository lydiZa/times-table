#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;
//learn your multiplication table
const int row = 12;
const int col = 12;
int table[row][col];

void display(){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            table[i][j] = i*j;
        }
    }
    for(int i=1;i<=row;i++){
        cout << endl;
        for(int j=1;j<=col;j++){
            if(to_string(table[i][j]).size()<2){
                cout << " " << table[i][j] << "  | ";
            }else if(to_string(table[i][j]).size()==2){
                cout << " " << table[i][j] << " | ";
            }else{
                cout << table[i][j] << " | ";
            }
        }
         cout << endl;
         cout << "-----------------------------------------------------------------------";
    }
}

int main(){
    display();
    int question_count = 0;
    int total_q = 0;
    int score = 0;
    int i = 0;
    cout << '\n' << '\n' << '\n' << '\n' << '\n';
    cout << '\n' << '\n' << '\n' << '\n' << '\n';
    cout << '\n' << '\n' << '\n' << '\n' << '\n';

    cout << "How many questions do you want?" << endl;
    cin >> total_q;
    srand(time(0));
    while(i < total_q){
        int x = rand()%row;
        int y = rand()%col;
        cout << x << "*" << y << "=?" << endl;
        
        int user_input;
        cin >> user_input;
        if(user_input == (x*y)){
            score++;
        }else if(user_input == -1){
            break;
        }else{
            std::cout <<  "Incorrect. The answer is: " << x*y << endl;
        }
        i++;
    }
    std::cout << "Your score is: " << score << " out of " << total_q << endl;
    double percent = (1.0*score / total_q) *100.0;
    std::cout << percent << "%" << endl;
    return 0;
}