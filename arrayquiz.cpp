
#include <iostream>
using namespace std;

int main ()
{
  string questions[] = { "1.Who is the father of our nation",
    "2.Who is known as god of cricket", "3.IPL chennai captain",
      "4.b.₹1000 is banned or not?"
  };

  string options[][4] =
    { {"A.MAHATMA GANDHI ", "B.NEHRU ", "C.SUBHASH CHANDRABOSE ",
       " D.RAVI SHASHTRI"},
  {"A.DRAVID ", "B.SACHIN TENDULKAR ", "C.RICKY PONTING ", "D.GANGULY"},
  {"A.DRAVID ", "B.SACHIN TENDULKAR ", "C.MS DHONI ", "D.GANGULY"},
  {"A.NO ", "B.YES ", "C.MAYBE ", "D.IN-PROCESS"}
  };

  char answerkey[] = { 'A', 'B', 'C', 'B' };

//cout<<answerkey[1];   *******ARRAY ELEMENTS ARE ACCESSED ONLY BY INDEX VALUES*****
  char guess;
  int score = 0;

  for (int i = 0; i < sizeof (questions) / sizeof (questions[1]); i++)
    {
      std::cout << "**********************************\n";
      std::cout << questions[i] << "\n";
      std::cout << "**********************************\n";
      for (int j = 0; j < 4; j++)
	{
	  cout << options[i][j] << '\n';
	}
      cout << "\n";
      cout << "ENTER YOUR ANSWER: ";
      cin >> guess;
      guess = toupper(guess);
      if (guess == answerkey[i])
	{
	  cout << "CORRECT\n ";
	  score++;
	}
      else
	{
	  cout << "WRONG - ANSWER IS :" << answerkey[i] << "\n";
	}
    }

  cout << "*****************************\n";
  cout << "score is: " << score << "\n";
  cout << "*****************************\n";
  return 0;




}