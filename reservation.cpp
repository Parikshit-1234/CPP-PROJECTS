#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainmenu();

class management{
    public:
        management(){
            mainmenu();
        }

};
class details{
    public:
        static string name,gender;
        int phone_num,age;
        string add;
        static int cid;
        char arr[100];
        void information(){
            cout<<"\n\n\n ENTER CUSTOMER ID \n\n\n ";
            cin>>cid;
            cout<<"\n\n\n ENTER CUSTOMER NAME \n\n\n ";
            cin>>name;
            cout<<"\n\n\n ENTER YOUR AGE \n\n\n ";
            cin>>age;
            cout<<"\n\n\n ENTER YOUR ADDRESS \n\n\n ";
            cin>>add;
            cout<<"\n\n\n ENTER YOUR GENDER \n\n\n ";
            cin>>gender;
            cout<<"\n\n\n YOUR DETAILS ARE SAVED \n\n\n ";
        }
};
int details::cid;
string details::name;
string details::gender;

class registration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;
        void flights(){
            string flight[]={" USA "," UK "," CANADA "," SOUTH KOREA "," EUROPE "," AUSTRALIA "};
            for(int i=0;i<6;i++){
                    cout<<(i+1)<<" FLIGHT TO "<<flight[i]<<endl;
            }
            cout<<"\n\n\n WELCOME TO ALBERT AIRLINES \n\n\n ";
            cout<<"\n\n\n PRESS INDEX NUMBER OF COUNTRY YOU WANT TO BOOK THE FLIGHT OFF: \n\n\n ";
            cin>>choice;
            switch(choice){
                case 1:
                    {
                        cout<<"\n\n\n ------------ WELCOME TO US AIRLINES ------------ ";
                        cout<<"\n\n\n THE FLIGHTS FOR US ARE : \n\n\n ";
                        cout<<"\n\n\n 1) US-100 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 10:00 AM \t 24 HRS \t PRICE - RS 120000  \n\n\n";
                        cout<<"\n\n\n 2) US-200 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 12:00 PM \t 26 HRS \t PRICE - RS 160000  \n\n\n";
                        cout<<"\n\n\n 3) US-300 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 4:00 PM \t 28 HRS \t PRICE - RS 190000  \n\n\n";
                        cout<<"\n\n\n SELECT THE FLIGHT YOU WANT TO BOOK \n\n\n ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 120000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT US-100 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==2){
                            charges = 160000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT US-200 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==3){
                            charges = 190000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT US-300 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else{
                            cout<<"\n\n\n INVALID INPUT, SHIFTING TO PREVIOUS MENU \n\n\n ";
                            flights();
                        }
                        cout<<"\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU \n\n\n ";
                        cin>>back;
                        if(back==1){
                            mainmenu();
                        }
                        else{
                            mainmenu();
                        }
                        break;
                    }
        case 2:
        {
            cout<<"\n\n\n ------------ WELCOME TO UK AIRLINES ------------ ";
                        cout<<"\n\n\n THE FLIGHTS FOR UK ARE : \n\n\n ";
                        cout<<"\n\n\n 1) UK-100 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 8:00 AM \t 18 HRS \t PRICE - RS 100000  \n\n\n";
                        cout<<"\n\n\n 2) UK-200 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 10:00 AM \t 25 HRS \t PRICE - RS 120000  \n\n\n";
                        cout<<"\n\n\n 3) UK-300 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 2:00 PM \t 27 HRS \t PRICE - RS 170000  \n\n\n";
                        cout<<"\n\n\n SELECT THE FLIGHT YOU WANT TO BOOK \n\n\n ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 100000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-100 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==2){
                            charges = 120000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-200 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==3){
                            charges = 170000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT UK-300 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else{
                            cout<<"\n\n\n INVALID INPUT, SHIFTING TO PREVIOUS MENU \n\n\n ";
                            flights();
                        }
                        cout<<"\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU \n\n\n ";
                        cin>>back;
                        if(back==1){
                            mainmenu();
                        }
                        else{
                            mainmenu();
                        }
                        break;
                    
        }
        case 3:
            {
                cout<<"\n\n\n ------------ WELCOME TO CANADIAN AIRLINES ------------ ";
                        cout<<"\n\n\n THE FLIGHTS FOR US ARE : \n\n\n ";
                        cout<<"\n\n\n 1) CAN-100 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 6:00 AM \t 26 HRS \t PRICE - RS 110000  \n\n\n";
                        cout<<"\n\n\n 2) CAN-200 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 7:00 AM \t 28 HRS \t PRICE - RS 120000  \n\n\n";
                        cout<<"\n\n\n 3) CAN-300 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 8:00 AM \t 31 HRS \t PRICE - RS 115000  \n\n\n";
                        cout<<"\n\n\n SELECT THE FLIGHT YOU WANT TO BOOK \n\n\n ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 110000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT CAN-100 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==2){
                            charges = 120000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT CAN-200 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==3){
                            charges = 115000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT CAN-300 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else{
                            cout<<"\n\n\n INVALID INPUT, SHIFTING TO PREVIOUS MENU \n\n\n ";
                            flights();
                        }
                        cout<<"\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU \n\n\n ";
                        cin>>back;
                        if(back==1){
                            mainmenu();
                        }
                        else{
                            mainmenu();
                        }
                        break;
                    
            }
        case 4:
        {
            cout<<"\n\n\n ------------ WELCOME TO SOUTH KOREAN AIRLINES ------------ ";
                        cout<<"\n\n\n THE FLIGHTS FOR SOUTH KOREA ARE : \n\n\n ";
                        cout<<"\n\n\n 1) SKR-100 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 4:00 AM \t 17 HRS \t PRICE - RS 70000  \n\n\n";
                        cout<<"\n\n\n 2) SKR-200 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 3:00 PM \t 13 HRS \t PRICE - RS 100000  \n\n\n";
                        cout<<"\n\n\n 3) SKR-300 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 4:00 PM \t 15 HRS \t PRICE - RS 115000  \n\n\n";
                        cout<<"\n\n\n SELECT THE FLIGHT YOU WANT TO BOOK \n\n\n ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 70000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT SKR-100 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==2){
                            charges = 100000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT SKR-200 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==3){
                            charges = 115000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT SKR-300 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else{
                            cout<<"\n\n\n INVALID INPUT, SHIFTING TO PREVIOUS MENU \n\n\n ";
                            flights();
                        }
                        cout<<"\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU \n\n\n ";
                        cin>>back;
                        if(back==1){
                            mainmenu();
                        }
                        else{
                            mainmenu();
                        }
                        break;
                
        }
        case 5:
        {
            cout<<"\n\n\n ------------ WELCOME TO EUROPEAN AIRLINES ------------ ";
                        cout<<"\n\n\n THE FLIGHTS FOR EUROPE ARE : \n\n\n ";
                        cout<<"\n\n\n 1) EUR-100 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 9:00 AM \t 18 HRS \t PRICE - RS 130000  \n\n\n";
                        cout<<"\n\n\n 2) EUR-200 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 12:00 PM \t 20 HRS \t PRICE - RS 150000  \n\n\n";
                        cout<<"\n\n\n 3) EUR-300 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 2:00 PM \t 24 HRS \t PRICE - RS 170000  \n\n\n";
                        cout<<"\n\n\n SELECT THE FLIGHT YOU WANT TO BOOK \n\n\n ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 130000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT EUR-100 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==2){
                            charges = 150000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT EUR-200 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==3){
                            charges = 170000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT EUR-300 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else{
                            cout<<"\n\n\n INVALID INPUT, SHIFTING TO PREVIOUS MENU \n\n\n ";
                            flights();
                        }
                        cout<<"\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU \n\n\n ";
                        cin>>back;
                        if(back==1){
                            mainmenu();
                        }
                        else{
                            mainmenu();
                        }
                        break;
        }
        case 6:
        {
            cout<<"\n\n\n ------------ WELCOME TO AUSTRALIAN AIRLINES ------------ ";
                        cout<<"\n\n\n THE FLIGHTS FOR AUSTRALIA ARE : \n\n\n ";
                        cout<<"\n\n\n 1) AUS-100 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 3:00 AM \t 18 HRS \t PRICE - RS 110000  \n\n\n";
                        cout<<"\n\n\n 2) AUS-200 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 6:00 AM \t 19 HRS \t PRICE - RS 120000  \n\n\n";
                        cout<<"\n\n\n 3) AUS-300 \n\n\n ";
                        cout<<"\n\n\n    12-DEC-2022 \t 8:00 AM \t 21 HRS \t PRICE - RS 125000  \n\n\n";
                        cout<<"\n\n\n SELECT THE FLIGHT YOU WANT TO BOOK \n\n\n ";
                        cin>>choice1;
                        if(choice1==1){
                            charges = 110000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AUS-100 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==2){
                            charges = 120000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AUS-200 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else if(choice1==3){
                            charges = 125000;
                            cout<<"\n\n\n YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT AUS-300 \n\n\n ";
                            cout<<"\n\n\n YOU CAN GO BACK TO MENU AND COLLECT THE TICKET FROM MENU.\n\n\n ";
                        }
                        else{
                            cout<<"\n\n\n INVALID INPUT, SHIFTING TO PREVIOUS MENU \n\n\n ";
                            flights();
                        }
                        cout<<"\n\n\n PRESS ANY KEY TO GO BACK TO MAIN MENU \n\n\n ";
                        cin>>back;
                        if(back==1){
                            mainmenu();
                        }
                        else{
                            mainmenu();
                        }
                        break;
                
        }
        default:
        {
            cout<<"\n\n\n INVALID INPUT , SHIFTING TO MAIN MENU \n\n\n ";
            mainmenu();
            break;
        }
      }

        }
};

