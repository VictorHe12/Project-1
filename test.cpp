#include <iostream>
using namespace std;

int main()
{
    int input = 0;
    std::cout << "Please input \n";
    cin>>input;
    for(int i = 1;i<= input;i++) {
        for(int j = 0; j < input - i; j++){
            std::cout << " ";
        }
        for(int k = 0; k < i; k++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

