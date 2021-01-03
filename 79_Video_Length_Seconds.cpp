#include<iostream>
using namespace std;

int main()
{
	char video_length_input[20];
	int minutes[10], seconds[10], minutes_in_sec=0;
	int colon_location, total_seconds, seconds_input, minutes_multiplier = 60, seconds_multiplier = 1;
	cout << "Enter the Video Length (minutes:seconds) : ";
	cin >> video_length_input;
	
	for (int i = 0; video_length_input[i] != '\0'; i++)
	{
		if (video_length_input[i] == ':')
		{
			colon_location = i;
			break;
		}
	}
	
	for (int i = colon_location - 1; i >= 0 ; i--)
	{
		minutes[i] = int(video_length_input[i]) - 48; 
		minutes_in_sec += minutes[i] * minutes_multiplier;
		minutes_multiplier *= 10;
	}
	
	for (int i = colon_location + 2, j=0; video_length_input[i] != ':'; i--, j++)
	{
		seconds[j] = int(video_length_input[i]) - 48;
		seconds_input += seconds[j] * seconds_multiplier;
		seconds_multiplier *= 10;
	}
	
	total_seconds = minutes_in_sec + seconds_input;
	cout << "Total Seconds in the Video are : " << total_seconds;
	
	return 0;
}
