#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int number, guess;
  
  cout<<"\n---------------------------------------Task-1!---------------------------------------\n";
  

  // Generate a random number
  number=rand()%100+1;

  // Do while the user does not guess the number
  do {
    cout<<"\n----------------------------------------------------------------------\n"<<endl;
    cout << "\n 1. Guess a number between 1 and 100: ";
    cin >> guess;
    cout<<"\n ---->2. Choosen Number by the user are: "<<guess<<endl;
    if (guess<number)
     {
      cout<<"\n -->Too much low! "<<guess<<endl;
    } 
    else if(guess>number)
     {
      cout<<"\n -->Too much high! " <<guess<<endl;
    }
    else if(guess==number)
    {
        cout<<"\n -->Congratulations You guessed it right: "<<guess<<endl;
    }
    else
    {
        cout<<"\n -->Sorry! Invalid User input enter the number in range(1-100): "<<guess<<endl;
    }
  } while (guess!=number);

  // User guessed the number correctly
  cout << "Congratulations! You guessed the number!" << endl;

  return 0;
}