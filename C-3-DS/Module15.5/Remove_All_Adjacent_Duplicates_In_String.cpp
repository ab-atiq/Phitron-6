class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;

        // Iterate over the string
        for (char c : s) {
            // If st has at least one character and st's top character is the same as the string's character.
            if (!st.empty() && st.top() == c) {
                // Pop a character from the st.
                st.pop();
            } else {
                // Otherwise, push that character onto the st.
                st.push(c);
            }
        }

        // Initialize a string to construct the result
        string result;
        // Pop all characters from the st and append them to the result
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        // Since the characters were added in reverse order, reverse the result to get the final result
        reverse(result.begin(), result.end());
        return result;
    }
};