#include <stdio.h>
#include <math.h>

int countWays(int amount)
{
    int max_coin_value = (int)pow(amount, 1.0 / 3); // Maximum coin value available in Cubeland
    int dp[amount + 1];                             // Dynamic programming array
    int i, j;

    // Base case: There is 1 way to pay 0 cubes (using no coins)
    dp[0] = 1;

    // Initialize the rest of the array to 0
    for (i = 1; i <= amount; i++)
    {
        dp[i] = 0;
    }

    // Iterate over the coin values
    for (i = 1; i <= max_coin_value; i++)
    {
        int cube = pow(i, 3);

        // Compute the number of ways to pay the current amount
        // using the current coin value
        for (j = cube; j <= amount; j++)
        {
            dp[j] += dp[j - cube];
        }
    }

    return dp[amount];
}

int main()
{
    int amount, ways;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    ways = countWays(amount);
    printf("The number of ways to pay %d cubes: %d\n", amount, ways);

    return 0;
}
