#include <iostream>
using namespace std;

int main() {

    int a,b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    try
    {
        if(b==0)
            throw "Division by Zero is not allowed.";

        cout<<"Result = "<<a/b<<endl;
    }

    catch(const char *msg)
    {
        cout<<"Exception: "<<msg<<endl;
    }

    return 0;
}