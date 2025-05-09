

#include<iostream>
using namespace std;

int factorialn(int n){
    int factorial=1;
    for( int i=1; i<=n; i++){
        factorial *=i;
        
    }
    return factorial;
}
int main (){
    cout<<factorialn(5)<<endl;
    cout<<factorialn(10)<<endl;

}