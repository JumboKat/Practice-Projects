/*Nobody wants to be "a mean man", but paradoxically, "means" play a very important role in the modern world. We can say that many people love "means": politicians love "means" (when they want to prove or disprove something), financiers love "means" too (when they want to show that their profits are not as big as you may suspect) and, most of all, statisticians love "means" more than anything else.

Although an old joke claims that one statistician drowned in a lake whose mean depth didn't exceed 1 ft (ca. 30 cm), we think that it's worth a try if you can evaluate some of the most commonly used variants of means.

Let's take four of them into consideration:
 - arithmetic mean
 - harmonic mean
 - geometric mean
 - root mean square

Look at the code below and complete it with a part that evaluates every mean mentioned. Compare your results with the ones we've provided.

Note the additional #include directive – it's intended to include headers of the mathematical functions needed to finish your work. We believe that two of them are essential:

    double pow(double x, double y) to evaluate x to the power of y;
    double sqrt(double x) to evaluate the square root of x.
*/

#include <iostream>
#include <cmath>

int main(void) {
    double vector[] = {1., 2., 3., 4., 5.};
    int n = sizeof(vector) / sizeof(vector[0]);
    double sum = 0, inv_sum = 0, product = 1., sq_sum = 0;
    double ArithmeticMean, HarmonicMean, GeometricMean, RootMeanSquare;

    for (int i = 0; i < n; i++){
        sum += vector[i];
        inv_sum += 1/vector[i];
        product *= vector[i];
        sq_sum += pow(vector[i], 2.0);
    }
    ArithmeticMean = sum / n;
    HarmonicMean = n / inv_sum;
    GeometricMean = pow(product, 1./n);
    RootMeanSquare = sqrt(sq_sum/n);

    std::cout << "Arithmetic Mean = " << ArithmeticMean << std::endl;
    std::cout << "Harmonic Mean = " << HarmonicMean << std::endl;
    std::cout << "Geometric Mean = " << GeometricMean << std::endl;
    std::cout << "Root Mean Square = " << RootMeanSquare << std::endl;
    return 0;
}