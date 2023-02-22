n = int(input())
times = list(map(int, input().split()))
 
times.sort() 
num_not_disappointed = 0 
total_time = 0 
 
for i in range(n):
    if total_time <= times[i]: 
        num_not_disappointed += 1
        total_time += times[i]
 
print(num_not_disappointed)