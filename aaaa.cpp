#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    string s;
    cin >> s;

    int vowels = 0, consonants = 0, digits = 0;

    for (char ch : s)
    {
      if (isdigit(ch))
      {
        digits++;
      }
      else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vowels++;
      }
      else
      {
        consonants++;
      }
    }

    int boxes = (vowels + 1) / 2 + (consonants + 2) / 3 + digits;
    cout << boxes << "\n";
  }

  return 0;
}
