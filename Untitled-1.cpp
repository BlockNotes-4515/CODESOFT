#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int num1,num2;
 int operations;

    cout<<"\n------------------------------------Simple Calculator!-----------------------------\n"<<endl;

    cout<<"\n CODSOFT TASK-2"<<endl;

    /*Develop a calculator program that performs basic arithmetic
        operations such as addition, subtraction, multiplication, and
          division. Allow the user to input two numbers and choose an
             operation to perform.*/
    
    cout<<"\n 1. Enter the First Number in order to check: ";
    cin>>num1;

    cout<<"\n 2. Enter the Second Number in order to calculate: ";
    cin>>num2;

    cout<<"\n 3. The Numbers Choosen by the user are first is: "<<num1<<" and the Second One is: "<<num2<<endl;

    cout<<"\n 4. Choose the Operations Which you want to perform like!"<<endl;
    cout<<"\n 5. Enter the Values to Perform Addition->Click(1); Substraction->Click(2);\nMultiplication->Click(3); Division->Click(5): ";
    cin>>operations;

    //By using the Switch Operations we used to Perform The task easily taken by the User!;
    switch(operations)
    {
        case 1:
        {
            cout<<"\n-->Addition of the First: "<<num1<<" and Second Number is: "<<num2<<" are "<<num1+num2<<endl;
            cout<<"--> Addition of (num1+num2):"<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        }
        
        case 2:
        {
            cout<<"\n --> Substraction of the First: "<<num1<<" and Second Number is: "<<num2<<" are "<<num1-num2<<endl;
            cout<<"\n --> Substraction in terms of (num1-num2): "<<num1-num2<<endl;
            cout<<"\n --> Substraction will be different (num2-num1): "<<num2-num1<<endl;
            cout<<"\n --> Substraction of the (num1-num2): "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        }

        case 3:
        {
            cout<<"\n --> Multiplication of the First: "<<num1<<" and Second Number are: "<<num2<<" are "<<num1*num2<<endl;
            cout<<"\n --> Multiplication Product of: "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        }

        case 4:
        {
            cout<<"\n -->Division of the First: "<<num1<<" and the Second Number input are: "<<num2<<" are "<<num1/num2<<endl;
            cout<<"\n -->Division Values May be different in terms of: "<<num2/num1;
            cout<<"\n Main Division Values are: "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            break;
        }

        default:
        {
            cout<<"\n -->Sorry! You Entered The Invalid Choice, Please! Re-Enter & Try Again!";
            break;
        }
    }
    return 0;
}