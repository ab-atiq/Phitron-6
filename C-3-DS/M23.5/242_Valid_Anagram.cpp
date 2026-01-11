// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp1, mp2;
        for(char c : s)
            mp1[c]++;
        for(char c : t)
            mp2[c]++;

        return mp1 == mp2;
    }
};




class Solution {
public:
    bool flag = true;
    bool isAnagram(string s, string t) {
        map<char, int> ss;
        map<char, int> tt;
        
        // cin >> s >> t;

        int s_len = s.length(), t_len = t.length();
        if(s_len != t_len)
        {
            return false;
        }
        
        stringstream cs_set(s);
        stringstream ct_set(t);
        char ch;

        while(cs_set >> ch)
        {
            ss[ch]++;
             
        }
        while(ct_set >> ch)
        {
            tt[ch]++;
        }
        // for(auto it = ss.begin(), it2 = tt.begin(); it != ss.end() && it2 != tt.end(); it++, it2++)
        // {
        //     if(it->first != it2->first)
        //     {
        //         flag = false;
        //     }
        //     if(it->second != it2->second)
        //     {
        //         flag = false;
        //     }
        // }
        // return flag;
        
        if(ss == tt)
        {
            return true;
        }
        else
            return false;
    }
};
/* 


*/