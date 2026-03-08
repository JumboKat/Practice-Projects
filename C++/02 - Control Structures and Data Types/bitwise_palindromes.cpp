/*A palindrome is a sequence of symbols (letters, digits, etc.) which reads the same backward and forward. For example, the word "kayak" is a palindrome while the word "canoe" is not.

Bits placed in an integer variable may be palindromes too (to make this story shorter, we'll use the unsigned short int type in our problem) e.g. the value 384 is a palindrome as its binary representation written in 16 bits looks as follows: 0000000110000000

Your task it to write a program that checks if any unsigned short int value is a bitwise palindrome.

Hint: the simplest (but probably not the smartest) solution is just to reverse the bit order in a value and compare it to the original one – an (in)equality of both values is a clear indication of the answer.

Complete the following code to achieve your goal and do tests using the data we've provided.*/

#include <iostream>

int main(void) {
    unsigned short val;
    bool isPalindrome = false;
    
    std::cout << "Enter an integer: ";
    std::cin >> val;
    
    unsigned short newVal = 0;

    for (int i = 0; i < 16; i++){
        unsigned short bit = val & (1 << i);
        if (bit){
            newVal |= (1 << (15-i));
        }
    }
    isPalindrome = newVal == val;
    if (isPalindrome){
        std::cout << val << " is a bitwise palindrome" << std::endl;
    } else {
        std::cout << val << " is not a bitwise palindrome" << std::endl;
    }
    return 0;
}