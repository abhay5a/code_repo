#include<bits/stdc++.h>
using namespace std;
#define int long long
int func(int a, int b, int c) {
    bool d = ((b - a) % c) == 0;
    return (b - a) / c + 1 - d;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, d;
        cin >> x >> y >> d;
        vector<int> a(y);
        for (int i = 0; i < y; ++i) {
            cin >> a[i];
        }
        int init = 0;
        if (a[0] != 1) {
            init = 1;
            a.insert(a.begin(), 1);
        }
        a.push_back(x + 1);
        x = a.size();
        int answer = 0;
        for (int i = 1; i < x; ++i) {
            answer += func(a[i-1], a[i], d);
        }
        int a2 = answer;
        int new_answer = answer;
        for (int i = 1; i < x-1; ++i) {
            int cur = func(a[i-1], a[i+1], d) - func(a[i-1], a[i], d) - func(a[i], a[i+1], d);
            new_answer = a2 + cur;
            answer = min(answer, new_answer);
        }
        int c = 0;
        for (int i = 1; i < x - 1; ++i) {
            int cur = func(a[i-1], a[i+1], d) - func(a[i-1], a[i], d) - func(a[i], a[i+1], d);
            new_answer = a2 + cur;
            if (new_answer == answer) c += 1;
        }
        if (answer == a2 && init == 0) {
            c += 1;
        }
        cout << answer << " " << c << endl;
    }

    return 0;
}