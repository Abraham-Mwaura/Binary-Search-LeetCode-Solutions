# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Array in pointers. Pointer math and pointer dereferencing, basics of binary search algrorithmn and it's implementation,

# Approach
<!-- Describe your approach to solving the problem. -->
1. Obtained the leftmost index, rightmost index and the middle index.
2. Checked whether the element in middle index is equal to the      target   element.
    - If test 2 is true; returned index
    - If not and Target is less that middle element, set right to 
    index mid-1
    - else, set left to index mid+1
3. Repeated step 2

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The code has a complexity of O(logn), as the iterator reduces by a factor of 2 of successive iterations.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
7.1Mb of space occupied
