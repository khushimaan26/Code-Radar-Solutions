# Read input
N = int(input())  # Read the number of elements
arr = list(map(int, input().split()))  # Read the array elements

# Count evens and odds
even_count = sum(1 for x in arr if x % 2 == 0)
odd_count = N - even_count  # Remaining are odd

# Print result
print(even_count, odd_count)
