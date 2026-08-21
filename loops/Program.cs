int counter = 0;
//counter ++;
//Console.WriteLine(counter);
//counter ++;
//Console.WriteLine(counter);
//counter ++;
//Console.WriteLine(counter);
//counter ++;
//Console.WriteLine(counter);

// while - run till conditions are not met
while (counter < 5)
{
    Console.WriteLine(counter);
    counter ++;
}
Console.WriteLine("Do While Loops");
// do-while : runs at-least ones
counter = 10;
do {
    Console.WriteLine(counter);
    counter ++;
} while (counter < 5);

// for-loop:
/*
Step1: initialize (start)
Step2: conditional
Step3: iteration (increment)
*/
Console.WriteLine("For Loops");
counter = 0;
for (int i = 0; i < 5; i++ )
{
    // Do things here
    if ( i == 3 ){
        continue;
    }
    Console.WriteLine(i);
}
