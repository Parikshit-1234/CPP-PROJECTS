#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

class shop{
    int product_code;
    float product_price;
    string name;
    float discount;
        public:
            void admin();
            void customer();  
            void menu();
            void edit();
            void add();
            void remove_data();
            void receipt();
            void list();
};

void shop:: admin(){
                x:
                int option;
                cout<<"\t\t\t\t\t\t|________________________________________|\n";
                cout<<"\t\t\t\t\t\t|                                        |\n";
                cout<<"\t\t\t\t\t\t|               ADMIN MENU               |\n";
                cout<<"\t\t\t\t\t\t|________________________________________|\n";
                cout<<"\n\n\n _______________1)ADD THE PRODUCT_______________\n";
                cout<<"\n\n\n _______________2)EDIT THE PRODUCT_______________\n";          
                cout<<"\n\n\n _______________3)DELETE THE PRODUCT_______________\n";
                cout<<"\n\n\n _______________4)BACK TO MAIN MENU_______________\n\n\n\n";
                cout<<"\t\t\t              SELECT A OPTION 1/2/3/4             \n";
                cin>>option;
                switch(option){
                    case 1:
                        add();
                        break;
                    case 2:
                        edit();
                        break;
                    case 3:
                        remove_data();
                        break;
                    case 4:
                        menu();
                        break;
                    default:
                        cout<<"       PLEASE SELECT 1/2/3/4      \n\n\n";    
                }
                goto x;
                }
void shop:: customer(){
                    x:
                    int option;
                    cout<<"_____________CUSTOMER___________\n";
                    cout<<"\t\t\t                          \n";
                    cout<<"\t\t\t   1) BUY ANY PRODUCT      \n\n\n";
                    cout<<"\t\t\t   2) GO BACK TO MENU      \n\n\n";
                    cout<<"\t\t\t                          \n\n";
                    cout<<"\t\t\t   ENTER OPTION 1/2       \n\n\n";
                    cin>>option;
                    switch(option){
                        case 1:
                            receipt();
                            break;
                        case 2:
                            menu();
                            break;
                        default:
                            cout<<"PLEASE SELECT 1/2 \n";
                    }
                  goto x;
            }

void shop:: menu(){
                x:
                string mail;
                string password;
                int option;


                cout<<"\t\t\t\t\t\t__________________________________________\n";
                cout<<"\t\t\t\t\t\t|                                         |\n";
                cout<<"\t\t\t\t\t\t|                                         |\n";
                cout<<"\t\t\t\t\t\t|               MAIN MENU                 |\n";
                cout<<"\t\t\t\t\t\t|                                         |\n";
                cout<<"\t\t\t\t\t\t|_________________________________________|\n";
                cout<<"\t\t\t\t\t\t|                                         |\n";
                cout<<"\t\t\t\t\t\t|                                         |\n"; 
                cout<<"\t\t\t\t\t\t|SELECT THE OPTION : \n\n";
                                      cout<<" 1) ADMIN \n\n\n";
                                      cout<<" 2) CUSTOMER \n\n\n";  
                                      cout<<"    PRESS 3 TO EXIT  \n\n\n";

                cout<<"\t\t\t\t\t\t                                           \n"; cout<<"\t\t\t\t\t\t                                           \n"; cout<<"\t\t\t\t\t\t                                           \n";
                cin>>option;
               switch(option){
                    case 1:
                        cout<<"\t\t\t LOGIN YOUR ACCOUNT \n";
                        cout<<"\t\t\t ENTER YOUR EMAIL : \n";
                        cin>>mail;
                        cout<<"\t\t\t ENTER THE PASSWORD : \n";
                        cin>>password;
                        if (mail=="starkalbert@gmail.com" && password=="albert@1234")
                        {
                            admin();
                        }
                        else{
                            cout<<"/n/n      INVALID CREDENTIALS      \n\n";
                        }
                        break;
                        case 2:
                          {
                            customer();
                          }
                            case 3:
                            { 
                            exit(0);
                            }
                            default:
                                {
                                    cout<<"\n\n\n      PLEASE SELECT 1/2/3      \n\n\n";
                                }
                } 
                goto x;
            }
