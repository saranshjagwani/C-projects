#include<iostream>
using namespace std;

int main()
{
int i,j; 
int n,r;
n=r;
cin >> n;
    for(i=n; i>=1; i--){
    for(j=1; j<=i; j++) {
    cout << j; 
   
    }
    int m;
    for(m=0; m<=(n-i)*2-1; m++){
    cout<<"*";
    
    }
    for (int j = i; j >= 1; j--) {
    cout << j;
}
    
     cout<<endl;
}

   
    
    
    return 0;
}
    