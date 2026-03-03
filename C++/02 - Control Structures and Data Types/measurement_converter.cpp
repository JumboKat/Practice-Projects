/*Among the many measurement systems available, two seem to be the most widespread: metric and imperial. To make things simpler, we assume that the first one uses the "meter" as its only unit (expressed as a real number), while the second uses the "foot" (always an integer) and the "inch" (a real number).

Your task is to write a simple "measurement converter". We want it to perform the following actions:

    ask the user which system she/he uses to input data; we assume that 0 means "metric" and 1 means "imperial";
    depending on the user's answer, ask either for meters or feet and inches;
    output the distance in proper (different) units: either in feet and inches or in meters;
    a result outputted as metric should look like 123.4m;
    a result outputted as imperial should look like 12'3.5".

Look at the code in the editor – it's only a template. Use it to implement the whole converter.

Make your code smart – it shouldn't be fooled by stupid or unreasonable inputs.*/

#include <iostream>

int main(void) {
    int sys;
    float m, ft, in;

    std::cout << "Enter a measurement system to convert: 0 for metric and 1 for imperial: ";
    std::cin >> sys;

    if (sys){
        std::cout << "ft = ";
        std::cin >> ft;
        std::cout << "in = ";
        std::cin >> in;
        in += 12 * ft;
        m = in * 0.0254;
        std::cout << m << "m" << std::endl;
        
    } else {
        std::cout << "m = ";
        std::cin >> m;
        in = m / 0.0254;
        int feet = in / 12;
        in = in - (feet*12);
        std::cout << feet << "'" << in << "\"" << std::endl;
    }
    return 0;
}