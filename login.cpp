#include <iostream>
#include<fstream>
#include<string>
using namespace std;

void login();
void registration();
void forgot();


int main(){
int c;
cout<<"\n\n\n\t\t-----------------------------------------------------------\n";
cout<<"\n\n\n\t\t                  WELCOME TO LOGIN PAGE                    \n";
cout<<"\n\n\n\t\t-----------------------------------------------------------\n";
cout<<"\n\n\n\t\t PRESS 1 FOR LOGIN \n ";
cout<<"\n\n\n\t\t PRESS 2 FOR REGISTRATION \n ";
cout<<"\n\n\n\t\t PRESS 3 FOR FORGOT PASSWORD \n ";
cout<<"\n\n\n\t\t PRESS 4 FOR EXIT \n ";
cout<<"\n\n\n\t\t Enter your choice : ";
cin>>c;
switch(c){
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout<<"\n\n\n \t\t THANKS FOR YOUR OPERATION  \n\n\n OPERATION TERMINATED SUCCESSFULLY \n ";
        exit(0);
    default:
        system("cls");
        cout<<"\n\n\n \t\t Please enter from the above given numbers!!!!! \n";
        main();
        break;
}
   
    return 0;
}


void login(){
int count;
string userid,password,id,pass;
system("cls");
cout<<"\n\n\n \t\t ENTER THE USERNAME AND PASSWORD ";
cout<<"\n\n\n \t\t USERNAME : ";
cin>>userid;
cout<<"\n\n\n \t\t PASSWORD : ";
cin>>password;
ifstream input("records.txt");
while(input>>id>>pass){
if(id==userid && pass==password){
    count = 1;
    system("cls");
}
}
input.close();
if(count==1){
    cout<<userid<<"\n\n\n LOGIN IS SUCCESSFUL.\n THANKS FOR LOGIN.";
    main();
}
else{
    cout<<"\n\n\n ERROR IN LOGIN.\n PLEASE CHECK YOUR USERNAME OR PASSWORD \n";
    main();
}
}

void registration(){

string useridr,passwordr,idr,passr;
system("cls");
cout<<"\n\n\n \t\t ENTER THE USERNAME : ";
cin>>useridr;
cout<<"\n\n\n \t\t ENTER THE PASSWORD : ";
cin>>passwordr;
ofstream output("records.txt",ios::app);
cout<<endl;
output<<useridr<<"  "<<passwordr;
system("cls");
cout<<"\n\n\n \t\t  REGISTRATION IS SUCCESSFULL ";
main();

}


void forgot(){
int choice;
cout<<"\n\n \n \t\t !!! FORGOTTON PASSWORD !!! ";
cout<<"\n\n\n \t\t PRESS 1 TO SEARCH YOUR ID BY USERNAME "<<endl;
cout<<"\n\n\n \t\t PRESS 2 TO GO BACK "<<endl;
cout<<"\n\n\n \t\t ENTER YOUR CHOICE : ";
cin>>choice;
switch(choice){
    case 1:
    {
    int count=0;
        string userids,ids,passs;
        cout<<"\n\n\n \t\t ENTER YOUR OLD USERNAME : ";
        cin>>userids;
        ifstream i1("records.txt");
        while(i1>>ids>>passs){
            if(ids==userids){
                count = 1;
            }
        }
        i1.close();
        if(count==1){
            cout<<"\n\n\n \t\t YOUR ACCOUNT IS FOUND!!! ";
            cout<<"\n\n\n \t\t YOUR PASSWORD IS : "<<passs;
            main();
        }
        else{
            cout<<"\n\n\n \t\t ACCOUNT NOT FOUND !!! ";
            main();
        }
        break;
}
    case 2:
{
    main();
}
    default: 
    {
        cout<<"\n\n\n \t\t PLEASE TRY AGAIN "<<endl;
        forgot();
}
}
}
