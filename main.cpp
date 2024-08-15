#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

double m, a, b;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> m >> a >> b;
  while (0 != m || 0 != a || 0 != b) {
    auto h1 = (m * 3600) / a;
    auto h2 = (m * 3600) / b;
    auto d = h1 - h2;

    auto H = (ll)(d / 3600);
    d -= H * 3600;
    auto M = (ll)(d / 60);
    d -= M * 60;
    auto S = (ll)(round(d));

    cout << H << ':' << setw(2) << setfill('0') << M << ':' << setw(2)
         << setfill('0') << S << '\n';

    cin >> m >> a >> b;
  }

  return 0;
}