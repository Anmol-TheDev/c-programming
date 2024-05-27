#include<stdio.h>
// Function to calculate the number of ways to climb stairs with memoization
int stair(int num, int memo[]) {
    if (num <= 2) return num;

    if (memo[num] != -1) {
        return memo[num];
    }

    memo[num] = stair(num - 1, memo) + stair(num - 2, memo) + stair(num - 3, memo);

    return memo[num];
}
t
int main() {
    int num;
    printf("Enter the number of stairs: ");
    scanf("%d", &num);

    int memo[num + 1];
    for (int i = 0; i <= num; i++) {
        memo[i] = -1;
    }

    printf("%d", stair(num, memo));
    return 0;
}