float registration::charges;
int registration::choice;
class ticket : public registration,details{
    public:
        void bil(){
            string destination = " ";
            ofstream out("record.txt");
            {
                out<<"\n\n\n ----------------- ALBERT AIRLINES ----------------- ";
                out<<"\n\n\n -----------------      TICKET     ----------------- ";
                cout<<endl<<endl<<endl;
                out<<" CUSTOMER ID : "<<details::cid<<endl;
                out<<" CUSTOMER NAME : "<<details::name<<endl;
                out<<" CUSTOMER GENDER : "<<details::gender<<endl;
                out<<" DESCRIPTION : "<<endl<<endl<<endl;
                if(registration::choice==1){
                    destination =" USA ";
                }
                else if(registration::choice==2){
                    destination = " UK ";
                }
                else if(registration::choice==3){
                    destination = " CANADA ";
                }
                else if(registration::choice==4){
                    destination = " SOUTH KOREA ";
                }
                else if(registration::choice==5){
                    destination = " EUROPE ";
                }
                else if(registration::choice==6){
                    destination = " AUSTRALIA ";
                }
                out<<"\n\n\n DESTINATION : "<<" \t "<<destination;
                out<<"\n\n\n FLIGHT CHARGES : "<<" \t "<<registration::charges;
            }
            out.close();
        }
        void displaybill(){
            ifstream inp("record.txt");
            {
                if(!inp){
                    cout<<"\n !!! ERROR !!! ";
                }
                while(!inp.eof()){
                    inp.getline(arr,400);
                    cout<<arr<<endl;
                }
            }
            inp.close();
        }
};



