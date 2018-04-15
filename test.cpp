#include <iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "Please input \n";
    cin>>input;
    for(int i = 1;i<= input;i++) {  //output the space
        for(int j = 0; j < input - i; j++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){ //output the * signal
            cout << "*";
 
        cout << "\n";
    }
}

