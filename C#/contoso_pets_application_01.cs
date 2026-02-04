/*
You're working on the Contoso Pets application, an application that helps place pets in new homes. The specifications for your application are:

    Create a C# console application.

    Store application data in a multidimensional string array named ourAnimals.

    The ourAnimals array includes the following "pet characteristics" for each animal:
        Pet ID #.
        Pet species (cat or dog).
        Pet age (years).
        A description of the pet's physical condition/characteristics.
        A description of the pet's personality.
        The pet's nickname.

    Implement a sample dataset that represents dogs and cats currently in your care.

    Display menu options to access the main features of the application.

    The main features enable the following tasks:

        List the pet information for all animals in the ourAnimals array.

        Add new animals to the ourAnimals array. The following conditions apply:
            The pet species (dog or cat) must be entered when a new animal is added to the ourAnimals array.
            A pet ID must be programmatically generated when a new animal is added to the ourAnimals array.
            Some physical characteristics for a pet may be unknown until a veterinarian's examination. For example: age, breed, and neutered/spayed status.
            An animal's nickname and personality may be unknown when a pet first arrives.

        Ensure animal ages and physical descriptions are complete. This may be required after a veterinarian's examination.

        Ensure animal nicknames and personality descriptions are complete (this action can occur after the team gets to know a pet).

        Edit an animal’s age (if a pet's birth date is known and the pet has a birthday while in our care).

        Edit an animal’s personality description (a pet may behave differently after spending more time in our care).

        Display all cats that meet user specified physical characteristics.

        Display all dogs that meet user specified physical characteristics.

An initial version of the application has already been completed. The Starter code project for this Guided project module includes a Program.cs file that provides the following code features:

    The code declares variables used to collect and process pet data and menu item selections.

    The code declares the ourAnimals array.

    The code uses a for loop around an if-elseif-else construct to populate the ourAnimals array with a sample dataset.

    The code displays the following main menu options for user selection:
        List all of our current pet information.
        Assign values to the ourAnimals array fields.
        Ensure animal ages and physical descriptions are complete.
        Ensure animal nicknames and personality descriptions are complete.
        Edit an animal’s age.
        Edit an animal’s personality description.
        Display all cats with a specified characteristic.
        Display all dogs with a specified characteristic.

    Enter menu item selection or type "Exit" to exit the program

    The code reads the user's menu item selection and displays a message echoing their selection.
*/

// the ourAnimals array will store the following: 
using System.Data.Common;
using System.Runtime.Intrinsics.Arm;

string animalSpecies = "";
string animalID = "";
string animalAge = "";
string animalPhysicalDescription = "";
string animalPersonalityDescription = "";
string animalNickname = "";

// variables that support data entry
int maxPets = 8;
string? readResult;
string menuSelection = "";

// array used to store runtime data, there is no persisted data
string[,] ourAnimals = new string[maxPets, 6];

// TODO: Convert the if-elseif-else construct to a switch statement

// create some initial ourAnimals array entries
for (int i = 0; i < maxPets; i++)
{
    switch (i)
    {
        case 0:
            animalSpecies = "dog";
            animalID = "d1";
            animalAge = "2";
            animalPhysicalDescription = "medium sized cream colored female golden retriever weighing about 65 pounds. housebroken.";
            animalPersonalityDescription = "loves to have her belly rubbed and likes to chase her tail. gives lots of kisses.";
            animalNickname = "lola";
            break;
        case 1:
            animalSpecies = "dog";
            animalID = "d2";
            animalAge = "9";
            animalPhysicalDescription = "large reddish-brown male golden retriever weighing about 85 pounds. housebroken.";
            animalPersonalityDescription = "loves to have his ears rubbed when he greets you at the door, or at any time! loves to lean-in and give doggy hugs.";
            animalNickname = "loki";
            break;
        case 2:
            animalSpecies = "cat";
            animalID = "c3";
            animalAge = "1";
            animalPhysicalDescription = "small white female weighing about 8 pounds. litter box trained.";
            animalPersonalityDescription = "friendly";
            animalNickname = "Puss";
            break;
        case 3:
            animalSpecies = "cat";
            animalID = "c4";
            animalAge = "?";
            animalPhysicalDescription = "";
            animalPersonalityDescription = "";
            animalNickname = "";
            break;
        default:
            animalSpecies = "";
            animalID = "";
            animalAge = "";
            animalPhysicalDescription = "";
            animalPersonalityDescription = "";
            animalNickname = "";
            break;
    }

    ourAnimals[i, 0] = "ID #: " + animalID;
    ourAnimals[i, 1] = "Species: " + animalSpecies;
    ourAnimals[i, 2] = "Age: " + animalAge;
    ourAnimals[i, 3] = "Nickname: " + animalNickname;
    ourAnimals[i, 4] = "Physical description: " + animalPhysicalDescription;
    ourAnimals[i, 5] = "Personality: " + animalPersonalityDescription;
}

