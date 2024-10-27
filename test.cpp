#include <iostream>
#include <vector>

using namespace std;

vector<int> tableParticp(const vector<int>& input, int n, int k)
{
    vector<int> result;
    for (int i = 0; i < n; ++i)
    {
        if (k + input[i] <= 5)
            result.push_back(input[i]);
    }
    return result;
}

void showResult(const vector<int>& result)
{
    cout << result.size() / 3 << endl;
}

int main()
{
    int n, k;
    vector<int> input;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        int d;
        cin >> d;
        input.push_back(d);
    }
    showResult(tableParticp(input, n, k));
    return 0;
}
