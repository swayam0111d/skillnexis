#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;
};

int main()
{
    int n;

    cout<<"Enter Number of Employees: ";
    cin>>n;

    vector<Employee> emp(n);

    for(int i=0;i<n;i++)
    {
        cout<<"\nEmployee "<<i+1<<endl;

        cout<<"Enter ID: ";
        cin>>emp[i].id;

        cout<<"Enter Name: ";
        cin>>emp[i].name;

        cout<<"Enter Salary: ";
        cin>>emp[i].salary;
    }

    ofstream fout("employee.txt");

    for(auto e : emp)
    {
        fout<<e.id<<" "
            <<e.name<<" "
            <<e.salary<<endl;
    }

    fout.close();

    cout<<"\nEmployee Records Saved Successfully!\n";

    ifstream fin("employee.txt");

    Employee temp;

    cout<<"\nEmployee Records\n";
    cout<<"--------------------------\n";

    while(fin>>temp.id>>temp.name>>temp.salary)
    {
        cout<<"ID : "<<temp.id<<endl;
        cout<<"Name : "<<temp.name<<endl;
        cout<<"Salary : "<<temp.salary<<endl;
        cout<<"--------------------------"<<endl;
    }

    fin.close();

    return 0;
}