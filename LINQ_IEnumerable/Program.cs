// LINQ - Language Integrated Query

// Specify the data source
List<int> scores = [3, 34,94, 54, 10, 97, 92, 81, 60];

// Define the query expression
IEnumerable<int> scoreQuery =
    from score in scores
    where score > 80
    select score;

//Execute the query
foreach(int i in scoreQuery)
{
    Console.Write(i + " ");
}

Console.WriteLine("");

IEnumerable<string> sortScoreQuery =
    from score in scores
    where score>80
    orderby score descending
    select $"The score is {score}";
Console.WriteLine(sortScoreQuery.Count());
foreach(string s in sortScoreQuery)
{
    Console.WriteLine(s);
}