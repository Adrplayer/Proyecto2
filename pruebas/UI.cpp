#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int Side = 3;
int Score = 3045; 
int High = 9999;
int Up = 1;
int Time = 1245;

void showScore() {

    cout << "+-------------+---------------------------+" << "\n";
    cout << "|  SIDE "<< setfill('0') << setw(3) << Side <<"   |  SCORE  "<< setfill('0') << setw(6) << Score <<"     TIME   |" << "\n";
    cout << "|             |  HIGH   "<< setfill('0') << setw(6) << High <<"     "<< setfill('0') << setw(4) << Time <<"   |" << "\n";
    cout << "|             |                    "<<Up<<" UP   |" << "\n";
    cout << "+-------------+---------------------------+" << "\n";

}

void showMap() {

}

void Clear() {
    
}


int main(){
    showScore();

return 0;
}
