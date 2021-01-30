#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

int main()
{
  char str_name[] = "Hello! How are you?";
  for(int i = 0; i < strlen(str_name); i++)
  {
    cout << char(toupper(str_name[i]));
  }

  return 0;
}