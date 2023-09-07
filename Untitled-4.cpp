#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main() 
{int wcount = 0;
 string file;

    cout<<"\n-------------------------------File Word Count!----------------------------\n";
    cout<<"\n CODSOFT : TASK-4!"<<endl;
    cout<<endl;

    //We, take the name of the file in order to check & count the total no: of words. 
  cout<<"\n 1. Enter the Name of the File: ";
  cin>>file;
  cout<<"\n 2. File Choosen by the user in order to count the Words are: "<<file<<endl;
  std::ifstream inputFile(file); // Open the text file

  if (inputFile.is_open()) 
  {
    std::string line;
    

    while (std::getline(inputFile, line)) 
    {
      std::stringstream ss(line);
      std::string word;

      while (ss>>word) 
      {
        wcount=wcount+1;
      }
    }

    inputFile.close();

    std::cout << "\n 3. Number of words in the said file: " << wcount << std::endl<<endl;
  } else 
  {
    std::cout << "\n 3. Failed to open the file." << std::endl;
  }

  return 0;
}