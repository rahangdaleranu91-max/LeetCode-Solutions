class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {

            // Opening brackets ko stack me push 
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                // Agar stack empty hai to invalid
                if (st.empty())
                    return false;

                // Top element check 
                if ((ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[')) {

                    st.pop();   // Match mila
                }
                else {
                    return false; // Match nahi mila
                }
            }
        }

        // Agar stack empty hai to valid
        return st.empty();
    }
};
