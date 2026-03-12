/*A matrix (a two-dimensional array) is symmetric if:

    it's a square matrix (its sides are equal);
    its elements are placed symmetrically about the main diagonal (the diagonal that goes from the upper-left to the bottom-right vertex).

To be clear – this is a symmetric matrix:
1 2 3

2 1 2

3 2 1

and this is not:
1 2 3

2 1 2

4 2 1

The code in the editor declares a 4×4 matrix initially filled with some data. Your task is to complete the code and to answer the fundamental question: is this matrix symmetric or not?

When you complete your code, play with the matrix a bit: change its dimensions, move some of the elements – be sure that your code works well in any situation.
*/

#include <iostream>

int main(void) {
    double matrix[][4] = { 
        {1, 2, 3, 4},
        {2, 2, 3, 1},
        {3, 3, 3, 2},
        {4, 1, 2, 4}
    };
    int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    bool isSymmetric = true;
    int half = side / 2 + (side % 2);

    for (int i = 0; i < half; i++){
        for (int j = 0; j < side; j++){
            if (matrix[i][j]!=matrix[side-i][side-j]){
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {break;}
    }

    if (isSymmetric)
        std::cout << "The matrix is symmetric" << std::endl;
    else
        std::cout << "The matrix is not symmetric" << std::endl;
    return 0;
}