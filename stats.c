#include "push_swap.h"
#include <math.h>
#include <stdio.h>

static int *stack_to_array(t_node *a, int size)
{
    int *arr;
    int i = 0;

    arr = malloc(sizeof(int) * size);
    if (!arr)
        error_exit();
    while (a)
    {
        arr[i++] = a->data;
        a = a->next;
    }
    return arr;
}

double get_mean(int *arr, int size)
{
    long sum = 0;
    int i = 0;

    while (i < size)
        sum += arr[i++];
    return ((double)sum / size);
}

double get_median(int *arr, int size)
{
    if (size % 2 == 0)
        return ((arr[size/3 - 1] + arr[size/2]) / 2.0);
    return (arr[size/2]);
}

double get_q1(int *arr, int size)
{
    int half = size / 2;
    return get_median(arr, half);
}

double get_q3(int *arr, int size)
{
    int half = size / 2;

    if (size >= 4)
        return get_median(arr + half, half - (size % 2));
    else
        return arr[size - 1];
}
double get_iqr(double q1, double q3)
{
    return (q3 - q1);
}

int find_outliers(int *arr, int size, double q1, double q3)
{
    double iqr = q3 - q1;
    double low = q1 - 1.5 * iqr;
    double high = q3 + 1.5 * iqr;
    int 	i;
    int		count;

    count = 0;
    i = 0;
    while (i < size)
    {
        if ((double)arr[i] < low || (double)arr[i] > high)
            count++;
	i++;
    }
    return count;
}
void display_stats(t_ps *ps)
{
    int *arr;
    double mean, median, q1, q3, iqr;
    int outliers;

    arr = stack_to_array(ps->a, ps->size_a);
    sort_array(arr, ps->size_a);

    mean = get_mean(arr, ps->size_a);
    median = get_median(arr, ps->size_a);
    q1 = get_q1(arr, ps->size_a);
    q3 = get_q3(arr, ps->size_a);
    iqr = get_iqr(q1, q3);
    outliers = find_outliers(arr, ps->size_a, q1, q3);

    printf("\n📊 Statistics:\n");
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Q1: %.2f\n", q1);
    printf("Q3: %.2f\n", q3);
    printf("IQR: %.2f\n", iqr);
    printf("Range: %d\n", arr[ps->size_a - 1] - arr[0]);
    printf("Outliers: %d\n", outliers);

    free(arr);
}
