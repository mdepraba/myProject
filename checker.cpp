#include <iostream>
using namespace std;


void initializeBoard();

int main(){

	initializeBoard();

	return 0;
}

void initializeBoard(){
	for (int loop1 = 0; loop1 <= 7; loop1++){		// amount vertical box
        for (int loop2 = 0; loop2 <= 2; loop2++){		// vertical box height
            for (int a = 0; a <= 7; a++){					// amount horizontal box
                for (int b = 0; b < 7; b++){ 					// horizontal box lenght
                	// white
                    if(((loop1 % 2 == 0) && (a % 2 != 0)) || ((loop1 % 2 != 0) && (a % 2 == 0))) {
                    	if (loop2==1 && b==3){
                    	    cout << "O";
                    	    // x++; 
                    	}else {
                    		cout << " ";
                    	}

                    // black
                    }else {
                    	cout << "-";
                    }
                }
                if (a != 7){
                    cout << "|";
                }
            } cout << endl;
        }
        if (loop1 != 7){
            cout << "------- ------- ------- ------- ------- ------- ------- -------\n";
        }
    }
}
