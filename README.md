{{
16-01-2024
Maintained map for checking presence of element and its index ,that is,where it is stored in a vector.
For removal,find the element index and swap with last element.
Now the last is popped and removed from map as well.
Since last was swapped so its index is updated.
}}

{{
17-01-2024
Maintained a map to store frequency of each element
Took a set and checked that if such frequency existed so return false else true
}}

{{
18-01-2024
Maintain a sum from 0 and map for storing frequency count
Iterate over the array and :
first add index value to sum
second if sum==goal increase count
check that (sum-goal) exist in map sum = 1 1 2 3 4  //goal=2    subarray(0,3) and subarray=(1,3) both gives 2; map[3-2] will give 2 at index 3
if exist than ans+=map[sum-goal]
Now in the map add the current sum and increase the frequency
}}

