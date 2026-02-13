/*
In this challenge, you start with a sample application that uses a series of method calls to process data. The top-level statements create an array of user input values and call a method named Workflow1. Workflow1 represents a high-level workflow that loops through the array and passes user input values to a method named Process1. Process1 uses the user input data to calculate a value.

Currently, when Process1 encounters an issue or error, it returns a string describing the issue rather than throwing an exception. Your challenge is to implement exception handling in the sample application.

Update the sample application using the following requirements:

    All methods must be converted from static string methods to static void methods.
    The Process1 method must throw exceptions for each type of issue encountered.
    The Workflow1 method must catch and handle the FormatException exceptions.
    The top-level statements must catch and handle the DivideByZeroException exceptions.
    The Message property of the exception must be used to notify the user of the issue.

Your completed solution must print the following messages to the console:

'Process1' completed successfully.

'Process1' encountered an issue, process aborted.
Invalid data. User input values must be valid integers.

An error occurred during 'Workflow1'.
Invalid data. User input values must be non-zero values.
*/



string[][] userEnteredValues = new string[][]
{
            new string[] { "1", "2", "3"},
            new string[] { "1", "two", "3"},
            new string[] { "0", "1", "2"}
};

try
{
   Workflow1(userEnteredValues);
   Console.WriteLine("'Workflow1' completed successfully.\n");
}
catch (DivideByZeroException ex)
{
    Console.WriteLine($"An error occured during 'Workflow1'.\n{ex.Message}\n");
}

static void Workflow1(string[][] userEnteredValues)
{

    foreach (string[] userEntries in userEnteredValues)
    {
        try
        {
            Process1(userEntries);
            Console.WriteLine("'Process 1' completed successfully.\n");
        }
        catch (FormatException ex)
        {
            Console.WriteLine($"'Process1' encountered an issue, process aborted.\n{ex.Message}\n");
        }
    }
}

static void Process1(String[] userEntries)
{
    int valueEntered;

    foreach (string userValue in userEntries)
    {
        bool integerFormat = int.TryParse(userValue, out valueEntered);
        if (integerFormat)
        {
            try
            {
                checked
                {
                    int calculatedValue = 4 / valueEntered;
                }
            }
            catch (DivideByZeroException)
            {
                DivideByZeroException divideByZeroException = new DivideByZeroException(message: "Invalid data. User input values must be non-zero values.");
                throw divideByZeroException;
            }
        }
        else
        {
            FormatException intParseException = new FormatException(message: "Invalid data. User input values must be valid integers.");
            throw intParseException;
        }
    }
}