#include <iostream>
using namespace std;

int main()
{
    char input_character;
    bool vowel;
    cout << "Enter a character from a to z or A to Z:";
    cin >> input_character;
    vowel = false;
    switch (input_character)
    {  
        case 'a':
            vowel = true;
        break;        
        case 'e':
            vowel = true;   
        break;    
        case 'i':
            vowel = true;
        break;    
        case 'o':
            vowel = true;
        break;    
        case 'u':
            vowel = true;
        break;    
        case 'A':
            vowel = true;
        break;    
        case 'E':
            vowel = true;
        break;    
        case 'I':
            vowel = true;
        break;    
        case 'O':
            vowel = true;
        break;    
        case 'U':
            vowel = true;
        break;  
    }
        
        
    if (vowel == true)
        cout << "You have entered a vowel.\n";        
    else
        cout << "It is not a vowel.\n";
        
    return 0;
} 
