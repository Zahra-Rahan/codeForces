#include<iostream>
#include<string.h>
using namespace std;
 int main(){
    int i, n;
    string str, strlen[100];
    cout << "enter the number of the strings: ";
    cin >> n;
    for (i = 0 ; i < n; i++)
    cout<<"Enter the strings: ";
    cin>> str;
    cout << str.length() <<endl;
    
    int len = str.length();
    
        if(len> 10){
                int mid = len -2;
                cout << str[0] << mid << str[len - 1]<< endl;
        }
        else{
            cout <<str<<endl;
        }
        return 0;
 }