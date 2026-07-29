#include <bits/stdc++.h>

using namespace std;

int main()
{
    int currentStrength, numberOfDragons;
    cin >> currentStrength >> numberOfDragons;

    vector<pair<int, int>> dragons;

    for (int i = 0; i < numberOfDragons; i++)
    {
        int dragonStrength, bonusStrength;
        cin >> dragonStrength >> bonusStrength;
        dragons.push_back({dragonStrength, bonusStrength});
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < numberOfDragons; i++)
    {
        if (currentStrength <= dragons[i].first)
        {
            cout << "NO";
            return 0;
        }

        currentStrength += dragons[i].second;
    }

    cout << "YES";

    return 0;
}