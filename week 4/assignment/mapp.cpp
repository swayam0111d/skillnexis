#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,string> student;

    student[101]="Rahul";
    student[102]="Swayam";
    student[103]="Priya";
    student[104]="Amit";

    cout<<"Roll\tName\n";

    for(auto x : student)
    {
        cout<<x.first<<"\t"<<x.second<<endl;
    }

    return 0;
}