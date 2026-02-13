/*
Implement exception handling to satisfy the following challenge parameters:

Update the Process1 method to catch the exception that's thrown in the WriteMessage method.

The Process1 method should print the following message to console when the exception is caught:

Exception caught in Process1

Don't change any code outside the Process1 method.

When you run your updated application, it should generate the following output:

∞
Exception caught in Process1
Exit program
*/

try
{
    Process1();
}
catch
{
    Console.WriteLine("An exception has occurred");
}

Console.WriteLine("Exit program");

static void Process1()
{
    try
    {
        WriteMessage();
    }
    catch
    {
        Console.WriteLine("Exception caught in Process1");
    }
}

static void WriteMessage()
{
    double float1 = 3000.0;
    double float2 = 0.0;
    int number1 = 3000;
    int number2 = 0;

    Console.WriteLine(float1 / float2);
    Console.WriteLine(number1 / number2);
}