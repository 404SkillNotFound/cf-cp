cf() {
    mkdir -p ~/cp/codeforces/$1
    cd ~/cp/codeforces/$1

    [ -f main.cpp ] || cat > main.cpp << 'EOF'
#include <bits/stdc++.h>
using namespace std;

void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
EOF

    code .
}
