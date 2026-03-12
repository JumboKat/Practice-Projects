/*As far as we remember, you're already familiar with palindromes. Now the palindromes have returned, but this time as vectors, not just ints. The task, however, remains the same – you need to check if a declared vector contains a palindrome.

Look at the code in the editor. There is a vector – this time you can hard-code it instead of inputting its values every time the code is launched, but don't forget to recompile your source after any amendments.

A variable named n has also been assigned (a bit tricky) with a value indicating the number of elements in the vector. Feel free to add and/or remove some of the vector's elements – n will respond flexibly to your changes.

Complete the code with a smart for loop, checking whether or not there is a palindrome. You don't need any new vectors to achieve the goal. Be smart. Be creative.

Check if your code works equally well when the vector stores an even and an odd number of elements.*/

#include <iostream>

int main(void) {
    int vector[] = {1, 7, 3, 8, 3, 7, 1};
    bool isPalindrome = true;
    int n = sizeof(vector) / sizeof(vector[0]);
    int half = n / 2 + (n % 2);

    for (int i = 0; i < half-1; i++){
        if (vector[i]!=vector[n - 1 - i]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        std::cout << "It's a palindrome";
    else
        std::cout << "It isn't a palindrome";
    std::cout << std::endl;
    return 0;
}