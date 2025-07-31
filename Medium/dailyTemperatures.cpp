class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    stack<pair<int, int>> _stack;
    vector<int> result(temperatures.size(), 0);

    for (int i = 0; i < temperatures.size(); i++) {
        while (!_stack.empty() && temperatures[i] > _stack.top().first) {
            auto [temp, index] = _stack.top();
            _stack.pop();
            result[index] = i - index;
        }
        _stack.push({temperatures[i], i});
    }
    return result;
}

};
