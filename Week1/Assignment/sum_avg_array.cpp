#include<iostream>
using namespace std;

int main(){
    int n,sum = 0,avg;
    int arr[100];

    cout<<"Enter the Size of Array : ";
    cin>>n;

    for(int i = 0; i<n ;i++){
        cout<<"Enter at " <<i << " Postion of Array : ";
        cin>> arr[i];
    }
    for(int i = 0; i<n ;i++){
        sum = sum+arr[i];
    }
    cout<< "Sum of Array is : " <<sum << endl;

    avg = sum/n;

    cout<<"Average of Array is : " <<avg <<endl;

}