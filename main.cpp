#include<iostream>

int main(){

    int number = 9;

    int myNumbers[number] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    
    for(int i = 0; i < number; i++){
        std::cout<<myNumbers[i]<<std::endl;
    }

    return 0;
}