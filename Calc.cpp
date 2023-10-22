#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "First num(a): ";
    cin >> a;
    cout << "Second num(b): ";
    cin >> b;
    if (a > b){
        cout << "a > b" << endl;
        }
    else if (a < b){
        cout << "a < b" << endl;
        }
    else{
        cout << "a = b" << endl;
        }
    cout << "Sum: " << a + b;


    
    return 0;
}