// display the top-level menu options
do
{
    Console.Clear();

    Console.WriteLine("Welcome to the Contoso PetFriends app. Your main menu options are:");
    Console.WriteLine(" 1. List all of our current pet information");
    Console.WriteLine(" 2. Add a new animal friend to the ourAnimals array");
    Console.WriteLine(" 3. Ensure animal ages and physical descriptions are complete");
    Console.WriteLine(" 4. Ensure animal nicknames and personality descriptions are complete");
    Console.WriteLine(" 5. Edit an animal’s age");
    Console.WriteLine(" 6. Edit an animal’s personality description");
    Console.WriteLine(" 7. Display all cats with a specified characteristic");
    Console.WriteLine(" 8. Display all dogs with a specified characteristic");
    Console.WriteLine();
    Console.WriteLine("Enter your selection number (or type Exit to exit the program)");

    readResult = Console.ReadLine();
    if (readResult != null)
    {
        menuSelection = readResult.ToLower();
    }

    switch(menuSelection)
    {
        case "1":
            for (int i = 0; i < maxPets; i++)
            {
                if (ourAnimals[i,0] != "ID #: ")
                {
                    Console.WriteLine();
                    for (int j = 0; j < 6; j++)
                    {
                        Console.WriteLine(ourAnimals[i, j]);
                    }
                }
            }
            break;
        case "2":
            string anotherPet = "y";
            int petCount = 0;
            for (int i = 0; i < maxPets; i++)
            {
                if (ourAnimals[i, 0] != "ID #: ")
                {
                    petCount++;
                }
            }

            if (petCount < maxPets)
                Console.WriteLine($"We currently have {petCount} pets that need homes. We can manage {maxPets - petCount} more.");

            while (petCount < maxPets && anotherPet=="y")
            {
                bool validEntry = false;
                //get pet species
                do
                {
                    Console.WriteLine("\n\rEnter 'dog' or 'cat' to begin a new entry");
                    readResult = Console.ReadLine();
                    if (readResult != null)
                        animalSpecies = readResult.ToLower().Trim();
                        if (animalSpecies == "dog" || animalSpecies == "cat")
                            validEntry = true;
                } while (!validEntry);

                animalID = animalSpecies[0] + (petCount + 1).ToString();

                //get pet age
                do
                {
                    int petAge;
                    Console.WriteLine("Enter the pet's age, or enter ? if unknown");
                    readResult = Console.ReadLine();
                    if (readResult != null)
                    {
                        animalAge = readResult.Trim();
                        if (animalAge != "?")
                        {
                            validEntry = int.TryParse(animalAge, out petAge);
                        }
                        else
                            validEntry = true;
                    }
                } while (!validEntry);

                //get physical description - can be blank
                do
                {
                    Console.WriteLine("Enter a physical description of the pet (size, colour, gender, weight, housebroken)");
                    readResult = Console.ReadLine();
                    if (readResult != null)
                    {
                        animalPhysicalDescription = readResult.ToLower().Trim();
                        if (animalPhysicalDescription == "")
                            animalPhysicalDescription = "tbd";
                    }
                } while (animalPhysicalDescription == "");

                //get personality description - can be blank
                do
                {
                    Console.WriteLine("Enter a description of the pet's personality (likes or dislikes, tricks, energy level)");
                    readResult = Console.ReadLine();
                    if (readResult != null)
                    {
                        animalPersonalityDescription = readResult.ToLower().Trim();
                        if (animalPersonalityDescription == "")
                            animalPersonalityDescription = "tbd";
                    }

                } while (animalPersonalityDescription == "");

                // get pet's nickname - can be blank.
                do
                {
                    Console.WriteLine("Enter a nickname for the pet");
                    readResult = Console.ReadLine();
                    if (readResult != null)
                    {
                        animalNickname = readResult.ToLower().Trim();
                        if (animalNickname == "")
                            animalNickname = "tbd";
                    }
                } while (animalNickname == "");

                // store the pet information into ourAnimals array
                ourAnimals[petCount, 0] = "ID #: " + animalID;
                ourAnimals[petCount, 1] = "Species: " + animalSpecies;
                ourAnimals[petCount, 2] = "Age: " + animalAge;
                ourAnimals[petCount, 3] = "Nickname: " + animalNickname;
                ourAnimals[petCount, 4] = "Physical description: " + animalPhysicalDescription;
                ourAnimals[petCount, 5] = "Personality: " + animalPersonalityDescription;
                petCount++;
                if (petCount < maxPets)
                {
                    Console.WriteLine("Do you want to enter info for another pet (y/n)");
                    do
                    {
                        readResult = Console.ReadLine();
                        if (readResult != null)
                            anotherPet = readResult.ToLower().Trim();
                    } while (anotherPet != "y" && anotherPet != "n");
                }
            }
            if (petCount >= maxPets)
            {
                Console.WriteLine("We have reached our limit on the number of pets that we can manage.");
                Console.WriteLine("Press the Enter key to continue.");
                readResult = Console.ReadLine();
            }
            break;
        case "3":
            for (int i = 0; i < maxPets; i++)
            {
                int petAge;
                string petID = ourAnimals[i, 0];
                if (petID != "ID #: " && petID != "")
                {
                    bool validAge = (ourAnimals[i, 2] != "Age: ?" && ourAnimals[i, 2] != "") ? true : false;
                    while (!validAge)
                    {
                        Console.WriteLine($"Enter an age for {ourAnimals[i,0]}");
                        readResult = Console.ReadLine();
                        if (readResult != null)
                        {
                            validAge = int.TryParse(readResult.Trim(), out petAge);
                            if (validAge)
                                ourAnimals[i, 2] = "Age: " + petAge;
                        }
                    }

                    if (ourAnimals[i, 4] == "Physical description: " || ourAnimals[i, 4].Contains("tbd"))
                    {
                        bool validDesc = false;
                        while (!validDesc)
                        {
                            Console.WriteLine($"Enter a physical description for {petID}");
                            readResult = Console.ReadLine();
                            if (readResult != null)
                            {
                                ourAnimals[i, 4] = "Physical description: " + readResult.Trim();
                                validDesc = true;
                            }
                        }
                    }
                }
            }
            break;
        case "4":
            for (int i = 0; i < maxPets; i++)
            {
                string petID = ourAnimals[i, 0];
                if (petID != "ID #: ")
                {
                    bool validEntry;
                    if (ourAnimals[i, 3].Contains("tbd") || ourAnimals[i, 3]=="Nickname: ") 
                    {
                        validEntry = false;
                        do
                        {
                            Console.WriteLine($"Enter a nickname for {petID}");
                            readResult = Console.ReadLine();
                            if (readResult != null)
                            {
                                ourAnimals[i, 3] = readResult.Trim();
                                validEntry = true;
                            }
                        } while (!validEntry);
                    }

                    if (ourAnimals[i, 5].Contains("tbd") || ourAnimals[i, 5] == "Personality: ")
                    {
                        validEntry = false;
                        do
                        {
                            Console.WriteLine($"Enter a personality description for {petID}");
                            readResult = Console.ReadLine();
                            if (readResult != null)
                            {
                                ourAnimals[i, 5] = readResult.Trim();
                                validEntry = true;
                            }
                        } while (!validEntry);                 
                    }
                }
            }
            break;
        case "5":
            break;
        case "6":
            break;
        case "7":
            break;
        case "8":
            break;
        default:
            break;
    }
    Console.WriteLine($"You selected menu option {menuSelection}.");
    Console.WriteLine("Press the Enter key to continue");
    // pause code execution
    readResult = Console.ReadLine();
} while (menuSelection != "exit");
