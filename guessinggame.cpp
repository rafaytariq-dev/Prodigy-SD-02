#include<iostream>
#include <ctime>
using namespace std;
int main(){
    int ranNum, guessNum, count=0;
    srand(time(0));
    ranNum=rand()%100;
    //cout<<ranNum;
    while(true){
    cout<<"********Number Guessing Game********\n";
    cout<<"Enter your guess number\n";
    cin>>guessNum;
    count++;
    if(guessNum<ranNum){
        cout<<"Your guess is low as compared the the random number generated! Try Again!\n";
    }
    else if(guessNum>ranNum){
        cout<<"Your guess is high as compared the the random number generated! Try Again!\n";
    }
    else{
        cout<<"Congratulations you correctly guessed the number!"<<endl;  
        cout<<"You correctly guessed the number in: "<<count<<" attempts!\n";
        break;
    }
    }

    return 0;
}