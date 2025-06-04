#include <bits/stdc++.h>

using namespace std;

void print(stringstream &ss) // প্যারামিটারে আসা স্ট্রিংটি রিসিভ করা হচ্ছে স্ট্রিংস্ট্রিম এবং রেফারেন্স দিয়ে।

{

    string word;

    if (ss >> word) // প্রতিবার একটি করে ওয়ার্ড নেওয়া হচ্ছে স্ট্রিংস্ট্রিম থেকে।

    {

        cout << word << endl; // ওয়ার্ডটি প্রিন্ট করা হচ্ছে।

        print(ss); // রিকারশন ফাংশনকে কল করা হচ্ছে।
    }
}

int main()

{

    string s;

    getline(cin, s); // স্ট্রিং ইনপুট নেওয়া হচ্ছে।

    stringstream ss(s); // স্ট্রিংস্ট্রিম এর মধ্যে স্ট্রিংটি দিয়ে দেওয়া হচ্ছে।

    print(ss); // ফাংশন কল করে স্ট্রিংটি দিয়ে দেওয়া হচ্ছে।

    return 0;
}
