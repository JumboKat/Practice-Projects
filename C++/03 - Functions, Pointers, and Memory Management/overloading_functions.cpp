/*Sorry for bothering you, but we have to tell you that the function you implemented last time needs to be supplemented with another one that performs (more or less) the same actions, but uses different type of data. We can't say anything more, but we're sure that you'll be able to deduce all our intentions and needs from the code in the editor.
Complete the code and run it to check whether your output is the same as ours: 537.5*/

#include <iostream>
#include <cmath>

inline void increment(int &var, int i = 1){
    var += i;
}

inline void increment(float &var, float i = 1.0){
    var += i;
}

int main() {
    int intvar = 0;
    float floatvar = 1.5;

    for (int i = 0; i < 10; i++){
        if (i % 2){
            increment(intvar);
            increment(floatvar, sqrt(intvar));
        } else {
            increment(intvar,i);
            increment(floatvar);
        }
    }
    std::cout << intvar * floatvar << std::endl;
    return 0;
}