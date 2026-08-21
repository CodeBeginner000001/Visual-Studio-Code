var names = new List<string> {"Scott", "Ana", "Felipe"};

names.Add("Mike");
names.Add("david");

foreach (var name in names)
{
    Console.WriteLine($"Hello {name.ToUpper()}");
}

Console.WriteLine(names[2]);
Console.WriteLine(names[^5]); // names.length-1

foreach (var name in names[2..4]) // define range for the list
{
    Console.WriteLine($"Hello {name.ToUpper()}");
}

Console.WriteLine("Array");

// Array
var arrayNames = new string[] {"Scott", "Ana", "Felipe"};
//arrayNames.Add("Gibs"); // error as add is not a argument in array
arrayNames = [..arrayNames, "Gibbs"];
foreach (var name in arrayNames[2..4]) // define range for the list
{
    Console.WriteLine($"Hello {name.ToUpper()}");
}
