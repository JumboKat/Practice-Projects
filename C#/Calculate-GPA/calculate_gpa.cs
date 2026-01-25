/*
You're developing a Student GPA Calculator that will help calculate students' overall Grade Point Average. The parameters for your application are:

    You're given the student's name and class information.
    Each class has a name, the student's grade, and the number of credit hours for that class.
    Your application needs to perform basic math operations to calculate the GPA for the given student.
    Your application needs to output/display the student’s name, class information, and GPA.

To calculate the GPA:

    Multiply the grade value for a course by the number of credit hours for that course.
    Do this for each course, then add these results together.
    Divide the resulting sum by the total number of credit hours.

You're provided with the following sample of a student's course information and GPA:

Student: Sophia Johnson

Course          Grade   Credit Hours	
English 101         4       3
Algebra 101         3       3
Biology 101         3       4
Computer Science I  3       4
Psychology 101      4       3

Final GPA:          3.35
*/

// Project Setup

string studentName = "Sophia Johnson";
string course1Name = "English 101";
string course2Name = "Algebra 101";
string course3Name = "Biology 101";
string course4Name = "Computer Science I";
string course5Name = "Psychology 101";

int course1Credit = 3;
int course2Credit = 3;
int course3Credit = 4;
int course4Credit = 4;
int course5Credit = 3;

int course1Grade = 4;
int course2Grade = 3;
int course3Grade = 3;
int course4Grade = 3;
int course5Grade = 4;

int totalCreditHours = course1Credit + course2Credit + course3Credit + course4Credit + course5Credit;

int totalGradePoints = course1Grade * course1Credit + course2Grade * course2Credit + course3Grade * course3Credit + course4Grade * course4Credit + course5Grade * course5Credit;
decimal gpa = (decimal) totalGradePoints / totalCreditHours;
int firstDigit = (int)gpa;
int secondDigit = (int)(gpa * 10) % 10;
int thirdDigit = (int)(gpa * 100) % 10;


Console.WriteLine($"Student: {studentName}\n");
Console.WriteLine("Course\t\t\tGrade\tCredit Hours");
Console.WriteLine($"{course1Name}\t\t{course1Grade}\t{course1Credit}");
Console.WriteLine($"{course2Name}\t\t{course2Grade}\t{course2Credit}");
Console.WriteLine($"{course3Name}\t\t{course3Grade}\t{course3Credit}");
Console.WriteLine($"{course4Name}\t{course4Grade}\t{course4Credit}");
Console.WriteLine($"{course5Name}\t\t{course5Grade}\t{course5Credit}");
Console.WriteLine($"Final GPA: {firstDigit}.{secondDigit}{thirdDigit}");