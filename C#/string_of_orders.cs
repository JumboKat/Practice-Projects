/*
Data comes in many formats. In this challenge you have to parse the individual "Order IDs", and output the "OrderIDs" sorted and tagged as "Error" if they aren't exactly four characters in length.

Your code must produce the following output:
Output

A345
B123
B177
B179
C15     - Error
C234
C235 
G3003   - Error
*/

// Starter code
string orderStream = "B123,C234,A345,C15,B177,G3003,C235,B179";
string[] orderIDs = orderStream.Split(',');
Array.Sort(orderIDs);
for (int i = 0; i < orderIDs.Length; i++)
{
    if (orderIDs[i].Length != 4)
        orderIDs[i] += "\t- Error";
}

foreach (string orderID in orderIDs)
    Console.WriteLine(orderID);