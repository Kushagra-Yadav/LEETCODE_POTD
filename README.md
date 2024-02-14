{{
01-02-2024
We have to get three element for each array such that max and min value have difference less than equal to k.
To get most near value for i such that difference is less than equal to k we sort vector
Now we traverse in size of three and check for 1st and 3rd element difference is less than equal to k and keep pushing in answer and at any valid index if it do not hold true we return {} 
If all element are traversed then we return answer
}}

{{
02-02-2024
We will initially have element in queue from 1 to 8
12 23 34 45 56 67 78 89 (9 skipped as 10 will not be appended as it breaks the rule of 1 difference)
check frontElement is in range inclusive so push in answer
Will pop the element find the remainder and then 
if rem <=8
check that ((frontElement*10)(rem+1)) is less than equal to high then push in queue 
after queue is empty return answer
}}

{{
03-02-2024
At every index we go and take element from that index to index+k 
every time we looks maximum till we traverse and then j-i+1 for replacing all till we traversed with maximum till traversed then  call from next index this will return an answer 
return maximum of all answers
}}


{{
04-02-2024
We make unordered_map to store element and frequency of t
Now we have left and right increasing,decreasing window size
we move right and do element frequecy increase and check that all of values in map of t are present in map of s
if any of it is less than that in of t we break then move right
when we have all values present then we decrease frequency of left and increase left 
now again we check that previous condition is satisified so we have less length else we move right 
every time we get less length we store it as best length and start as left
at end if answer was 1e9 so no string found else return substring start from l and with best length
}}


05-02-2024
{{
we have to find the element from start whose total frequency is 1
All elements are in lower case so we traverse and keep account of there frequency in vector of 26
Now we traverse string from beginning and check if at that position element frequency is 1 the particular index becomes the answer and we return.
Even after traversing string completely if we didn't found the answer return -1
}}

06-02-2024
{{
Traverse index wise then create its copy and sort the copy and push in map with key of that as sorted temp and value as at index.
Now traverse the map and push their value of key in vector of vector
return vector of vector as answer
}}



07-02-2024
{{
Will make a map of char and string such that a character will  correspond to string of that character with size as number of its occurence .
Now create a vector of pair with char and size of thar character and sort on basis of size
string ans=""
Now we traverse in vector and will see the first element of pair and append its corresponding string from map
finally return ans
}}

08-02-2024
{{
Will take square root of number,now from 1 to that root will substract the square from initial number and do calculation for the new number we get and 1+ for new number answer
will return minimum ans for the initial value 
}}


09-02-2024
{{
Sort them so that we have to check modulo one way
We maintain maxlength and index of maxlength
we create vector of prevIndex as -1 and LIS as 1
we move i from 0 to n
    we have value toAdd=0 to LIS[i] and index=-1
    We move j from i-1 to 0
       if nums[i]%nums[j]==0 and LIS[j]>toAdd
            toAdd=LIS[j] index=j
     LIS[i]+=toAdd;
     prevIndex[i]=j
     if(LIS[i]>maxLength)
         maxLength=LIS[i] index of maxLength=i

while indexofmaxLength>=0
       we push the nums[indexofmaxlength] to answer
       indexofmaxlength=prevIndex[indexofmaxlength]
  return ans
       
}}


10-02-2024
{{
Method 1 :
   Create all possible substring and store i,j that is from i to j is it palindrome or not.If palindrome increase count 
   Since memoized every substring is checked at constant time hence T.C. O(N*N)

Method 2 :
   By Tabulation we do store that for 1 length substring is it palindrome
   Then for 2 length substring is it palindrome
   L>2 we check the last indices and if they are equal they go form i+1 and j-1 (length will be less and we have all answer for lower length stored )
   Now we check that for current we got palindrome or not and increase count accordingly

Method 3:
We keep every element as center :  
                                    For odd length we calculate is it palindrome and how many palindrome will exist with it as center
                                    For even length that index and its just greater index and and how many palindrome will exist with it
}}


11-02-2024
{{
Every time we move to next row in both robot thus row value is same but column value may vary and have 9 combinations
we store answer for left robot and add cherry for right robot also if column is different as row will be same 
then we take 1st column  move for left and 3 combination for right then for 2nd of left and 3 for right again 3rd for left and 3 for right and call recursive and keep count for maxResult
finally asnwer +  maxRsult is returned
if row reaches out of bound return 0
if column reaches out of bound return 0
since i,j1,j2 are changing so memoize them 

}}



12-02-2024
{{
We will have majority element always remaining if we cancel it will other element
let's heave freq=0 then the index element is majority and increase freq else we decrease or increase freq
At then end element is majority element

}}

13-02-2024
{{
Traverse the vector and check for palindrome 
if palindrome then would have been returned else return empty string

}}


14-02-2024
{{
Divide positive and negative in two different vector and store them in order.
Now in original array insert two elements simultaneously.

}}

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

30-01-2024
First the checking of operator is performed as stoi gives error on it.
If operator so there must be 2 element for it to be valid
At the end element present will be ans.
}}

31-01-2024
Based on the concept of monotonic stack.
Traversing from end to start.
if stack is empty then initialize answer for that index as 0 and push index to stack.
if not empty check that current index temp is greater than equal to top so keep popping from stack until condition fails or stack become empty.
Now if stack is not empty than we got the temperature just greater than current so answer for that index will be difference of that index and top element of stack else if empty stack so answer will be 0.
Now push that current index to stack.
}}

