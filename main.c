#include <stdio.h>
#include <stdlib.h>

int test(int nums[], int array_size)
     {
         for (int i = 0; i < array_size; i++)
        {
             if(nums[i] == nums[i + 1] && nums[i + 2] == nums[i])
                 return 1;
                return 0;
        }
       return 0;

    }

int main(void)
{
    int array_size;
    int array1[] = {1, 3, 2, 1, 1};
    array_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, array_size));
    int array2[] = {1, 1, 1, 1, 2, 3};
    array_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, array_size));
    int array3[] = {3, 3, 3, 2, 2, 2, 1 };
    array_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, array_size));
}

