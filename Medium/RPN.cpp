class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stck;
        vector<string>::iterator begin = tokens.begin();
        vector<string>::iterator end = tokens.end();
        while(begin != end)
        {
            if (*begin == "+" || *begin == "-" || *begin == "*" || *begin == "/")
            {
                int v2 = stck.top();stck.pop();
                int v1 = stck.top();stck.pop();
                if (*begin == "+")
                    stck.push(v1 + v2);
                if (*begin == "-")
                    stck.push(v1 - v2);
                if (*begin == "/")
                    stck.push(v1 / v2);
                if (*begin == "*")
                    stck.push(v1 * v2);
            }
            else
                stck.push(stoi(*begin));
            begin++;
        }
        return stck.top();
    }
    
};
