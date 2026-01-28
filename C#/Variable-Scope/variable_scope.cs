/*
In this challenge, you'll use what you've learned about code blocks and variable scope to fix the poorly written code sample provided. There are many improvements that you can make. Good luck!

int[] numbers = { 4, 8, 15, 16, 23, 42 };

foreach (int number in numbers)
{
    int total;

    total += number;

    if (number == 42)
    {
       bool found = true;

    }

}

if (found) 
{
    Console.WriteLine("Set contains 42");

}

Console.WriteLine($"Total: {total}");

When you have completed the required code edits, your application should produce the following output:

Set contains 42
Total: 108
*/

int[] numbers = [4, 8, 15, 16, 23, 42];
int total = 0;
bool found = false;

foreach (int number in numbers)
{
    total += number;
    
    if (number == 42)
       found = true;

}

if (found) 
    Console.WriteLine("Set contains 42");

Console.WriteLine($"Total: {total}");