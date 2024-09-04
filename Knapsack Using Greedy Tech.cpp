#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int value, weight;
};

bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

int main() {
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    Item arr[n];
    cout << "Enter the weight capacity of the knapsack: ";
    cin >> W;

    for (int i = 0; i < n; i++) {
        cout << "Enter value and weight of item " << i + 1 << ": ";
        cin >> arr[i].value >> arr[i].weight;
    }

    sort(arr, arr + n, cmp);

    double totalValue = 0.0;
    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= W) {
            W -= arr[i].weight;
            totalValue += arr[i].value;
        } else {
            totalValue += arr[i].value * ((double)W / arr[i].weight);
            break;
        }
    }

    cout << "Maximum value in Knapsack = " << totalValue;
    return 0;
}
