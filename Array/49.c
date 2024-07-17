// maximum number of 1s
#include <stdio.h>

int soln(int arr[][5])
{
    int ans = 0;
    int maxCount = 0;
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int arr[5][5] = {{0, 1, 0, 1, 1},
                     {1, 1, 1, 1, 1},
                     {1, 0, 0, 1, 0},
                     {0, 0, 0, 0, 0},
                     {1, 0, 0, 0, 1}};
    int ans = soln(arr);
    printf("Ans: %d", ans);
    return 0;
}