/*Alice Happiness Condition
Alice has scored 
X
X marks in her test and Bob has scored 
Y
Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Print "Yes" if she is happy.*/
#include <iostream>
using namespace std;
int main(){
int X,Y;
cin>>X>>Y;

if(X >= (2*Y)){ 
    cout << "Yes\n"; 
    }


else{
    cout<<"No";
}
}