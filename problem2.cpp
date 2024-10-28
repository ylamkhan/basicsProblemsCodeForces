#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost_individual = n * a;
    int cost_m_only = ((n + m - 1) / m) * b;
    int cost_mixed = (n / m) * b + (n % m) * a;

    int min_cost = min({cost_individual, cost_m_only, cost_mixed});

    cout << min_cost << endl;
    return 0;
}
