def defirence(n, nums):
    max1 =  max(nums)
    nums1 = []
    for i in range(n):
        nums1.append(nums[i])
    nums1.remove(max1)
    max2 = max(nums1)
    output= []
 
    for i in range(n):
        if nums[i] != max1:
            output.append(nums[i] - max1)
        else:
            output.append(nums[i]-max2)
    print(" ".join(map(str, output[:n])))
 
t = int(input())
for i in range(t):
    n = int(input())
    Array = list(map(int, input().split(' ')[:n]))
    defirence(n, Array)