void shop:: edit(){
                    fstream data,data1;
                    int product_key;
                    int token=0;
                    int c;
                    float p;
                    float d;
                    string n;

                    cout<<"\n\n\t\t  EDIT THE RECORD \n";
                    cout<<"\n\n\t\t  PRODUCT CODE     \n";
                    cin>>product_key;

                    data.open("database.txt",ios::in);
                    if(!data){
                        cout<<"\n\n  FILE DO NOT EXIST \n";
                    }
                    else{
                        data.open("database1.txt",ios::app|ios::out);
                        data>>product_code>>name>>product_price>>discount;
                        while(!data.eof()){
                        if(product_key==product_code){
                            cout<<"\n\n\t\t  PRODUCT NEW CODE : \n";
                            cin>>c;
                            cout<<"\n\n\t\t  PRODUCT NAME :     \n";
                            cin>>n;
                            cout<<"\n\n\t\t  PRODUCT PRICE :    \n";
                            cin>>p;
                            cout<<"\n\n\t\t  DISCOUNT :         \n";
                            cin>>d;
                            data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<" \n";
                            cout<<"\n\n\t\t RECORD IS EDITED     \n";
                            token++;
                        }
                        else{
                            data1<<" "<<product_code<<" "<<name<<" "<<product_price<<" "<<discount<<" \n";
                        }
                        data>>product_code>>name>>product_price>>discount;
                    }
                    data.close();
                    data1.close();
                    remove("database.txt");
                    rename("database1.txt","database.txt");
                    if(token==0){
                        cout<<"\n\n\t RECORD NOT FOUND \n"; 
                    }
            }  
            }          
 void shop:: add(){
                x:
                fstream data;
                int c;
                int token=0;
                float p;
                float d;
                string n;
                cout<<"\n\n\t\t ADD ANY PRODUCT ";
                cout<<"\n\n\t\t ENTER PRODUCT CODE : ";
                cin>>product_code;
                cout<<"\n\n\t\t ENTER NAME OF THE PRODUCT : ";
                cin>>name;
                cout<<"\n\n\t\t ENTER PRICE OF THE PRODUCT : ";
                cin>>product_price;
                cout<<"\n\n\t\t DISOCUNT ON THE PRODUCT IS : ";
                cin>>discount;

                data.open("database.txt",ios::in);
                if(!data){
                    data.open("database.txt",ios::app|ios::out);
                    data<<" "<<product_code<<" "<<name<<" "<<product_price<<" "<<discount<<" ";
                    data.close();
                }
                else{
                    data>>c>>n>>p>>d;
                    while(!data.eof()){
                        if(c==product_code){
                            token++;
                        }
                        data>>c>>n>>p>>d;
                    }
                    data.close();
            
                }
                if(token==1){
                    goto x;
                }
                else{
                    data.open("database.txt",ios::app|ios::out);
                    data<<" "<<product_code<<" "<<name<<" "<<product_price<<" "<<discount<<" ";
                    data.close();
                }
                cout<<"\n\n\t\t......RECORD IS ADDED......\n\n";
            }           
 void shop:: remove_data(){
                    fstream data,data1;
                    int product_key;
                    int token=0;
                    cout<<"\n\n\t\t DELETE PRODUCT ";
                    cout<<"\n\n\t\t   PRODUCT CODE ";
                    cin>>product_key;
                    data.open("database.txt",ios::in);
                    if(!data){
                        cout<<"n\n\t FILE DOES NOT EXIST";
                    }
                    else{
                        data1.open("database1.txt",ios::app|ios::out);
                        data>>product_code>>name>>product_price>>discount;
                        while(!data.eof()){
                            if(product_code==product_key){
                                cout<<"\n\n\t PRODUCT DELETED SUCCESSFULLY \n";
                                token++;
                            }
                            else{
                                data1<<" "<<product_code<<" "<<name<<" "<<product_price<<" "<<discount<<"\n";
                            }
                            data>>product_code>>name>>product_price>>discount;
                        }
                     data.close();
                     data1.close();
                     remove("database.txt");
                     rename("database1.txt","database.txt");
                     if(token==0){
                        cout<<"RECORD NOT FOUND. \n";
                     }
                    }
             }   
 void shop::list(){
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\n\n ____________________________________________\n";
    cout<<"\n\t PRODUCT NUMBER \t\t NAME \t\t PRICE \n";
     cout<<"\n\n ____________________________________________\n";
     data>>product_code>>name>>product_price>>discount;
     while(!data.eof()){
     cout<<product_code<<"\t\t"<<name<<"\t\t"<<product_price<<"\n";
     data>>product_code>>name>>product_price>>discount;
     }
     data.close();
 }                    

 void shop::receipt(){
    fstream data;
    int c[100];
    int q[100];
    string choice;
    int cr=0;
    float amount=0;
    float discount=0;
    float total=0;
    cout<<"\n\n\n\t\t\t RECIEPT \n";
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\n EMPTY DATABASE \n";
    }
    else{
        data.close();
        list();
        cout<<"\n|__________________________________________|\n";
        cout<<"\n|                                          |\n";
        cout<<"\n|                                          |\n";
        cout<<"\n|            PLACE THE ORDER               |\n";
        cout<<"\n|                                          |\n";
        cout<<"\n|__________________________________________|\n";
        do{
         x:
            cout<<"\n ENTER PRODUCT CODE \n";
            cin>>c[cr];
            cout<<"\n ENTER QUANTITY OF THE PRODUCT \n";
            cin>>q[cr];
            for(int i=0;i<cr;i++){
                if (c[cr]==c[i]){
                    cout<<"\n DUPLICATE PRODUCT CODE.TRY AGAIN \n";
                    goto x;
                }
            }
            cr++;
            cout<<"DO YOU WISH TO BUY ANY OTHER PRODUCT ? IF YES PRESS Y ELSE PRESS N \n";
            cin>>choice;
        }while(choice=="y");
        cout<<"\n\n_____________________RECIEPT GENERATED___________________\n";
        cout<<"\n PRODUCT NUMBER \n PRODUCT NAME \n PRODUCT QUANTITY \n PRODUCT PRICE \n PRODUCT AMOUNT \n PRODUCT AMOUNT WITH DISCOUNT\n";
        for(int i=0;i<cr;i++){
            data.open("database.txt",ios::in);
            data>>product_code>>name>>product_price>>discount;
            while(!data.eof()){
                if(product_code==c[i]){
                    amount = product_price * q[i];
                    discount=amount-(amount*discount/100);
                    total=total+discount;
                    cout<<"\n"<<product_code<<"\t\t"<<name<<"\t\t"<<q[i]<<"\t\t"<<product_price<<"\t\t"<<amount<<"\t\t"<<discount;
                }
                data.close();
            }
            cout<<"______________________________________________________";
            cout<<"\n TOTAL AMOUNT : "<<total;
        }
    }
 }

 int main(){
    shop s;
    s.menu();



    return 0;
 }