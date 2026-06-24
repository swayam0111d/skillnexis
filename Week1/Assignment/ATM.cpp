#include<iostream>

using namespace std;

int main(){
    int Balance=0,deposit,withdraw,choice;
    while(true){
        cout<< "Enter 1 for Balance Check" <<endl;
        cout<< "Enter 2 for Deposit Money"<<endl;
        cout<< "Enter 3 for withdraw Money"<<endl;
        cout<< "Enter 4 for Exit"<<endl<<endl<<endl;

        cout<< "Enter Your Choice"<<endl;
        cin>> choice;

        if(choice==1){
            cout<<"Your Balance is "<<Balance<<endl;
        }
        else if(choice==2){
            cout<<"Enter Amount to Deposit : ";
            cin>> deposit;
            Balance=Balance+deposit;
            cout<<deposit<<" RS has been added to account Sucessfully!!!"<<endl;
        }
        else if(choice == 3){
            cout<<"Enter Amount to Withdraw : ";
            cin>> withdraw;
            if (withdraw > Balance){
                cout<<"Insufficient Balance"<<endl;
            }
            else{
                cout<< withdraw<< " Rs Sucessesfully Withdrawn !!!"<<endl;
                Balance= Balance-withdraw;
            }

        }
        else if(choice == 4){
            cout<< "Exiting Successfull"<<endl;
            break;
        }
        else{
            cout<<"Invaild Choice, Please Enter Valid Chocie"<<endl;
        }
    }
    cout<<"Thank you for Choosing Our ATM";
}