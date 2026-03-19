/*Look at the code in the editor. It doesn't look scary, right?

Your task doesn't look scary either – you just have to find the smallest element in the vector. But there's one condition – you mustn't use indexing. In other words, using brackets in your code is strictly prohibited.

Hint: You may use as many pointers as you wish. */

#include <iostream>

int main(){
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    int smallest = 100000;
    int *ptr = vector;

    for (int i = 0; i < n; i++){
        if (*ptr < smallest)
            smallest = *ptr;
        ptr++;
    }

    std::cout << smallest << std::endl;
    return 0;
}