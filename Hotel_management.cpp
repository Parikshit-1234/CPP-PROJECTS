#include<iostream>
using namespace std;

int main(){
int choice,proom=1700,ppasta=200,pburger=150,pnoodles=100,ppizza=500;
int quantity;
int qroom=0,qpasta=0,qburger=0,qpizza=0,qnoodles=0;
int sroom=0,spasta=0,sburger=0,spizza=0,snoodles=0;
int troom=0,tpasta=0,tburger=0,tpizza=0,tnoodles=0;
cout<<"\n\tThe quantities of items are : ";
cout<<"\n Rooms available are : ";
cin>>qroom;
cout<<"\n Quantity of pasta available are : ";
cin>>qpasta;
cout<<"\n Quantity of burger available are : ";
cin>>qburger;
cout<<"\n Quantity of pizza available are : ";
cin>>qpizza ;
cout<<"\n Quantity of noodles available are : ";
cin>>qnoodles;
m:
cout<<"\n\n\n\t Select form the options below : ";
cout<<"\n\n 1)Rooms ";
cout<<"\n\n 2)Pasta ";
cout<<"\n\n 3)Burger ";
cout<<"\n\n 4)Pizza ";
cout<<"\n\n 5)Noodles ";
cout<<"\n\n 6)Information of sales and collection ";
cout<<"\n\n 7)Exit ";
cout<<"\n\n\t Enter your choice : ";
cin>>choice;
switch (choice)
{
case 1:
    cout<<"\n\n\t Enter the number of rooms you want : ";
    cin>>quantity;
    if(qroom-sroom>=quantity){
        sroom = sroom + quantity;
        troom=troom + (quantity*proom);
        cout<<"\n\n "<<quantity<<" rooms is alloted to you. ";
    }
    else{
        cout<<"\n\n\t"<<qroom-sroom<<" room left in the hotel. ";
    }
    break;
    case 2:
        cout<<"\n\n\t Enter the quantity of pasta you want : ";
        cin>>quantity;
        if(qpasta-spasta>=quantity){
        spasta = spasta + quantity;
        tpasta=tpasta + (quantity*ppasta);
        cout<<"\n\n "<<quantity<<" pasta ordered. ";
    }
    else{
        cout<<"\n\n\t"<<qpasta-spasta<<" pasta left. ";
    }
    break;
    case 3:
        cout<<"\n\n\t Enter the quantity of burger you want : ";
        cin>>quantity;
        if(qburger-sburger>=quantity){
        sburger = sburger + quantity;
        tburger = tburger + (quantity*pburger);
        cout<<"\n\n "<<quantity<<" burger ordered. ";
    }
    else{
        cout<<"\n\n\t"<<qburger-sburger<<" burger left. ";
    }
    break;
    case 4:
         cout<<"\n\n\t Enter the quantity of pizza you want : ";
        cin>>quantity;
        if(qpizza-spizza>=quantity){
        spizza = spizza + quantity;
        tpizza=tpizza + (quantity*ppizza);
        cout<<"\n\n "<<quantity<<" pizza ordered. ";
    }
    else{
        cout<<"\n\n\t"<<qpizza-spizza<<" pizza left. ";
    }
    break;
    case 5:
         cout<<"\n\n\t Enter the quantity of noodles you want : ";
        cin>>quantity;
        if(qnoodles-snoodles>=quantity){
        snoodles = snoodles + quantity;
        tnoodles=tnoodles + (quantity*pnoodles);
        cout<<"\n\n "<<quantity<<" noodles ordered. ";
    }
    else{
        cout<<"\n\n\t"<<qnoodles-snoodles<<" noodles left. ";
    }
    break;
    case 6:
        cout<<"\n\n\t Details of sales are as follows : ";
        cout<<"\n\n\t Rooms we had is : "<<qroom;
        cout<<"\n\n\t Rooms given for rent is : "<<sroom;
        cout<<"\n\n\t Rooms remaining is : "<<qroom-sroom;
        cout<<"\n\n\t Total Room collections is : "<<troom;

        cout<<"\n\n\t Pasta we had is : "<<qpasta;
        cout<<"\n\n\t Pasta sold is : "<<spasta;
        cout<<"\n\n\t Remaining pasta is : "<<qpasta-spasta;
        cout<<"\n\n\t Total Pasta collections is : "<<tpasta;

         cout<<"\n\n\t Burger we had is : "<<qburger;
        cout<<"\n\n\t Burger sold is : "<<sburger;
        cout<<"\n\n\t Remaining Burger is : "<<qburger-sburger;
        cout<<"\n\n\t Total Burger collections is : "<<tburger;
         
          cout<<"\n\n\t Pizza we had is : "<<qpizza;
        cout<<"\n\n\t Pizza sold is : "<<spizza;
        cout<<"\n\n\t Remaining Pizza is : "<<qpizza-spizza;
        cout<<"\n\n\t Total Pizza collections is : "<<tpizza;

         cout<<"\n\n\t Noodles we had is : "<<qnoodles;
        cout<<"\n\n\t Noodles sold is : "<<snoodles;
        cout<<"\n\n\t Remaining Noodles is : "<<qnoodles-snoodles;
        cout<<"\n\n\t Total Noodles collections is : "<<tnoodles;
        cout<<"\n\n\t Total collections of the day is : "<<troom+tpasta+tburger+tpizza+tnoodles;
        break;
        case 7:
            exit(0);
    default: 
        cout<<"\n\n\t Please select the numbers given above!!!!! ";
}
goto m;

return 0;
}