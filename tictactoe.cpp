// originally made by : madepraba
#include <iostream>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
char player = 'X';

void print_board(){
    int x = 1;
    for (int loopa = 0; loopa < 3; loopa++){
        for (int loopb = 0; loopb < 3; loopb++){
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 2; j++){
                    if (loopb==1 && j==1){
                        cout << square[x];
                        x++; 
                    }
                    cout << "\t";
                }
                if (i != 2){
                    cout << "|";
                }
            } cout << endl;
        }
        if (loopa != 2){
            cout << "---------------- --------------- ----------------\n";
        }
    }
}

bool isFull_board(){
    for (int i = 1; i <= 9; i++){
        if (square[i] != 'X' && square[i] != 'O'){
            return false;
        }
    }
    return true;
}

bool isFilled_square(int a){
    if(square[a] != 'O' && square[a]!='X'){
        return false;
    } else{
        return true;    
    }
}

void change_player(){
    if(player == 'X'){
        player = 'O';
    }else {
        player = 'X';
    }
}

bool check_win(){
    if ((square[1]==square[5] && square[5]==square[9]) || (square[3]==square[5] && square[5]==square[7])){
        return true;
    }else if((square[1]==square[2] && square[2]==square[3]) || (square[4]==square[5] && square[5]==square[6]) || (square[7]==square[8] && square[8]==square[9])){
        return true;
    }else if((square[1]==square[4] && square[4]==square[7]) || (square[2]==square[5] && square[5]==square[8]) || (square[3]==square[6] && square[6]==square[9])){
        return true;
    }
    return false;
}

void player_input(int inputPlayer){
    cout << "player " << player << ". Input square number (1-9): ";
    cin >> inputPlayer;

    square[inputPlayer] = player;
}

int main(int argc, char const *argv[]){
    int input;
    
    while (true){
        print_board();
        player_input(input);
        while(isFilled_square(input)){
            cout << "square is already filled\n";
            player_input(input);
        }
        if(check_win() == true){
            print_board();
            cout << "congratulation, player " << player << " win\n";
            break;
        }
        change_player();
    }
    

    return 0;
}