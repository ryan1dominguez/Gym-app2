#include <iostream>
#include <iomanip>
#include "library.h"
using namespace std;

int menu(){
  int choice = -1;
  do{
    cout << "Welcome to the Gym Bros App!" << endl;
    cout << "This app is designed to track the sets, reps, and weight that you lift in the gym!" << endl;
    cout << "Choose from the following options:" << endl;
    cout << "1. Start your workout session" << endl;
    cout << "2. Exit the app" << endl;
    cin >> choice;
    cin.ignore();
  }while(choice < 1 || choice > 2);
  return choice;
}