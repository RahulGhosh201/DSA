// pair with given sum
#include <stdio.h>
#include <stdlib.h>

// void soln(int *arr, int n, int *a, int *b, int key)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         // int *a=arr[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             if (key == (arr[j] + arr[i]))
//             {
//                 *a = i;
//                 *b = j;
//                 return;
//             }
//         }
//     }
// }//o(n^2)

// int compare(const void *a, const void *b)
// {
//     return (*(int *)a - *(int *)b);
// }

// void soln(int *arr, int n, int *a, int *b, int key)
// {
//     qsort(arr, n, sizeof(int), compare);
//     int left = 0;
//     int right = n - 1;
//     while (left < right)
//     {
//         int temp = arr[left] + arr[right];
//         if (temp == key)
//         {
//             *a = arr[left];
//             *b = arr[right];
//             return;
//         }
//         else if (temp < key)
//         {
//             left++;
//         }
//         else
//         {
//             right--;
//         }
//     }
// }//o(nlogn)

int main()
{
    int arr[] = {6, 8, 4, -5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = 0, b = 0;
    int key = 0;
    printf("Enter key: ");
    scanf("%d", &key);
    soln(arr, n, &a, &b, key);
    printf("The indexes are: %d, %d", a, b);
    return 0;
}