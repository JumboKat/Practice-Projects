/*Take a look at the code in the editor - it declares two equally sized vectors. The former is initialized, the latter isn't.

We want the second vector to store the same values as the first one, but in a different order: imagine that all the values have been moved one cell to the right, while the last element has gone to the first position. We can say that the vector has been rotated to the right.

Warning: you must use the for loop for it. Don't use single assignments - they may work but they'll reflect badly on you and on your programming skills.

Once you get the expected results, play around a bit with your code: change the size of your vectors and check if your program executes properly.*/

#include <iostream>

int main(void) {
    int vector[7] = {4, 7, 2, 8, 1, 3, 0};
    int vector2[7];

    for (int i = 0; i < 7; i++){
        if(i)
            vector2[i] = vector[i-1];
        else
            vector2[i] = vector[sizeof(vector)/sizeof(vector[0])];
    }

    for(int i = 0; i < 7; i++){
        std::cout << vector2[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}