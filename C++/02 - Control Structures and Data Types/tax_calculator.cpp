/*Wherever you are and whatever you pay for, you usually spend your money on two things: the first is for a good or service you are buying, and the second is taxes. This means that the amount of money you are transferring (named "gross price") to the seller is a sum of the actual price (named "net price") and the tax. The tax is calculated as a percentage of the net price and its rate depends on a lot of unpredictable factors (e.g. where you live, what you buy, etc., etc., etc.).

Your task is to write a simple "tax calculator" – it should accept two values: a gross price and a tax rate expressed as a percentage (i.e. a value greater than 0 and, let's be optimistic, less than 100).

Look at the code below – it only reads two input values and outputs the results, so you need to complete it with a few smart calculations.

It would be good to verify if the values entered are reasonable (e.g. gross price is greater than zero and tax rate falls into the previously mentioned range).*/

#include <iostream>

int main(void){
    int gross_price; float net_price;
    float tax;
    std::cout << "Enter a price, then its tax percentage. ";
    if (std::cin >> gross_price >> tax){
        if (gross_price < 0) {std::cout << "Price must be greater than zero.";}
        else if (tax > 100 && tax < 0) {std::cout << "Tax must be between 0 and 100";}
        else{
            net_price = gross_price / ((100 + tax)/100);
            tax = gross_price - net_price;
            std::cout << "Net price: " << net_price << "\n" << "Tax value: " << tax;
        }
    }
}