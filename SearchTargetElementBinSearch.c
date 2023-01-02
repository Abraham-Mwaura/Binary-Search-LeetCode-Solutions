#include <stdio.h>

    int search(int *nums, int numsSize, int target)
    {
        int left = 0, right = numsSize - 1, mid = 0;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (*(nums + mid) == target)
            {
                return mid;
            }
            else if (target < *(nums + mid))
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return -1;
    }

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int numSize = 5;
    int target = 5;
    int *p = nums;
    printf("%d", search(p, numSize, target));
    return 0;
}
