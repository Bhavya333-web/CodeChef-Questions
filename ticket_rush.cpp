#include <bits/stdc++.h>
using namespace std;

int main() {
	
int T;
cin>>T;

for(int i = 0 ; i<T;i++){
    int X,Y;
    cin>>X>>Y;
    if(Y>=X){
        cout<<"0"<<endl;
    }
    else if(Y<X){
        cout<<X-Y<<endl;
    }
}
}
