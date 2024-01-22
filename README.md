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

{{
19-01-2024
will start traversing complete column for row=0
At each point we have 3 path and every path cause increase in row
when row is last return that value
Store in dp but don't initialize with -1 as we can have negative values
}}

{{
20-01-2024
We need to know all subarray and sum of minimum in each subarray.
We can know that a particular index value act as smallest in how many subarray.
We calculate next smallest left and next smallest right (NSL and NSR) for that index to know count of subarrays in which that index value will be minimum.
We get NSL and NSR subtracting that from the index we are on,we can get all possible subarray after finding NSL and NSR difference from that index and product of this 2 difference,
we get number of subarray in which that index is minimum.
Do it for all index and return sum.
}}

