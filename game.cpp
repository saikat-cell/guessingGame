#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
    cout << "\t************* welcome to guessing game *************"<<endl<<endl;
    int n;
    int guess=12;
    int i=0;
    srand(time(NULL));
    int number = rand()%20+1;
    while (i<5){
        cout << "\t\tEnter your guessing number : ";
        cin >> n;
        guess--;
        if(n==number){
            cout << "\t\tCongratulations! You win."<<endl;
            break;
        }
        if(guess==0){
            cout << "\t\tGame over. You loss!"<<endl;
            break;
        }
        cout << "\t\tWrong ans. You have only " << guess << " moves" << endl;
    }
    cout << "\t***************************************************";

}
