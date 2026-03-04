/*Look at the sample code below – it draws a shape pretending to be a rectangle (we would like to name it "square", but neither the monitor nor the printer can show it as a real square).

Your task is to modify the code to achieve the following goals:

    ask the user to enter a positive integer value greater than 1 (n);
    check the entered value and if it isn't legal, output a message stating the reason;
    draw a square with a side of n.

Find the reasonable upper limit for n (depending on your screen's dimensions) and embed it into your code.*/

#include <iostream>

using namespace std;

int main(void) {
    unsigned n;

    cout << "Enter a positive integer value: ";
    cin >> n;
    if (n > 100){
        cout << "Sorry, the side size is too big" << endl;
    } else {
        cout << '+';
        for(int i = 0; i < n; i++)
            cout << '-';
        cout << '+' << endl;
        for(int i = 0; i < n; i++) {
            cout << '|';
            for(int j = 0; j < n; j++)
                cout << ' ';
            cout << '|' << endl;
        }
        cout << '+';
        for(int i = 0; i < n; i++)
            cout << '-';
        cout << '+' << endl;
    }
	return 0;
}