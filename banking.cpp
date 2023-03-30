#include<iostream>
#include<iomanip>
using namespace std;

void showBalance(double balance);
double deposite();
double withdrawl(double balance);


int main()
{
    double balance = 0;
    int choice = 0;

    do{
        cout << "*************************************************\n";
        cout << "           Welcome To Our Banking System         \n";
        cout << "*************************************************\n";

        cout << "\n";

        cout << "*************************************************\n";
        cout << "          Kindly! Enter Your Choices             \n";
        cout << "*************************************************\n";

        cout << "\n";

        cout << "1. Show Balance \n";
        cout << "2. Deposite Money\n";
        cout << "3. Withdrawl Money\n";
        cout << "4. Exit\n";

        cin >> choice;

        /*to counter any error when user input a wrong character or keywords 
        use the following fuunction*/
        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposite();
            showBalance(balance);
            break;
        case 3:
            balance -= withdrawl(balance);
            break;
        case 4:
            cout << "\n";
            cout << "Thanks For Visiting!\n";
            cout << "\n";
            break;
        default:
            cout << "Invalid Choice!\n";
            break;
        }

    }while(choice != 4);

   
    return 0;
}

void showBalance(double balance){

    cout << "Your Balance Is $"<<setprecision(2)<<fixed<<balance<<endl;
    cout<<"\n";

}

double deposite()
{
    double amount = 0;
    cout<<"Enter Amount To Deposit\n";
    cin>>amount;

    if(amount>0){
        return amount;
    }
    else{
        cout<<"Thats's Not a valid Amount\n";
    }

}
double withdrawl(double balance)
{
    double amount = 0;
    cout << "Enter Amount To  Be Withdrawn\n";
    cin>>amount;

    if(amount>balance){
        cout << "Insufficient Fund\n";
        return 0;
        }
    else if(amount<0){
        cout << "Thats's Not a valid Amount\n";
        return 0;
    }
    else{
        return amount;
    }

}