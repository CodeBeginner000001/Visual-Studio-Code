int a = 5;
int b = 1;
if( (a+b) > 10) // if then true then do a thing
    Console.WriteLine("Answer is greater than 10");

int c = a + b;
bool myTest = c > 10;
// If Conditions
if (myTest)
{
    Console.WriteLine("Answer is greater than 10");
} else {
    Console.WriteLine("Answer is less than 10");
}
// AND Operator
if ((a+b+c>10) && (a==b))
{
    Console.WriteLine("Answer is greater than 10");
    Console.WriteLine("Or the first number is equal to second number");
} else {
     Console.WriteLine("Answer is not greater than 10");
     Console.WriteLine("Or the first number is not equal to second number");
}
// OR Operator
if ((a+b+c>10) || (a==b))
{
    Console.WriteLine("Answer is greater than 10");
    Console.WriteLine("Or the first number is equal to second number");
} else {
     Console.WriteLine("Answer is not greater than 10");
     Console.WriteLine("Or the first number is not equal to second number");
}