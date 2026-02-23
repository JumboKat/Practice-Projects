/*Take a look at the code in the editor - it reads a float value, puts it into a variable named x and prints the value of a variable named y. Your task is to complete the code in order to evaluate the following expression:

y = [x^2/((pi^2)(x^2 + 1/2))]*(1+(x^2)/(pi^2)(x^2 - 1/2)^2)
*/

#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x,y;

	cout << "Enter value for x: ";
	cin >> x;

	// put your code here
	y = (x*x /((pi*pi)*(x*x + (float)1/2)))*(1 + x*x / ((pi*pi)*((x*x - (float)1/2)*(x*x - (float)1/2))));


	cout << "y = " << y;
	return 0;
}