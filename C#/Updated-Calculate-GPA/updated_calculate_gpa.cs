using System;
/*
In this exercise, you review the Starter project code and then begin updating the application. Your first coding task is creating the arrays that hold student exam scores. Once your application data is available in arrays, you begin working on a foreach loop that can be used to sum student grades. The detailed tasks that you complete during this exercise are:

    Code review: review the contents of the Program.cs file.

    Arrays: Create the arrays that store each student's assignment scores.

    Iteration: Create a foreach loop that can be used to sum Sophia's assignment grades.

    Calculate and display Sophia's average assignment grade.

    Verification test: perform a verification test for the code that you've developed in this exercise.
*/

// initialize variables - graded assignments 
int currentAssignments = 5;

int[] sophiaScores = new int[] { 90, 86, 87, 98, 100, 94, 90 };
int[] andrewScores = new int[] { 92, 89, 81, 96, 90, 89 };
int[] emmaScores = new int[] { 90, 85, 87, 98, 69, 89, 89, 89 };
int[] loganScores = new int[] { 90, 95, 87, 88, 96, 96 };
 

string[] studentNames = [ "Sophia", "Andrew", "Emma", "Logan" ];
int[] studentScores = new int[10];

Console.WriteLine("Student\t\tExam Score\tOverall Grade\tExtra Credit\n");

foreach (string name in studentNames)
{
    if (name == "Sophia")
        studentScores=sophiaScores;
    else if (name == "Andrew")
        studentScores = andrewScores;
    else if (name == "Emma")
        studentScores = emmaScores;
    else if (name == "Logan")
        studentScores = loganScores;
    else
        continue;

    int sumExamScores = 0;
    int sumExtraCredit = 0;

    int gradedAssignments = 0;
    decimal examScore = 0;
    int extraCreditScore = 0;
    decimal extraCreditPoints = 0;

    foreach(int score in studentScores)
    {
        gradedAssignments++;
        if (gradedAssignments > currentAssignments)
        {
            extraCreditPoints += (decimal)score / 10;
            sumExtraCredit += score;
        }
        else
            sumExamScores += score;
    }

    string letterGrade = "";
    decimal studentGrade = 0;

    examScore = (decimal)sumExamScores / currentAssignments;
    extraCreditScore = sumExtraCredit / (gradedAssignments - currentAssignments);
    extraCreditPoints = extraCreditPoints / currentAssignments;
    studentGrade = examScore + extraCreditPoints;

    if (studentGrade >= 97)
        letterGrade = "A+";
    else if (studentGrade >= 93)
        letterGrade = "A";
    else if (studentGrade >= 90)
        letterGrade = "A-";
    else if (studentGrade >= 87)
        letterGrade = "B+";
    else if (studentGrade >= 83)
        letterGrade = "B";
    else if (studentGrade >= 80)
        letterGrade = "B-";
    else if (studentGrade >= 77)
        letterGrade = "C+";
    else if (studentGrade >= 73)
        letterGrade = "C";
    else if (studentGrade >= 70)
        letterGrade = "C-";
    else if (studentGrade >= 67)
        letterGrade = "D+";
    else if (studentGrade >= 63)
        letterGrade = "D";
    else if (studentGrade >= 60)
        letterGrade = "D-";
    else
        letterGrade = "F";

    Console.WriteLine($"{name}\t\t{examScore}\t\t{studentGrade}\t{letterGrade}\t{extraCreditScore} ({extraCreditPoints:F2} pts)");
}
//Console.WriteLine("Press the Enter Key to continue");
//Console.ReadLine();

