#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    int Q;
    cin >> Q;

    list<string> playlist;
    auto it = playlist.begin(); // Iterator for the list

    while (Q--)
    {
        string command;
        cin >> command;
        if (command == "ADD")
        {
            int position;
            string song_name;
            cin >> position >> song_name;

            int playlist_size = playlist.size();
            if (position < 0 || position > playlist_size)
            {
                cout << "Invalid" << endl;
            }
            else
            {
                it = playlist.begin();
                for (int i = 0; i < position; i++)
                {
                    it++;
                }
                playlist.insert(it, song_name);
            }
        }
        else if (command == "DELETE")
        {
            int position;
            cin >> position;
            int playlist_size = playlist.size();
            if (position < 0 || position >= playlist_size)
            {
                cout << "Invalid" << endl;
            }
            else
            {
                it = playlist.begin();
                for (int i = 0; i < position; i++)
                {
                    it++;
                }
                playlist.erase(it);
            }
        }
        else if (command == "PRINT")
        {
            if (playlist.empty())
            {
                cout << "EMPTY" << endl;
            }
            else
            {
                for (const string &song : playlist)
                {
                    cout << song << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
