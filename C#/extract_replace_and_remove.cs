/*
In this challenge, you work with a string that contains a fragment of HTML. You extract data from the HTML fragment, replace some of its content, and remove other parts of its content to achieve the desired output:

Quantity: 5000
Output: <h2>Widgets &reg;</h2><span>5000</span>

Begin adding your solution code to the starter code under the comment // Your work here.

Set the quantity variable to the value obtained by extracting the text between the <span> and </span> tags.

Set the output variable to the value of input, then remove the <div> and </div> tags.

Replace the HTML character ™ (&trade;) with ® (&reg;) in the output variable.

*/

// Starter code
const string input = "<div><h2>Widgets &trade;</h2><span>5000</span></div>";

string quantity = "";
string output = "";

// Your work here

int openSpan = input.IndexOf("<span>");
openSpan += "<span>".Length;
int closeSpan = input.IndexOf("</span>");
quantity = input[openSpan..closeSpan];

int openDiv = input.IndexOf("<div>");
openDiv += "<div>".Length;
int closeDiv = input.IndexOf("</div>");
output = input[openDiv..closeDiv].Replace("&trade;", "&reg;");


Console.WriteLine("Quantity: " + quantity);
Console.WriteLine("Output: " + output);