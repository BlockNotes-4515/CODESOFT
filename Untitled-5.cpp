#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{int movie;
 int column, row;
 int seats=10;  //Refers 10 columns and 10 rows.
 int seat=1250;
 int case1=1000, case2=599, case3=456, case4=1999, case5=609;
 int GST=50;
 while(1){
    cout<<"\n------------------------------Movie Booking System!-------------------------\n";
    cout<<"\n CODSOFT TASK-5";
    cout<<"\n-------------------------!!Welcome to Inox Cinema Theatre!!-----------------\n";

    cout<<"\n Which Movie you want to watch for hangout! "<<endl;

    cout<<"\n --> 1. Ironman-2"<<endl;
    cout<<"\n --> 2. End-Game"<<endl;
    cout<<"\n --> 3. Infinity War!"<<endl;
    cout<<"\n --> 4. Holiday!"<<endl;
    cout<<"\n --> 5. The Hacker!"<<endl;
    cout<<"\n ----->Here is the listing of toal movies available, which you want to see (1-4): ";
    cin>>movie;
    cout<<"\n ----------->Total Number of Seats In Inox Cinema are: 2000"<<endl;
    switch(movie)
    {
        case 1:
        {
            cout<<"\n-----------------------------SEAT RESERVATION INOX MOVIES!----------------------------------\n"<<endl;

            cout<<"\n ----> Selected Movie by you Sir/Ma'am is: "<<setw(2)<<" Ironman-2!"<<endl;
            cout<<"\n ---->Total Price of this movie is (per-person): "<<case1<<"/-"<<setw(2)<<" just for today!"<<endl;
            cout<<"\n  1. Total seats Available for this Picture is: 150"<<setw(2)<<" Choose your seat, then!"<<endl;
            cout<<"\n  2. Enter the Column name to select: ";
            cin>>column;
            cout<<"\n  3. Enter the Row to select are: ";
            cin>>row;
            cout<<"\n !! You Seat has been Reserved seat no at "<<column<<" : "<<row<<" at cost: 1000/-"<<endl;

            cout<<"\n\n  4. Including Income Tax (GST): "<<GST<<endl;

            //By, Conditional Statements we, have to check the Seat Availability.
            if(column>seats)
            {
                cout<<"\n Sorry! Seat is now Full, you can choose another movie instead!"<<endl;
            }
            else if(column==seats && row<=seats)
            {
                cout<<"\n No, Seats are Left, Book your slot for Upcoming fast!"<<endl;
            }
            else if(column==seats && row==seats)
            {
                cout<<"\n Yups! Seat is now almost full, you can enter by taking VIP-Pass Only: charges( 250 + )"<<endl;
            }
            else{
                cout<<"\n Your Seat has been reserved!"<<endl;

            cout<<"\n-----------------Total Booking Cost Bill!----------------------\n"<<endl;

            cout<<"\n !! Your, Seat has be Selected/ Verified!"<<setw(2)<<" Visit Again!!"<<endl;
            cout<<"\n---->(Addition of GST tax)+(Movie Ticket)+(Discount 10%): "<<GST<<" + "<<case1<<" = "<<GST+case1<<"/-"<<endl;
            }
        }
        break;
        case 2:
        {
           cout<<"\n-----------------------------SEAT RESERVATION INOX MOVIES!----------------------------------\n"<<endl;
           
            cout<<"\n ----> Selected Movie by you Sir/Ma'am is: "<<setw(2)<<" End-Game!"<<endl;
            cout<<"\n ---->Total Price of this movie is (per-person): "<<case2<<"/-"<<setw(2)<<" Valid for 2-Days Only! "<<endl;
            cout<<"\n 1. Total seats Available for this Picture is: 150"<<setw(2)<<" Choose your seat, then!"<<endl;
            cout<<"\n 2. Enter the Column name to select: ";
            cin>>column;
            cout<<"\n 3. Enter the Row to select are: ";
            cin>>row;
            cout<<"\n !! You Seat has been Reserved seat no at "<<column<<" : "<<row<<" at cost: 599/-";

            cout<<"\n\n 4. Including Income Tax (GST): "<<GST<<endl;

            //By, Conditional Statements we, have to check the Seat Availability.
             if(column>seats)
            {
                cout<<"\n Sorry! Seat is now Full, you can choose another movie instead!"<<endl;
            }
            else if(column==seats && row<=seats)
            {
                cout<<"\n No, Seats are Available, Book your slot for Upcoming Films fast!"<<endl;
            }
            else if(column==seats && row==seats)
            {
                cout<<"\n Yups! Seat is now almost full, you can enter by taking VIP-Pass Only: charges( 250 + )"<<endl;
            }
            else{
            cout<<"\n-----------------Total Booking Cost Bill!----------------------\n"<<endl;

            cout<<"\n !! Your, Seat has be Selected/ Verified!"<<setw(2)<<" Visit Again!!"<<endl;
            cout<<"\n\n (Addition of GST tax)+(Movie Ticket)+(Discount 10%): "<<GST<<" + "<<case2<<" = "<<GST+case2<<"/-"<<endl;
            }
        }
        break;
        case 3:
        {
            cout<<"\n-----------------------------SEAT RESERVATION INOX MOVIES!----------------------------------\n"<<endl;
            
            cout<<"\n ----> Selected Movie by you Sir/Ma'am is: "<<setw(2)<<" Infinity War!"<<endl;
            cout<<"\n ---->Total Price of this movie is (per-person): "<<case3<<"/-"<<setw(2)<<" Valid for Today Only! "<<endl;
            cout<<"\n 1. Total seats Available for this Picture is: 150"<<setw(2)<<" Choose your seat, then!"<<endl;
            cout<<"\n 2. Enter the Column name to select: ";
            cin>>column;
            cout<<"\n 3. Enter the Row to select are: ";
            cin>>row;
            cout<<"\n !! You Seat has been Reserved seat no at "<<column<<" : "<<row<<" at cost: 456/-";

            cout<<"\n\n 4. Including Income Tax (GST): "<<GST<<endl;

            //By, Conditional Statements we, have to check the Seat Availability.
             if(column>seats)
            {
                cout<<"\n Sorry! Seat is now Full, you can choose another movie instead!"<<endl;
            }
            else if(column==seats && row<=seats)
            {
                cout<<"\n No, Seat is Not Avalable, Book your slot for Upcoming Films fast!"<<endl;
            }
            else if(column==seats && row==seats)
            {
                cout<<"\n Yups! Seat is now almost full, you can enter by taking VIP-Pass Only: charges( 250 + )"<<endl;
            }
            else{
            cout<<"\n-----------------Total Booking Cost Bill!----------------------\n"<<endl;

            cout<<"\n !! Your, Seat has be Selected/ Verified!"<<setw(2)<<" Visit Again!!"<<endl;
            cout<<"\n\n (Addition of GST tax)+(Movie Ticket)+(Discount 10%): "<<GST<<" + "<<case3<<" = "<<GST+case3<<"/-"<<endl;
            }
        }
        break;
        case 4:
        {
            cout<<"\n-----------------------------SEAT RESERVATION INOX MOVIES!----------------------------------\n"<<endl;
            
            cout<<"\n ----> Selected Movie by you Sir/Ma'am is: "<<setw(2)<<" Holiday"<<endl;
            cout<<"\n ---->Total Price of this movie is (per-person): "<<case4<<"/-"<<setw(2)<<" Valid for 1-Day Only! "<<endl;
            cout<<"\n 1. Total seats Available for this Picture is: 150"<<setw(2)<<" Choose your seat, then!"<<endl;
            cout<<"\n 2. Enter the Column name to select: ";
            cin>>column;
            cout<<"\n 3. Enter the Row to select are: ";
            cin>>row;
            cout<<"\n !! You Seat has been Reserved seat no at "<<column<<" : "<<row<<" at cost: 1999/-";

            cout<<"\n\n 4. Including Income Tax (GST): "<<GST<<endl;

            //By, Conditional Statements we, have to check the Seat Availability.
             if(column>seats)
            {
                cout<<"\n Sorry! Seat is now Full, you can choose another movie instead!"<<endl;
            }
            else if(column==seats && row<=seats)
            {
                cout<<"\n No, Seat is Not Available, Book your slot for Upcoming Films fast!"<<endl;
            }
            else if(column==seats && row==seats)
            {
                cout<<"\n Yups! Seat is now almost full, you can enter by taking VIP-Pass Only: charges( 250 + )"<<endl;
            }
            else{
            cout<<"\n-----------------Total Booking Cost Bill!----------------------\n"<<endl;

            cout<<"\n !! Your, Seat has be Selected/ Verified!"<<setw(2)<<" Visit Again!!"<<endl;
            cout<<"\n\n (Addition of GST tax)+(Movie Ticket)+(Discount 10%): "<<GST<<" + "<<case4<<" = "<<GST+case4<<"/-"<<endl;
            }
        }
        break;
        case 5:
        {
            cout<<"\n-----------------------------SEAT RESERVATION INOX MOVIES!----------------------------------\n"<<endl;
           
            cout<<"\n ----> Selected Movie by you Sir/Ma'am is: "<<setw(2)<<" Hacker!"<<endl;
            cout<<"\n ---->Total Price of this movie is (per-person): "<<case5<<"/-"<<setw(2)<<" Valid for Today Only!"<<endl;
            cout<<"\n 1. Total seats Available for this Picture is: 150"<<setw(2)<<" Choose your seat, then!"<<endl;
            cout<<"\n 2. Enter the Column name to select: ";
            cin>>column;
            cout<<"\n 3. Enter the Row to select are: ";
            cin>>row;
            cout<<"\n !! You Seat has been Reserved seat no at "<<column<<" : "<<row<<" at cost: 609/-";

            cout<<"\n\n 4. Including Income Tax (GST): "<<GST<<endl;

            //By, Conditional Statements we, have to check the Seat Availability.
             if(column>seats)
            {
                cout<<"\n Sorry! Seat is now Full, you can choose another movie instead!"<<endl;
            }
            else if(column==seats && row<=seats)
            {
                cout<<"\n Sorry, No Seat is Avaialbale, Book your slot for Upcoming Films fast!"<<endl;
            }
            else if(column==seats && row==seats)
            {
                cout<<"\n Yups! Seat is now almost full, you can enter by taking VIP-Pass Only: charges( 250 + )"<<endl;
            }
            else{
            cout<<"\n--------------------------Total Booking Cost Bill!----------------------\n"<<endl;

            cout<<"\n !! Your, Seat has be Selected/ Verified!"<<setw(2)<<" Visit Again!!"<<endl;
            cout<<"\n\n (Addition of GST tax)+(Movie Ticket)+(Discount 10%): "<<GST<<" + "<<case5<<" = "<<GST+case5<<"/-"<<endl;
            }
        }
        break;
        default:
        {
            cout<<"\n Sorry! No, Movie is Available You have to Choose from choice given (1-5), try it!"<<endl;
        }
        break;
    }  
    }
    return 0;
}