# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
I thought of it as a special case of binary search where a given group of elements have a specified property which starts showing up at a given number and preceed as the elements increment till the end.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Since there is no use of array indices but the actual numbers themselves, I assigned number one as the leftmost number and the passed integer as the rightmost number in the given model number ascending list.
2. While the left number was less than the right number, I calculated the middle number and then made an API call to check whether the number is a bad version.
    -If it was a bad version I assigned the middle value as the  
    righmost element and repeated process 2 because some other bad
    models might exist on the right.

    -else, then definitely the bad models  are present on the right
     side of the array and hence asssigned
    left to be the element next to the middle element.
3. I repeated process 2 and returned the righmost element bad element as the first intance of the bad model of the car.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The code has a time complexity of O(log n) as the iterations are reduced by factor of two in each iteration.
- Space complexity:
The Memory used by the code is 5.4 Mb, I have to use long int to avoid overflow  as the variable increases in size
