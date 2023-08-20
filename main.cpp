#include <iostream>
#include "library.h"
using namespace std;

int main() {
  string name;
  double weight = 0, volume = 0, total_volume = 0;
  int highest_weight = 0, reps = 0, total_reps = 0, sets = 0, num_exercise = 0, choice2 = 0, choice3 = 0;
  int choice = menu();
  if(choice == 2){
    cout << "\nSee you next time! Bye bye" << endl;
    return 0;
  }else{
    cout << "You have now started your workout session.\n\nFor maximum muscle growth, Gym Bros Inc suggests resting 3 - 4 minutes between sets" << endl;
   do{
      cout << "\nEnter the name of the exercise that you will be doing" << endl;
    getline(cin, name);
    num_exercise++;
    cout << "\nYou have selected " << name << " as your exercise." << endl;
    do {
      cout << "Record the number of reps and weight after you finish your set." << endl;
    cout << "\nWeight: ";
    cin >> weight;
    if(weight > highest_weight){
      highest_weight = weight;
    }
    cout << "Reps: ";
    cin >> reps;
    total_reps += reps;
    sets++;
    volume = weight * reps;
    total_volume += volume;
    do{
    cout << "\nWould you like to do another set? 1 for Yes or 2 for No: ";
    cin >> choice2;
    cin.ignore();
    }while(choice2 < 1 || choice2 > 2);
    } while(choice2 == 1);
    cout << "\nHere is a summary of the set(s) you completed: " << endl;
    cout << "Highest Weight Completed: " << highest_weight << endl;
    cout << "Total Sets Completed: " << sets << endl;
    cout << "Total Reps Completed: " << total_reps << endl;
    cout << "Total Volume (Lbs) Completed: " << total_volume << endl;
   do{
      cout << "\nWould you like to do another exercise? 1 for Yes or 2 for No: ";
      cin >> choice3;
      cin.ignore();
   } while(choice3 < 1 || choice3 > 2);
   }while(choice3 == 1);
    cout << "\nThank You for letting the Gym Bros join you for your gym session today!" << endl; 
    cout << "\nHere is an overall summary of your gym session: " << endl;
    cout << "Exercises Completed: " << num_exercise << endl;
    cout << "Highest Weight Completed: " << highest_weight << endl;
    cout << "Total Sets Completed: " << sets << endl;
    cout << "Total Reps Completed: " << total_reps << endl;
    cout << "Total Volume (Lbs) Completed: " << total_volume << endl;
    cout << "\nWe hope to join you on your next gym session!";
  }
  
  
  
}