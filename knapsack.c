#include <stdio.h>
int n, m;
struct Item
{
    char id;
    int profit;
    int weight;
    double x;
};
struct Item item[100];
double itemAmount[100] = {0.0};

void input_items()
{
    for (int i = 0; i < n; i++)
    {
        item[i].id = (char)(65 + i);
        printf("\nFor item %c :\n", item[i].id);

        printf("Enter the profit : ");
        scanf("%d", &item[i].profit);

        printf("\nEnter the weight : ");
        scanf("%d", &item[i].weight);

        item[i].x = item[i].profit / item[i].weight;
    }
}

void merge_items(int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    struct Item b[high - low + 1];

    while (i <= mid && j <= high)
    {
        if (item[i].x >= item[j].x)
        {
            b[k++] = item[i++];
        }
        else
        {
            b[k++] = item[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = item[i++];
    }
    while (j <= high)
    {
        b[k++] = item[j++];
    }
    k = 0;
    for (int a = low; a <= high; a++)
    {
        item[a] = b[k++];
    }
}

void mergeSort_items(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort_items(low, mid);
        mergeSort_items(mid + 1, high);
        merge_items(low, mid, high);
    }
}

void fractional_Knapsack()
{
    int u = m;
    for (int i = 0; i < n; i++)
    {
        if (u >= item[i].weight)
        {
            u = u - item[i].weight;
            itemAmount[i] = 1.0;
        }
        else
        {
            itemAmount[i] = (double)u / item[i].weight;
            break;
        }
    }
}

void calculate_Profit()
{
    double p = 0.0;
    for (int i = 0; i < n; i++)
    {
        p = p + (item[i].profit * itemAmount[i]);
    }
    printf("\n\nThe total profit is Rs : %lf", p);
}

void main()
{
    printf("\n\n ------- : FRACTIONAL KNAPSACK : ------- \n\n");
    printf("\nEnter the number of items : ");
    scanf("%d", &n);
    printf("\nEnter the knapsack size : ");
    scanf("%d", &m);

    input_items();
    mergeSort_items(0, n - 1);
    fractional_Knapsack();
    calculate_Profit();
}