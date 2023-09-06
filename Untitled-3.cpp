#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string names[100];
    int no, i;
    int count=0;
    char Candidategrades[100];     //It might be using an Array or you can take the helps of Structures as Well!
    char highest;
    char lowest;
    int sum=0;
    
    cout<<"\n------------------------------Student Grading System!---------------------------\n";

    cout<<"\n 1. -->Enter the total Number of Students for Evaluation are: ";
    cin>>no;
    cout<<"\n 2. ---> Total Number of Students in order to manage their grades are: "<<no<<endl;

    for(i=0;i<no;i++)
    {
        cout<<"\n ## Enter the name of the Student "<<i+1<< " : ";
        cin>>names[i];
        count=count+1;
    }
    cout<<"\n ## Total Students Who came for their Evaluation are: "<<count<<endl;

    cout<<"\n------------------Enter your Grades by each student!--------------------\n";

    for(i=0;i<no;i++)
    {
        cout<<"\n @@ Enter the Grades By the First Student:  "<<names[i]<<i+1<<" are: ";
        cin>>Candidategrades[i];
    }
    
    //Conditional statements We, need to check Overall Students Highest/lowest/Average Grades!;
    cout<<"\n-----------------------Entering Data Limit-Set By the Universities!-------------------\n";

    cout<<"\n ## Enter the Highest Limit Grading System: ";
    cin>>highest;
    cout<<"\n @@ Enter the Lowest Limit Grading System: ";
    cin>>lowest;
    cout<<"\n $$ Student With highest grading Points are: "<<highest<<" and with the lowest are: "<<lowest<<endl;
    cout<<endl;

    // Update the highest and lowest grades.
    if (Candidategrades[i] > highest) 
    {
      highest = Candidategrades[i];
    }
     if (Candidategrades[i]<lowest) 
     {
        lowest=Candidategrades[i];
        }

    sum=sum+Candidategrades[i];
  // Calculate the average grade.

    cout<<"\n------------------------Evaluation of Highest/Lowest/Average Grades!---------------\n";

    float avg=sum/no;

    cout<<"\n 1. --> The Values of the Highest Grade are: "<<setw(4)<<highest<<endl;
    cout<<"\n 2. ----> The Values of the Lowest Grade are: "<<setw(4)<<lowest<<endl;
    cout<<"\n 3. ------> Now, Total Average of all Student Grades are: "<<avg<<setw(4)<<endl;

    return 0;
}