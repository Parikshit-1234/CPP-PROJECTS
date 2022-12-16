#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;


class books{
    public:
        int id;
        char name[100];
        char author[100];
        char student_name[100];
        int price;
        int pages;
};

int main(){

books b[20];
int input = 0;
int count = 0;
while(input!=3){
cout<<"ENTER 1 TO FILL THE DETAILS OF THE BOOK "<<endl;
cout<<"ENTER 2 TO DISPLAY THE DETAILS OF THE BOOK "<<endl;
cout<<"ENTER 3 TO EXIT "<<endl;
cin>>input;
switch(input){
    case 1:
    {   
        x:
        cout<<"ENTER BOOK ID : "<<endl;
        cin>>b[count].id;
        cout<<"ENTER NAME OF THE BOOK : "<<endl;
        cin>>b[count].name;
        cout<<"ENTER THE AUTHOR OF THE BOOK : "<<endl;
        cin>>b[count].author;
        cout<<"ENTER THE NAME OF THE STUDENT ISSUED THE BOOK : "<<endl;
        cin>>b[count].student_name;
        cout<<"ENTER THE PRICE OF THE BOOK : "<<endl;
        cin>>b[count].price;
        cout<<"ENTER THE NUMBER OF PAGES IN THE BOOK : "<<endl;
        cin>>b[count].pages;
        count++;
        break;
    }
    case 2:
        {
            for(int i=0;i<count;i++){
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<" BOOK ID : "<<b[i].id<<endl;
                cout<<" BOOK NAME : "<<b[i].name<<endl;
                cout<<" BOOK AUTHOR : "<<b[i].author<<endl;
                cout<<" BOOK ISSUED BY : "<<b[i].student_name<<endl;
                cout<<" BOOK PRICE IS : "<<b[i].price<<endl;
                cout<<" BOOK PAGES  IS : "<<b[i].pages<<endl;
              }
                 break;
            }
     case 3:
        {
            exit(0);
            break;
        }  
    default:
        {
            cout<<" INVALID INPUT ENTERED !!! "<<endl;
            goto x;
        }     
}
}
    return 0;
} 



