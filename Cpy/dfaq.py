# import math
# import sys
# input = sys.stdin.read

# def solve(t, cases):
#     results = []
#     for case in cases:
#         n, a, b, c = case
#         tot = sum(a)
#         required = math.ceil(tot / 3)
        
#         def can_split(v):
#             current_sum = 0
#             for i in range(n):
#                 current_sum += v[i]
#                 if current_sum >= required:
#                     return i + 1
#             return -1
        
#         for perm in [(a, b, c), (a, c, b), (b, a, c), (b, c, a), (c, a, b), (c, b, a)]:
#             a_slice = can_split(perm[0])
#             if a_slice != -1:
#                 b_slice = can_split(perm[1][a_slice:])
#                 if b_slice != -1:
#                     c_slice = can_split(perm[2][a_slice + b_slice:])
#                     if c_slice != -1:
#                         la, ra = 1, a_slice
#                         lb, rb = a_slice + 1, a_slice + b_slice
#                         lc, rc = a_slice + b_slice + 1, a_slice + b_slice + c_slice
#                         results.append((la, ra, lb, rb, lc, rc))
#                         break
#         else:
#             results.append(-1)
    
#     return results

# def main():
#     input_data = input().split()
#     idx = 0
#     t = int(input_data[idx])
#     idx += 1
#     cases = []
#     for _ in range(t):
#         n = int(input_data[idx])
#         idx += 1
#         a = list(map(int, input_data[idx:idx + n]))
#         idx += n
#         b = list(map(int, input_data[idx:idx + n]))
#         idx += n
#         c = list(map(int, input_data[idx:idx + n]))
#         idx += n
#         cases.append((n, a, b, c))
    
#     results = solve(t, cases)
#     for result in results:
#         if result == -1:
#             print(result)
#         else:
#             print(' '.join(map(str, result)))

# if __name__ == "__main__":
#     main()
# t = int(input())
# for _ in range(t):
#     casserole_length, initial_pieces, final_pieces = map(int, input().split())
#     monk_actions = input()
#     current_piece_index = initial_pieces - 1
#     wasted_pieces = 0
#     failed_operations = 0
    
#     for action in monk_actions:
#         if action == 'L':
#             current_piece_index = initial_pieces
#         elif action == 'W':
#             if current_piece_index <= 0:
#                 wasted_pieces += 1
#         else:
#             if current_piece_index <= 0:
#                 failed_operations += 1
#         current_piece_index -= 1
    
#     if wasted_pieces > final_pieces:
#         failed_operations += 1
    
#     print("NO" if failed_operations != 0 else "YES")

# # Read the number of test cases
# number_of_test_cases = int(input())

# # Process each test case
# for _ in range(number_of_test_cases):
#     # Read the values for casserole_length, initial_pieces, and final_pieces
#     casserole_length, initial_pieces, final_pieces = map(int, input().split())
    
#     # Read the monk actions
#     monk_actions = input()
    
#     # Initialize the current piece index, wasted pieces, and failed operations
#     current_piece_index = initial_pieces - 1
#     wasted_pieces = 0
#     failed_operations = 0
    
#     # Process each action
#     for action in monk_actions:
#         if action == 'L':
#             current_piece_index = initial_pieces
#         elif action == 'W':
#             if current_piece_index <= 0:
#                 wasted_pieces += 1
#         else:
#             if current_piece_index <= 0:
#                 failed_operations += 1
        
#         # Decrease the current piece index
#         current_piece_index -= 1
    
#     # Check if wasted pieces exceed final pieces
#     if wasted_pieces > final_pieces:
#         failed_operations += 1
    
#     # Output the result
#     if failed_operations != 0:
#         print("NO")
#     else:
#         print("YES")


# # Read the number of test cases
# t = int(input())

# # Process each test case
# for _ in range(t):
#     # Read the values for casserole_length, initial_pieces, and final_pieces
#     cl, ip, fp = map(int, input().split())
    
#     # Read the monk actions
#     ma = input()
    
#     # Initialize the current piece index, wasted pieces, and failed operations
#     cpi = ip - 1
#     wp = 0
#     fo = 0
    
#     # Process each action
#     for a in ma:
#         if a == 'L':
#             cpi = ip
#         elif a == 'W':
#             if cpi <= 0:
#                 wp += 1
#         else:
#             if cpi <= 0:
#                 fo += 1
        
#         # Decrease the current piece index
#         cpi -= 1
    
#     # Check if wasted pieces exceed final pieces
#     if wp > fp:
#         fo += 1
    
#     # Output the result
#     print("NO" if fo != 0 else "YES")



t = int(input())

for _ in range(t):
    cl,ip,fp=map(int,input().split())
    ma=input()
    cpi=ip-1
    wp=0
    fo=0
    for a in ma:
        if a=='L':
            cpi=ip
        elif a=='W':
            if cpi<=0:
                wp+=1
        else:
            if cpi<=0:
                fo+=1
        cpi-=1
    if wp>fp:
        fo+=1
    print("NO" if fo != 0 else "YES")
