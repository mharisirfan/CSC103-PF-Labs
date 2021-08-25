#include <stdio.h>
#include <stdlib.h>

#define ASCENDING 0
#define DESCENDING 1

#define ARRAY_SIZE 50

int find_max(int * ptr_array, int size);
int find_min(int * ptr_array, int size);
void selection_sort(int * ptr_array, int size, int order);

int main()
{
    int num_array[ARRAY_SIZE];  /// Declare an integer array

    int * ptr_ar = &num_array[0];   /// A pointer to the start of the array

    for(int i =0; i < ARRAY_SIZE; i++)
    {
      num_array[i] = rand()%100;  /// Initialize the array with random numbers in range 0 to 99
      printf("%d ", num_array[i]);/// and print it.
    }

    int mx_idx = find_max(ptr_ar, ARRAY_SIZE);  /// Print the maximum value and its index
    printf("\nThe maximum number is %d at index %d \n", num_array[mx_idx], mx_idx);

    int mn_idx = find_min(ptr_ar, ARRAY_SIZE);  /// Print the minimum value and its index
    printf("\nThe minimum number is %d at index %d \n", num_array[mn_idx], mn_idx);

    selection_sort(num_array, ARRAY_SIZE, ASCENDING);   /// Sort the array using Selection Sort
    for(int i=0; i<ARRAY_SIZE; i++)                     /// Print the sorted array
        printf("%d ", num_array[i]);

    return 0;
}

int find_max(int * ptr_array, int size)
{
    int max_val = 0;
    int max_idx = 0;

    for(int i=0; i<size; i++)
    {

        if(*(ptr_array+i) > max_val)
        {
            max_val = *(ptr_array+i);
            max_idx = i;
        }
    }

    return(max_idx);

}
int find_min(int * ptr_array, int size)
{
    return 0;
}
void selection_sort(int * ptr_array, int size, int order)
{

}
