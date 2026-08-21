var numbers = new List<int> {34,99,64,23,24,65,23,1267,74,323,56,12,1,23,6,8};

Console.WriteLine($"I found 99 at index {numbers.IndexOf(99)}");
numbers.Sort();
Console.WriteLine($"I found 99 at index {numbers.IndexOf(99)}");

foreach (var number in numbers)
{
    Console.WriteLine($"Hello {number}");
}