
N = int(input())  # Read the number of elements
arr = list(map(int, input().split()))  


even_count = sum(1 for x in arr if x % 2 == 0)
odd_count = N - even_count  


print(even_count, odd_count)
