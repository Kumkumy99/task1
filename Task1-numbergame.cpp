#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int guess,attempt=0;
    int uplim,lowlim;
    cout<<"NUMBER GUESSING GAME"<<endl;
    cout<<"Enter the upper limit: "<<endl;
    cin>>uplim;
    cout<<"Enter the lower limit:"<<endl;
    cin>>lowlim;
    srand(time(0));
    int no=rand()%uplim+lowlim; //generates random number  
    while(true){
         cout<<"Guess a number between "<<lowlim <<" and "<< uplim<<":"<<endl;
         cin>>guess;
          attempt++; //counts the number of attempts
         if(guess==no){
            cout<<"Congratulations you guessed the correct number!!"<<endl;
            break;
         }
        if(guess>no && (guess-no)>=50){
            cout<<"The guess is too high"<<endl;
        }
         else if(guess>no && (guess-no)<50){
            cout<<"The guess is high"<<endl;
        }
         else if(guess<no && (no-guess)>=50){
            cout<<"The guess is too low"<<endl;
        }
         else if(guess<no && (no-guess)<=50){
            cout<<"The guess is low"<<endl;

        }
    }
    cout<<"Number of attempts you needed:"<<attempt;
}

