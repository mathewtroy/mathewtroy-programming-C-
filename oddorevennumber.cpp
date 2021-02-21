#include <iostream>
using namespace std;

int main(){

    int number;
    cout << "Please enter whole number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "You have entered even number." << endl;
    }
    else{
        cout << "You have entered odd number." << endl;
    }
    cout << "Thank you. Bye!";
    system("pause>0");
}

//This code is taken from the YouTube channel CodeBeauty