void mainmenu(){
    int lchoice;
    int schoice;
    int back;
    cout<<" \n\n\n \t ALBERT AIRLINES \n\n\n ";
    cout<<"\n\n\n \t -------------------- MAIN MENU --------------------- ";
    cout<<"\n\n\n\n \t PRESS 1 TO ADD CUSTOMER DETAILS \n\n\n\n";
    cout<<"\n\n\n\n \t PRESS 2 FOR FLIGHT REGISTRATION AND DETAILS \n\n\n\n";
    cout<<"\n\n\n\n \t PRESS 3 FOR TICKET AND CHARGES \n\n\n\n";
    cout<<"\n\n\n\n \t PRESS 4 FOR EXIT \n\n\n\n";
    cout<<"\n\n\n \t ENTER YOUR CHOICE \n\n\n";
    cin>>lchoice;
    details d;
    registration r;
    ticket t;
    switch(lchoice){
        case 1:
            {
                cout<<"\n\n\n ------------------ CUSTOMERS -----------------\n\n\n";
                d.information();
                cout<<"\n\n\n PRESS ANY KEY TO GO BACK \n\n\n";
                cin>>back;
                if(back==1){
                    mainmenu();
                }
                else{
                    mainmenu();
                }
                break;
            }
        case 2:
            {
                cout<<"\n\n\n--------------------- BOOK A FLIGHT --------------------- ";
                r.flights();
                break;
            }
        case 3:
            {
                cout<<"\n\n\n--------------------- GET YOUR TICKET --------------------- ";
                t.displaybill();
                cout<<"\n\n\n \t TICKET IS PRINTED \n\n\n ";
                cout<<"\n\n\n PRESS 1 TO DISPLAY YOUR TICKET \n\n\n ";
                cin>>back;
                if(back==1){
                    mainmenu();
                    cout<<"\n\n\n PRESS ANY KEY TO GO BACK \n\n\n";
                    if(back==1){
                        mainmenu();
                    }
                    else{
                        mainmenu();
                    }
                }
                else{
                    mainmenu();
                }
                break;
            }
        case 4:
            {
                cout<<"\n\n\n \t ------------- THANKS FOR CHOOSING MY SERVICE ------------- ";
                    break;
            }
            default:
                {
                    cout<<"\n\n\n \t PLEASE SELECT FROM THE ABOVE OPTIONS \n\n\n";
                    mainmenu();
                    break;
                }
    }
    
}
