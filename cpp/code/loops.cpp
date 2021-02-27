
#include <iostream>

int main(){

    int n1;
    int count;
    int amount;
    int total;
    int n2;

    count = 0;
    amount = 0;
    while (count < 10){
        std::cout << "Digite um num:(Tentativa: "<< count + 1 <<"/10)" << std::endl;
        std::cin >> n1;

        if (n1 > 5){
            amount++;
        }
        count++;
    }

    std::cout << "Total de valores acima de 5:"<< amount <<"" << std::endl;

    for (n2 = 2; n2 <= 200; n2 += 2)
        total += n2;

    std::cout << "Soma total: "<< total <<"" << std::endl;

    return 0;
}
