/*
Write the code necessary to reverse the letters of each word in place and display the result.

In other words, don't just reverse every letter in the variable pangram. Instead, you need to reverse just the letters in each word, but print the reversed word in its original position in the message.

Your code must produce the following output:

ehT kciuq nworb xof spmuj revo eht yzal god

*/

// Starter code

string pangram = "The quick brown fox jumps over the lazy dog";
string[] substrings = pangram.Split(" ");
for (int i = 0; i < substrings.Length; i++)
{
    char[] chars = substrings[i].ToCharArray();
    Array.Reverse(chars);
    substrings[i] = String.Join("", chars);
}

pangram = String.Join(" ", substrings);
Console.WriteLine(pangram);