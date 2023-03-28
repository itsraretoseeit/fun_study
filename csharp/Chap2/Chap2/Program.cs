using static System.Console;

int numberOfApples = 12;
decimal pricePerApple = 0.35M;

Console.WriteLine(
    format: "{0} apples cost {1:C}",
    arg0: numberOfApples,
    arg1: pricePerApple * numberOfApples);

string formatted = string.Format(
    format: "{0} apples cost {1:C}",
    arg0: numberOfApples,
    arg1: numberOfApples * pricePerApple);

Console.WriteLine($"{numberOfApples} apples cost {pricePerApple * numberOfApples}");


string applesText = "apples";
int applesCount = 1234;
string bananasText = "bananas";
int bananasCount = 56789;

Console.WriteLine(
    format: "{0,-10} {1,6}",
    arg0: "Name",
    arg1: "Count");

Console.WriteLine(
    format: "{0,-10} {1,6:N0}",
    arg0: applesText,
    arg1: applesCount);

Console.WriteLine(
    format: "{0,-10} {1,6:N0}",
    arg0: bananasText,
    arg1: bananasCount);


//Write("Type your first name and press ENTER: ");
//string? firstName = Console.ReadLine();
//Console.Write("Type your age and press Enter: ");
//string? age = Console.ReadLine();
//Console.WriteLine($"Hello {firstName}, you look good for {age}.");

//Write("Press any key combination: ");
//ConsoleKeyInfo key = ReadKey();
//WriteLine();
//WriteLine($"Key: {key.Key}, Char: {key.KeyChar}, Modifiers: {key.Modifiers}");

WriteLine($"There are {args.Length} arguments.");

if (args.Length <3)
{
    WriteLine("You must specify two colors and cursor size, e.g.");
    WriteLine("red yellow 50");
    return;
}

ForegroundColor = (ConsoleColor)Enum.Parse(
    enumType: typeof(ConsoleColor),
    value: args[0],
    ignoreCase: true);
BackgroundColor = (ConsoleColor)Enum.Parse(
    enumType: typeof(ConsoleColor),
    value: args[1],
    ignoreCase: true);
try
{
    CursorSize = int.Parse(args[2]);
}
catch (PlatformNotSupportedException)
{
    WriteLine("not here");
}

HttpClient client = new();
HttpResponseMessage response = await client.GetAsync("http://www.google.it");
WriteLine("Page {0:N0}.", response.Content.Headers.ContentLength);