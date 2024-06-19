#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  string name;
  int chance = 5, player;
  cout << "\t\t\t\t\t\t\t--------------------------------\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\t|\tNUMBER GUESSING GAME \t|\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\t--------------------------------\t\t\t\t\t\n";
  cout << " Guess a number between 1 to 200 \t\t\t\t\t\t\t\t You have only 5 chance to guess the number\n_______________________________ \t\t\t\t\t\t\t\t __________________________________________";
  cout << "\n\n Enter your name = ";
  getline(cin, name);

  srand(time(0));
  int random = (rand() % 200) + 1;
  for (int i = 1; i <= 5; i++)
  {
    cout << "\n\n----------------";
    cout << "\n| Chanceleft = " << chance << " |";
    cout << "\n|                |_____";
    cout << "\n| ENTER YOUR NUMBER = ";
    cin >> player;
    cout << "-----------------------";

    if (player <= 1 || player >= 200)
    {
      break;
    }

    else if (player == random)
    {
      cout << "\n\n >> No way, you actually guessed it! High five! ";
      break;
    }
    else if (player < random)
    {
      cout << "\n\n >> Think bigger! ";
    }
    else if (player > random)
    {
      cout << "\n\n >> That's a bit high. Try a lower number. ";
    }
    chance--;
  }

  if (chance == 0)
  {
    cout << "\n\nBetter luck next time! \nThe secret code is =  " << random;
  }

  return 0;
}