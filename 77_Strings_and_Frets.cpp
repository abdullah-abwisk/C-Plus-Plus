#include<iostream>
#include<string>

using namespace std;

void note_name(int, int);

int main()
{
	int string_num, fret;
	cout << "This program will give you the note on the Specific string and fret";
	cout << "\nEnter the String Number (1-6): ";
	cin >> string_num;
	cout << "Enter Fret Number (1-15):";
	cin >> fret;
	
	note_name(string_num, fret);
	
return 0;
}

void note_name(int string_num, int fret)
{
	string E_string[16] = {"E","F","F# or Gb","G","G# or Ab","A","A# or Bb","B","C","C# or Db","D","D# or Eb","E","F","F# or Gb","G"} ,B_string[16] = {"B","C","C# or Db","D","D# or Eb","E","F","F# or Gb","G","G# or Ab","A","A# or Bb","B","C","C# or Db","D"}, G_string[16] = {"G","G# or Ab","A","A# or Bb","B","C","C# or Db","D","D# or Eb","E","F","F# or Gb","G","G# or Ab","A","A# or Bb"}, D_string[16] = {"D","D# or Eb","E","F","F# or Gb","G","G# or Ab","A","A# or Bb","B","C","C# or Db","D","D# or Eb","E","F"}, A_string[16] = {"A","A# or Bb","B","C","C# or Db","D","D# or Eb","E","F","F# or Gb","G","G# or Ab","A","A# or Bb","B","C"};
	switch(string_num)
	{
		case 1:
		case 6:
			cout << "The note on the " << string_num << " string and " << fret << " fret is " << E_string[fret];
		break;
		case 2:
			cout << "The note on the " << string_num << " string and " << fret << " fret is " << B_string[fret];
		break;
		case 3:
			cout << "The note on the " << string_num << " string and " << fret << " fret is " << G_string[fret];
		break;
		case 4:
			cout << "The note on the " << string_num << " string and " << fret << " fret is " << D_string[fret];
		break;
		case 5:
			cout << "The note on the " << string_num << " string and " << fret << " fret is " << A_string[fret];
		break;
		default:
			cout << "INVALID ENTRY!";
	}
}
