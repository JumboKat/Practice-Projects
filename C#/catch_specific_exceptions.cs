/*
In this challenge, you're provided with a code sample that generates several different exception types. A single try code block contains the code that generates the exceptions. Multiple catch clauses are included to handle specific exception types.

You need to update the code sample so that each exception is caught and the corresponding error message is displayed to the console.
*/

try
{
    int num1 = int.MaxValue;
    int num2 = int.MaxValue;
    int result = checked(num1 + num2);
    Console.WriteLine("Result: " + result);
}
catch (OverflowException ex)
{
    Console.WriteLine("Error: The number is too large to be represented as an integer. " + ex.Message);
}
try
{
    string str = null;
    int length = str.Length;
    Console.WriteLine("String Length: " + length);
}
catch (NullReferenceException ex)
{
    Console.WriteLine("Error: The reference is null. " + ex.Message);
}
try
{
    int[] numbers = new int[5];
    numbers[5] = 10;
    Console.WriteLine("Number at index 5: " + numbers[5]);
}
catch (IndexOutOfRangeException ex)
{
    Console.WriteLine("Error: Index out of range. " + ex.Message);
}
try
{
    int num3 = 10;
    int num4 = 0;
    int result2 = num3 / num4;
    Console.WriteLine("Result: " + result2);
}
catch (DivideByZeroException ex)
{
    Console.WriteLine("Error: Cannot divide by zero. " + ex.Message);
}

Console.WriteLine("Exiting program.");