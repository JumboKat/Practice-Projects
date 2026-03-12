/*Once upon a time there was a country called Plusplusland. The monetary system they used there was simple: the currency name was the "plussar" and their central bank issued five different banknotes of values 50, 20, 10, 5 and 1 plussar.

Your task is to write a driver for the ATMs of Plusplusland. The driver should find the minimal number of banknotes needed to deliver any amount of money to the client.

The Treasury Minister has asked you personally to do this. He expects your code to print the values of all the needed banknotes in a row – this is the format accepted by all ATMs in Plusplusland.*/

#include <iostream>

int main(void) {
    int amount = 0;
    int banknotes[] = {50, 20, 10, 5, 1};

    std::cout << "Enter an amount of money: ";
    std::cin >> amount;

    for (int i = 0; i < 5; i++){
        int count = amount / banknotes[i];
        amount %= banknotes[i];

        if (count){
            for (int j = 0; j < count; j++) {
                std::cout << banknotes[i] << ' ';
            }
        }
    }
    std::cout << std::endl;
    return 0;
}