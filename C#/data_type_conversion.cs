/*
Create a looping structure that can be used to iterate through each string value in the array values.

Complete the required code, placing it within the array looping structure code block. It's necessary to implement the following business rules in your code logic:

    Rule 1: If the value is alphabetical, concatenate it to form a message.

    Rule 2: If the value is numeric, add it to the total.

    Rule 3: The result should match the following output:

    Message: ABCDEF
    Total: 68.3
*/

// Starter code
string[] values = { "12.3", "45", "ABC", "11", "DEF" };

float total = 0;
string message = "";
foreach (string value in values)
{
    float num;
    if (float.TryParse(value, out num))
        total += num;
    else
        message += value;
}
Console.WriteLine($"Message: {message}\nTotal: {total}\n\n");

/*
The following challenge helps you to understand the implications of casting values considering the impact of narrowing and widening conversions.

Replace the code comments in the starter code with your own code to solve the challenge:

    Solve for result1: Divide value1 by value2, display the result as an int
    Solve for result2: Divide value2 by value3, display the result as a decimal
    Solve for result3: Divide value3 by value1, display the result as a float

Solve the challenge so that your output resembles:

Divide value1 by value2, display the result as an int: 2
Divide value2 by value3, display the result as a decimal: 1.4418604651162790697674418605
Divide value3 by value1, display the result as a float: 0.3909091
*/

// Starter code

int value1 = 11;
decimal value2 = 6.2m;
float value3 = 4.3f;

// Your code here to set result1
// Hint: You need to round the result to nearest integer (don't just truncate)
int result1 = Convert.ToInt32((decimal)value1 / value2);
Console.WriteLine($"Divide value1 by value2, display the result as an int: {result1}");

// Your code here to set result2
decimal result2 = value2 / (decimal)value3;
Console.WriteLine($"Divide value2 by value3, display the result as a decimal: {result2}");

// Your code here to set result3
float result3 = value3/value1;
Console.WriteLine($"Divide value3 by value1, display the result as a float: {result3}");