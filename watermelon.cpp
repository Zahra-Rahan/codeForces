#include<iostream>
using namespace std;

int main (){
    int w, i, j;
    int yep=0;
    // cout<<"enter the kilos: "<<endl;
    cin >> w;
  //true or false check if even or not
    for(i=2; i<=50; i++){
    int even = 2*i;
    if(w == even){
         yep = 1;
         break;
    }
    }
  //then print out the answer
    if(yep){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
