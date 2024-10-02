#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str = "how Many wOrds";

   int vowels = 0;
   int spaces = 0;
   int consonants = 0;

   for (int i = 0; str[i] != '\0'; i++)
   {
       if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
       {
           vowels++;
       }
       else if (str[i] == ' ')
       {
           spaces++;
       }
       else
        consonants++;
   }

    cout << "Number of Vowels = " << vowels << endl;
    cout << "Number of Consonants = " << consonants << endl;
    cout << "Number of Spaces = " << spaces << endl;

    return 0;
}
