/*
In this challenge, you'll implement a conditional operator to simulate a "coin flip." The resulting decision logic will display either heads or tails.
*/

Random random = new Random();

Console.WriteLine($"{(random.Next(1, 3)==1 ? "heads" : "tails")}");