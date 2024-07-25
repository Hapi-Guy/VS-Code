# t = int(input())

# for _ in range(t):
#     n, m, k = map(int, input().split())
    
#     # Print numbers from n to k in descending order
#     for i in range(n, k - 1, -1):
#         print(i, end=" ")
    
#     # Print numbers from k-1 to m+1 in descending order
#     for i in range(k - 1, m, -1):
#         print(i, end=" ")
    
#     # Print numbers from 1 to m in ascending order
#     for i in range(1, m + 1):
#         if i == m:
#             print(i)
#         else:
#             print(i, end=" ")
def cpsolve():
    total, max_val, key = map(int, input().split())
    result = []

    # Create a list of numbers from 1 to total
    for i in range(total):
        result.append(i + 1)

    # Print numbers from total to key in descending order
    for i in range(total, key - 1, -1):
        print(i, end=" ")

    # Print numbers between key and max_val (exclusive) in ascending order if key < max_val
    if key < max_val:
        for i in range(key + 1, max_val):
            print(i, end=" ")
    else:
        # If key >= max_val, print numbers between max_val and key (exclusive)
        for i in range(max_val + 1, key):
            print(i, end=" ")

    # Print numbers from 1 to max_val in ascending order
    for i in range(1, max_val + 1):
        print(i, end=" ")

    print()

def main():
    t = int(input())
    for _ in range(t):
        cpsolve()

if __name__ == "__main__":
    main()
