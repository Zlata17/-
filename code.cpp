string[] array1 = new string[5] {"123", "23", "hello", "world", "res"};

void SecondArrayWithIF(string[] array1, string[] array2)
{
    int lenght = 0;
    for (int i = 0; i < array1.Length; i++) {
    if(array1[i].Length <= 3)
        {
        lenght++;
        }
       
    }
string[] array2 = new string[lenght];

ind = 0;
   for (int i = 0; i < array1.Length; i++) {
    if(array1[i].Length <= 3)
        {
        array2[ind] = array1[i];
        ind= ind+1;
        }
       
    }
PrintArray(array2);


}
void PrintArray(string[] array)
{
    for (int i = 0; i < array.Length; i++)
    {
        Console.Write($"{array[i]} ");
    }
    Console.WriteLine();
}
SecondArrayWithIF(array1, array2);
PrintArray(array2);
