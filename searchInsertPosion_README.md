# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
On first glance the problem was quite closely related to the find target elemet in an array using binary search, with an exception of not returning -1 but return the position to be if part of array.
I figured out that I just needed to populate my variables tree on successive iterations and manipulate the last variables before exiting the while loop
# Approach
<!-- Describe your approach to solving the problem. -->
1. Assign leftmost=0, righmost index= numSize-1
2. while left<=right:
    2.1 calculate middle= (left+right)/2
    2.2 if middle value is equal to target
           return the middle value
    2.3 else if the middle value is less than target
         assign left as the value after middle
    2.4 else
        assign right the value before middle value
3. Upon completion of the the while loop without getting the middle value return the value after right, this is where the element would appear in the array if inserted.



# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The algorithmn has a time complexity of O(log n) as the value of the iterator decrements with mutiples of 2 upon successive iterations
This boils down to a runtime of 7ms
- Space complexity:
-The code has a space complexity of 7Mb
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
