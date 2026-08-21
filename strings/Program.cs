// See https://aka.ms/new-console-template for more information

// String are not mutable and return new string for every string function used
string firstFriend = "      Maria     ";
string secondFriend = "scott";
// $ -> string interpolation
Console.WriteLine($"My friends are {firstFriend.Trim()} and {secondFriend}");
Console.WriteLine("My friend is " + firstFriend + " and " + secondFriend );
//Trim - to trim whitespaces
string friends = $"My friends are {firstFriend.Trim()} and {secondFriend}";
// Replace to replace a set of character with another
Console.WriteLine(friends);
Console.WriteLine(friends.Replace("scott", "max"));
Console.WriteLine(friends);
friends = friends.Replace("scott", "max");
Console.WriteLine(friends);
// Contains check if the string is the present in the other string
Console.WriteLine(friends.Contains("scott"));
Console.WriteLine(friends.Contains("max"));
// Capitalizing a string
Console.WriteLine(friends.ToUpper());
// Length of the string
Console.WriteLine(friends.Length);
// StartWith function used to check the starting point of that string.
Console.WriteLine(friends.StartsWith("My  "));
Console.WriteLine(friends.StartsWith("My "));


