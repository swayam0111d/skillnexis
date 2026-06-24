#include<iostream>
using namespace std;

int main(){
    int a,b;
    char c;

    cout<<"Enter First Number : "<<endl;
    cin>>a;
    cout<<"Enter Second Number : "<<endl;
    cin>>b;

    cout<<"Enter Operations '+','-','*','/'"<<endl;
    cin>>c;

    if(c=='+'){
        cout<< "Sum of "<<a<< " and " << b << " is "<< a+b;
    }
    else if(c=='-'){
        cout<< "Differece of "<<a<< " and " << b << " is "<< a-b;
    }
    else if(c=='*'){
        cout<< "Product of "<<a<< " and " << b << " is "<< a*b;
    }
    else if(c=='/'){
        cout<< "Division of "<<a<< " and " << b << " is "<< a/b;
    }
    else{
        cout<< "Invaild Input !!!";
    }
}