/*
For the new features of the Contoso Pets application, the design specification provides details for the dog search and suggested donation features:

    Dog attribute search
        Gather input for the pet characteristic search term
        Loop through the animals array and identify "dogs"
        For each dog, combine the physical and personality descriptions to search
        Search the combined description for the input term match
        Output the dogs that have a term match

    Suggested donation data
        Define suggestedDonation string
        Expand the ourAnimals array to contain suggestedDonation and populate sample data for suggestedDonation
        Ensure all usage of ourAnimals array accounts for the added suggestedDonation data
        Output suggestedDonation with regional currency symbol ($, €, ¥,... )

P2.

Update the existing Contoso Pets starter application to include multiple term search and improved "search status" animation features:
Add dog attribute multi-term search

Gather user input for the pet characteristic multiple term search

    Users need to provide search terms separated by commas
    Store the search terms in an array and sort the terms alphabetically

Within the animals array loop that identifies "dogs":

    Iterate through the search terms to search each dog's description
    Search the combined description for a term match
    Output each dog's description where there's one or more terms matched

After exiting the "search Animals" array loop that identifies dogs:

    If no dogs were a match for any of the users provided search terms, output a no dogs matched message.

Add "search status" improvements

Update the animation

    Adjust the searchingIcons array to resemble a spinning dial
    Adjust the animation loop so the animation shows a numeric countdown from two to zero (2.., 1.., 0..)


*/

// #1 the ourAnimals array will store the following: 
using System.Reflection;

string animalSpecies = "";
string animalID = "";
string animalAge = "";
string animalPhysicalDescription = "";
string animalPersonalityDescription = "";
string animalNickname = "";
string suggestedDonation = "";

// #2 variables that support data entry
decimal decimalDonation = 0.00m;
int maxPets = 8;
string? readResult;
string menuSelection = "";

// #3 array used to store runtime data, there is no persisted data
string[,] ourAnimals = new string[maxPets, 7];

// #4 create sample data ourAnimals array entries
for (int i = 0; i < maxPets; i++)
{
    switch (i)
    {
        case 0:
            animalSpecies = "dog";
            animalID = "d1";
            animalAge = "2";
            animalPhysicalDescription = "medium sized cream colored female golden retriever weighing about 45 pounds. housebroken.";
            animalPersonalityDescription = "loves to have her belly rubbed and likes to chase her tail. gives lots of kisses.";
            animalNickname = "lola";
            suggestedDonation = "85.00";
            break;

        case 1:
            animalSpecies = "dog";
            animalID = "d2";
            animalAge = "9";
            animalPhysicalDescription = "large reddish-brown male golden retriever weighing about 85 pounds. housebroken.";
            animalPersonalityDescription = "loves to have his ears rubbed when he greets you at the door, or at any time! loves to lean-in and give doggy hugs.";
            animalNickname = "gus";
            suggestedDonation = "49.99";
            break;
        
        case 2:
            animalSpecies = "cat";
            animalID = "c3";
            animalAge = "1";
            animalPhysicalDescription = "small white female weighing about 8 pounds. litter box trained.";
            animalPersonalityDescription = "friendly";
            animalNickname = "snow";
            suggestedDonation = "40.00";
            break;

        case 3:
            animalSpecies = "cat";
            animalID = "c4";
            animalAge = "3";
            animalPhysicalDescription = "Medium sized, long hair, yellow, female, about 10 pounds. Uses litter box.";
            animalPersonalityDescription = "A people loving cat that likes to sit on your lap.";
            animalNickname = "Lion";
            suggestedDonation = "";
            break;
        
        default:
            animalSpecies = "";
            animalID = "";
            animalAge = "";
            animalPhysicalDescription = "";
            animalPersonalityDescription = "";
            animalNickname = "";
            suggestedDonation = "";
            break;

    }

    ourAnimals[i, 0] = "ID #: " + animalID;
    ourAnimals[i, 1] = "Species: " + animalSpecies;
    ourAnimals[i, 2] = "Age: " + animalAge;
    ourAnimals[i, 3] = "Nickname: " + animalNickname;
    ourAnimals[i, 4] = "Physical description: " + animalPhysicalDescription;
    ourAnimals[i, 5] = "Personality: " + animalPersonalityDescription;
    
    if (!decimal.TryParse(suggestedDonation, out decimalDonation))
        decimalDonation = 45.00m;
    ourAnimals[i, 6] = $"Suggested Donation: {decimalDonation:C2}";
    
}

// #5 display the top-level menu options
do
{
    // NOTE: the Console.Clear method is throwing an exception in debug sessions
    Console.Clear();

    Console.WriteLine("Welcome to the Contoso PetFriends app. Your main menu options are:");
    Console.WriteLine(" 1. List all of our current pet information");
    Console.WriteLine(" 2. Display all dogs with a specified characteristic");
    Console.WriteLine();
    Console.WriteLine("Enter your selection number (or type Exit to exit the program)");

    readResult = Console.ReadLine();
    if (readResult != null)
    {
        menuSelection = readResult.ToLower();
    }

    // use switch-case to process the selected menu option
    switch (menuSelection)
    {
        case "1":
            // list all pet info
            for (int i = 0; i < maxPets; i++)
            {
                if (ourAnimals[i, 0] != "ID #: ")
                {
                    Console.WriteLine();
                    for (int j = 0; j < 7; j++)
                    {
                        Console.WriteLine(ourAnimals[i, j]);
                    }
                }
            }
            Console.WriteLine("\n\rPress the Enter key to continue");
            readResult = Console.ReadLine();

            break;

        case "2":
            // Display all dogs with a specified characteristic
            string dogCharacteristic = "";

            while (dogCharacteristic=="")
            {
                Console.WriteLine("\nEnter dog characteristics to search for separated by commas.");
                readResult = Console.ReadLine();
                if (readResult != null)
                    dogCharacteristic = readResult.ToLower().Trim();
            }

            string[] characteristics = dogCharacteristic.Split(",");
            string[] searchingIcons = ["/ 2", "-- 1", "\\ 1", "* 0"];

            string dogDescription = "";
            bool noMatchesDog = true;

            for (int i = 0; i < maxPets; i++)
            {
                if (ourAnimals[i, 1].Contains("dog"))
                {
                    Console.WriteLine("");
                    bool currentMatch = false;
                    dogDescription = ourAnimals[i, 4] + "\n" + ourAnimals[i, 5];
                    foreach (string ch in characteristics)
                    {
                        foreach (string icon in searchingIcons)
                        {
                            Console.Write($"\rsearching our dog {ourAnimals[i, 3]} for {dogCharacteristic} {icon}");
                            Thread.Sleep(250);
                        }
                        Console.Write($"\r{new String(' ', Console.BufferWidth)}");
                        if (dogDescription.ToLower().Contains(ch.Trim()))
                        {
                            Console.WriteLine($"Our dog {ourAnimals[i, 3]} matches your search for {ch.Trim()}");
                            noMatchesDog = false;
                            currentMatch = true;
                        }
                    }
                    if (currentMatch)
                        Console.WriteLine($"\n{ourAnimals[i, 3]} ({ourAnimals[i,0]})\n{ourAnimals[i, 4]}\n{ourAnimals[i,5]}");
                }
            }
            if (noMatchesDog)
                Console.WriteLine("None of our dogs are a match found for: " + dogCharacteristic);

            Console.WriteLine("\nPress the Enter key to continue.");
            readResult = Console.ReadLine();
            break;

        default:
            break;
    }

} while (menuSelection != "exit");
