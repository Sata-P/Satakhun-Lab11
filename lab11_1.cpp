#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    string grade;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9+1;
    if(x==1){
        grade = "A";
        }
    if(x==2){
        grade = "B+";
        }
    if(x==3){
        grade = "B";
        }
    if(x==4){
        grade = "C+";
        }
    if(x==5){
        grade = "C";
        }
    if(x==6){
        grade = "D+";
        }
    if(x==7){
        grade = "D";
        }
    if(x==8){
        grade = "F";
        }
    if(x==9){
        grade = "W";
        }
    cout << "You will get "<< grade << " in this 261102.";
    
    }