#include<bits/stdc++.h>
using namespace std;

void process(vector<string>& quer) {
    vector<int> array;
    vector<vector<int>> change_history;
    vector<int> distinct;

    for (const string& query : quer) {
        istringstream ss(query);
        string op;
        ss >> op;
        if (op == "+") {
            int x;
            ss >> x;
            change_history.push_back(array);
            array.push_back(x);
        } else if (op == "-") {
            int k;
            ss >> k;
            change_history.push_back(array);
            array.erase(array.end() - k, array.end());
        } else if (op == "!") {
            array = change_history.back();
            change_history.pop_back();
        } else if (op == "?") {
            set<int> distinct(array.begin(), array.end());
            cout << distinct.size() << endl;
        }
    }
}

int main() {
    int q;
    cin >> q;
    cin.ignore();

    vector<string> quer;
    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);
        quer.push_back(query);
    }

    process(quer);

    return 0;
}