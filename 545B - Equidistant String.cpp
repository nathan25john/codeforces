#include <iostream>
using namespace std;
int main() {
  string s, t, p;
  int c = 0;
  cin >> s >> t;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == t[i]) {
      p.push_back(s[i]);
    } else {
      p.push_back((c % 2 ? s[i] : t[i]));
      ++c;
    }
  }
  if (c % 2) p = "impossible";
  cout << p;
}
