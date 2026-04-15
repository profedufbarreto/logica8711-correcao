#include<iostream>

int main(){

    int opcao;

    std::cout<<"Digite um valor para opção: "<<std::endl;
    std::cin>>opcao;

    switch(opcao){
        case 1:
            std::cout<<"Domingo!"<<std::endl;
            break;
        case 2:
            std::cout<<"Segunda-feira!"<<std::endl;
            break;
        default:
            std::cout<<"Número inválido!"<<std::endl;

    }

    return 0;
}