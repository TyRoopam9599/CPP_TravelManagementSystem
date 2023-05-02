#include<iostream>
#include<fstream>
#include<iomanip>
#include<unistd.h>

using namespace std;

class Customer{
    public:
        string name, gender, address;
        int age, phone;
        static int custID;
        char all[100] ;
        void getCustomerInfo(){
            ofstream out("oldCustomer.txt", ios::app); // ios::app is used to append the file
            {
                cout<<"Enter Customer ID: ";
                cin>>custID ;
                cout<<"Enter Customer Name: ";
                cin>>name ;
                cout<<"Enter customer Age: ";
                cin>>age ;
                cout<<"Enter customer Gender: ";
                cin>>gender ;
                cout<<"Enter customer Address: ";
                cin>>address ;
                cout<<"Enter customer Phone Number: ";
                cin>>phone ;
            }
            out<<"\nCustomer ID: "<<custID<<"\nName: "<<name<<"\nAge: "<<age<<"\nGender: "<<gender<<"\nAddress: "<<address<<"\nPhone Number: "<<phone ;
            out.close();
            cout<<"Customer Information saved successfully\nWe save information for future use.\n";
        }
        void showCustomerInfo(){
            ifstream in("oldCustomer.txt");
            {
                if(!in){
                    cout<<"File not found"<<endl;
                    exit(1);
                }
                while(!in.eof()){
                    in.getline(all, 100); 
                    cout<<all<<endl ;
                }
                in.close(); 
            }
        }
};

int Customer::custID;

class Cabs{
    public:
    int cabChoice;
    int kilometers;
    static float price;

    void cabDetails(){
        cout<<"We collaborated with fastest, safest, and smartest cab service around the country:\n";
        cout<<"**************************************************\n";
        cout<<"Enter the number of kilometers you want to travel: ";
        cin>>kilometers ;
        cout<<"Enter the cab type you want to travel: \n";
        cout<<"1. Micro (10 Rs./Km)"<<endl;
        cout<<"2. Mini (15 Rs./Km)"<<endl;
        cout<<"3. Prime (20 Rs./Km)"<<endl;
        cout<<"4. SUV (25 Rs./Km)"<<endl;
        cout<<"5. Sedan (30 Rs./Km)"<<endl;
        cout<<"6. Luxury (40 Rs./Km)"<<endl;
        cout<<"7. Buses (12 Rs./Km)"<<endl;
        cout<<"8. Tempo Traveller (8 Rs./Km)"<<endl;
        cout<<"9. Airport Transfer (50 Rs./Km)"<<endl;
        cout<<"10. Outstation (60 Rs./Km)"<<endl;
        cout<<"Enter your choice: ";
        cin>>cabChoice; 
        switch(cabChoice){
            case 1:
                price= kilometers*10.0 ;
                break ;
            case 2:
                price= kilometers*15.0;
                break ;
            case 3:
                price= kilometers*20.0 ;
                break ;
            case 4:
                price= kilometers*25.0;
                break ;
            case 5:
                price= kilometers*30.0 ;
                break ;
            case 6:
                price= kilometers*40.0;
                break ;
            case 7:
                price= kilometers*12.0 ;
                break ;
            case 8:
                price= kilometers*8.0;
                break ;
            case 9:
                price= kilometers*50.0 ;
                break ;
            case 10:
                price= kilometers*60.0;
                break ;
        }
        cout<<"Your total bill will be: "<<price<<endl ;
        cout<<"Do you want to book a ride? (Y/N): ";
        char choice;
        cin>>choice;
        if (choice=='y' || choice=='Y'){
            cout<<"Your ride is booked.\n";
            cout<<"Goto Menu to take the receipt.\n";
            sleep(100);
        }
        else{
            cout<<"Thank you for using our service.\n";
            cabDetails() ;
        }
    }
};

class Booking{

};

class Receipt{

};

int main(){

    return 0 ;
}