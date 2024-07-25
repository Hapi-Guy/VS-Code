# # # # # from collections import Counter

# # # # # t = int(input())
# # # # # for _ in range(t):
# # # # #     n, k = map(int, input().split())
# # # # #     c = list(map(int, input().split()))
# # # # #     freq = Counter(c)
# # # # #     max_freq = max(freq.values())
# # # # #     print((max_freq - 1) // (k - 1) + 1)
# # # # def min_cards(t, test_cases):
# # # #     for case in test_cases:
# # # #         n, k = case[0], case[1]
# # # #         cards = case[2]

# # # #         # Count the frequency of each number
# # # #         count = {}
# # # #         for card in cards:
# # # #             if card not in count:
# # # #                 count[card] = 1
# # # #             else:
# # # #                 count[card] += 1

# # # #         # Calculate the number of operations needed for each number
# # # #         operations = 0
# # # #         for num in count.values():
# # # #             operations += (num // k)

# # # #         # Calculate the total number of cards remaining
# # # #         total_remaining = n - (operations * k)

# # # #         # Output the minimum number of cards remaining
# # # #         print(total_remaining)

# # # # # Example input
# # # # test_cases = [
# # # #     (5, 3, [4, 1, 1, 4, 4]),
# # # #     (1, 10, [7]),
# # # #     (7, 2, [4, 2, 1, 100, 5, 2, 3]),
# # # #     (10, 4, [1, 1, 1, 1, 1, 1, 1, 1, 1, 1]),
# # # #     (5, 2, [3, 8, 1, 48, 7]),
# # # #     (6, 2, [10, 20, 30, 10, 20, 40]),
# # # #     (6, 3, [10, 20, 30, 10, 20, 40])
# # # # ]
# # # # min_cards(len(test_cases), test_cases)
# # # def min_cards(t, test_cases):
# # #     for case in test_cases:
# # #         n, k = case[0], case[1]
# # #         cards = case[2]

# # #         # Count the frequency of each number
# # #         count = {}
# # #         for card in cards:
# # #             if card not in count:
# # #                 count[card] = 1
# # #             else:
# # #                 count[card] += 1

# # #         # Calculate the total number of operations needed for each number
# # #         operations = 0
# # #         for num in count.values():
# # #             operations += (num // k)

# # #         # Calculate the total number of cards remaining after all operations
# # #         total_remaining = n - operations

# # #         # Output the minimum number of cards remaining
# # #         print(total_remaining)

# # # # Input the number of test cases
# # # t = int(input())

# # # test_cases = []
# # # for _ in range(t):
# # #     n, k = map(int, input().split())
# # #     cards = list(map(int, input().split()))
# # #     test_cases.append((n, k, cards))

# # # # Call the function to find the minimum number of cards remaining for each test case
# # # min_cards(t, test_cases)
# # from collections import Counter

# # def min_cards(t, test_cases):
# #     for case in test_cases:
# #         n, k = case[0], case[1]
# #         cards = case[2]

# #         # Count the frequency of each number
# #         count = Counter(cards)

# #         # Calculate the total number of operations needed for each number
# #         operations = 0
# #         for num in count.values():
# #             operations += (num - 1) // (k - 1)

# #         # Calculate the total number of cards remaining after all operations
# #         total_remaining = n - operations

# #         # Output the minimum number of cards remaining
# #         print(total_remaining)

# # # Input the number of test cases
# # t = int(input())

# # test_cases = []
# # for _ in range(t):
# #     n, k = map(int, input().split())
# #     cards = list(map(int, input().split()))
# #     test_cases.append((n, k, cards))

# # # Call the function to find the minimum number of cards remaining for each test case
# # min_cards(t, test_cases)
# def solve(t, test_cases):
#     # For each test case
#     for i in range(t):
#         x = test_cases[i]
#         # The maximum possible value of gcd(x, y) + y is when y = x - 1
#         # Because gcd(x, x - 1) = 1 and 1 + (x - 1) = x
#         print(x - 1)

# # Number of test cases
# t = 7
# # Test cases
# test_cases = [10, 7, 21, 100, 2, 1000, 6]

# solve(t, test_cases)
def solve(t, test_cases):
    # For each test case
    for i in range(t):
        x = test_cases[i]
        # If x > 2, the maximum gcd is achieved when y = x - 2
        if x > 2:
            print(x - 2)
        # If x = 2, the only possible value of y is 1
        else:
            print(1)

# Number of test cases
t = 7
# Test cases
test_cases = [10, 7, 21, 100, 2, 1000, 6]

solve(t, test_cases)
