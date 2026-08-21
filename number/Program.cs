int a = 1800000000;
int b = 1800000000;
//Type casting
long c = (long)a + (long)b;
Console.WriteLine(c);
// checked - handle the arithmetic operations overflow
//c = checked(a+b);
//Console.WriteLine(c);

// natural type
double e = 42.1;
float f = 38.2F;
double v = e + f;
Console.WriteLine(v);


// explicit type
// decimal require more memory than double or float
decimal n = 34.2M;
decimal m = 55.6M;
decimal z = n + m;
Console.WriteLine($"The answer is {z}");
