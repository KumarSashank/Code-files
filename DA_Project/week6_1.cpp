#include <iostream>
using namespace std;

int main()
{
    int capacity, no_items, cur_weight, item;
    int used[10];
    float total_profit;
    int i;
    int weight[10];
    int value[10];

    cout << "Enter the capacity of knapsack: ";
    cin >> capacity;

    cout << "Enter the number of items: ";
    cin >> no_items;

    cout << "Enter the weight and value of " << no_items << "item: ";
    for (i = 0; i < no_items; i++)
    {
        cout << "Weight[" << i << "] = :\t", i;
        cin >> weight[i];
        cout << "Value[" << i << "]:\t";
        cin >> value[i];
    }

    for (i = 0; i < no_items; ++i)
        used[i] = 0;

    cur_weight = capacity;
    while (cur_weight > 0)
    {
        item = -1;
        for (i = 0; i < no_items; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ((float)value[i] / weight[i] > (float)value[item] / weight[item])))
                item = i;
        used[item] = 1;
        cur_weight -= weight[item];
        total_profit += value[item];
        if (cur_weight >= 0)
            cout << "Added object " << value[item] << "( Rs., " << value[item] << "Kg) completely in the bag. Space left: " << cur_weight << ".\n";
        else
        {
            int item_percent = (int)((1 + (float)cur_weight / weight[item]) * 100);
            cout << "Added " << item_percent << "% (" << value[item] << " Rs., " << weight[item] << "Kg) of object " << item + 1 << " in the bag.\n";
            total_profit -= value[item];
            total_profit += (1 + (float)cur_weight / weight[item]) * value[item];
        }
    }

    cout << "Filled the bag with objects worth " << total_profit << " Rs.\n";
}