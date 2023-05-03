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
    string bookedCab ;
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
                bookedCab="Micro" ;
                break ;
            case 2:
                price= kilometers*15.0;
                bookedCab="Mini" ;
                break ;
            case 3:
                price= kilometers*20.0 ;
                bookedCab="Prime";
                break ;
            case 4:
                price= kilometers*25.0;
                bookedCab="SUV";
                break ;
            case 5:
                price= kilometers*30.0 ;
                bookedCab="Sedan";
                break ;
            case 6:
                price= kilometers*40.0;
                bookedCab="Luxury";
                break ;
            case 7:
                price= kilometers*12.0 ;
                bookedCab="Buses";
                break ;
            case 8:
                price= kilometers*8.0;
                bookedCab="Tempo Traveller";
                break ;
            case 9:
                price= kilometers*50.0 ;
                bookedCab="Airport Transfer";
                break ;
            case 10:
                price= kilometers*60.0;
                bookedCab="Outstation";
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
    public:
    int chooseHotel;
    int Package;
    int gotoMenu;
    string bookedHotel;
    static float hotelPrice ;

    void hotels(){
        string hotelName[10] = {"Taj Palace", "Hotel Taj", "Royal Hotel", "Empire Hotel", "Kapil Hotel", "Hotel Raj", "Tyagi's Hotel", "London Hotel", "Paris Hotel", "Uk Hotel"};
        float hotelprice[10] = {1000,2000,3000,1500,2500,2200,1700,2600,3100,4000} ;

        for(int i=0;i<10;i++){
            cout<<i+1<<" "<<hotelName[i]<<"-->"<<hotelprice[i]<<endl ;
        }
        char choice ;
        cout<<"Currently we have 10 hotels in our database. You can choose any one of them\n";
        cin>>chooseHotel;
        switch(chooseHotel){
            case 1:
                cout<<"You have selected "<<hotelName[0]<<" for your stay. The price of this hotel is "<<hotelprice[0]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[0] ;
                    bookedHotel = hotelName[0] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            case 2:
                cout<<"You have selected "<<hotelName[1]<<" for your stay. The price of this hotel is "<<hotelprice[1]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[1] ;
                    bookedHotel = hotelName[1] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            case 3:
                cout<<"You have selected "<<hotelName[2]<<" for your stay. The price of this hotel is "<<hotelprice[2]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[2] ;
                    bookedHotel = hotelName[2] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            case 4:
                cout<<"You have selected "<<hotelName[3]<<" for your stay. The price of this hotel is "<<hotelprice[3]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[3] ;
                    bookedHotel = hotelName[3] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            case 5:
                cout<<"You have selected "<<hotelName[4]<<" for your stay. The price of this hotel is "<<hotelprice[4]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[4] ;
                    bookedHotel = hotelName[4] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            
            case 6:
                cout<<"You have selected "<<hotelName[5]<<" for your stay. The price of this hotel is "<<hotelprice[5]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[5] ;
                    bookedHotel = hotelName[5] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            case 7:
                cout<<"You have selected "<<hotelName[6]<<" for your stay. The price of this hotel is "<<hotelprice[6]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[6] ;
                    bookedHotel = hotelName[6] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            case 8:
                cout<<"You have selected "<<hotelName[7]<<" for your stay. The price of this hotel is "<<hotelprice[7]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[7] ;
                    bookedHotel = hotelName[7] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            case 9: 
                cout<<"You have selected "<<hotelName[8]<<" for your stay. The price of this hotel is "<<hotelprice[8]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[8] ;
                    bookedHotel = hotelName[8] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            case 10: 
                cout<<"You have selected "<<hotelName[9]<<" for your stay. The price of this hotel is "<<hotelprice[9]<<endl;
                cout<<"Do you want tobook this hotel? (Y/N): ";
                cin>>choice ;
                if(choice=='Y'||choice=='y'){
                    cout<<"Your hotel is booked\n";
                    hotelPrice = hotelprice[9] ;
                    bookedHotel = hotelName[9] ;
                    cout<<"Goto menu to take the receipt\n";
                }
                else{
                    cout<<"Thank you for using our service\n";
                    hotels() ;
                }
                break ;
            default:
                cout<<"Invalid Input"<<endl ;
                hotels() ;
                break ;
        }
    }
};

class Receipt : public Booking, Cabs, Customer{         //Multiple Inheritance
    public:
    void printBill(){
        ofstream outf("Receipt.txt");
        {
            outf<<"---------------------------------------------"<<endl;
            outf<<"-------------------Receipt-------------------"<<endl;
            outf<<"---------------------------------------------"<<endl<<endl;
            outf<<"Customer ID: "<<Customer::custID<<endl<<endl;
            outf<<"---------------------------------------------"<<endl;
            outf<<"-------------------Booking-------------------"<<endl;
            outf<<"---------------------------------------------"<<endl<<endl;
            cout<<"Hotel Name: "<<Booking::bookedHotel<<endl ;
            cout<<"Hotel Price: "<<Booking::hotelPrice<<endl ;
            outf<<"---------------------------------------------"<<endl;
            outf<<"--------------------Cabs---------------------"<<endl;
            outf<<"---------------------------------------------"<<endl<<endl;
            outf<<"Cab Name: "<<Cabs::bookedCab<<endl;
            outf<<"Cab Price: "<<Cabs::price<<endl<<endl;
            outf<<"---------------------------------------------"<<endl;
            outf<<"--------------------Total--------------------"<<endl;
            outf<<"---------------------------------------------"<<endl<<endl;
            outf<<"Total Price: "<<Booking::hotelPrice + Cabs::price<<endl ;
            outf<<"---------------------------------------------"<<endl;
            outf<<"------------------Thank You------------------"<<endl;
            outf<<"---------------------------------------------"<<endl<<endl;
        }
        outf.close() ;
    }
};

int main(){
    Customer obj = Customer();
    return 0 ;
}