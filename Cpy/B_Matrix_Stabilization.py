# def stabilize_matrix(n, m, matrix):
#     def get_neighbors(i, j):
#         neighbors = []
#         if i > 0:
#             neighbors.append((i - 1, j))
#         if i < n - 1:
#             neighbors.append((i + 1, j))
#         if j > 0:
#             neighbors.append((i, j - 1))
#         if j < m - 1:
#             neighbors.append((i, j + 1))
#         return neighbors
    
#     while True:
#         changed = False
        
#         # Copy the matrix to keep track of changes
#         new_matrix = [row[:] for row in matrix]
        
#         for i in range(n):
#             for j in range(m):
#                 current_value = matrix[i][j]
#                 neighbors = get_neighbors(i, j)
#                 max_neighbor_value = -1
                
#                 # Find the maximum value among neighbors
#                 for ni, nj in neighbors:
#                     if matrix[ni][nj] > max_neighbor_value:
#                         max_neighbor_value = matrix[ni][nj]
                

#                 if all(matrix[i][j] > matrix[ni][nj] for ni, nj in neighbors):
#                     new_matrix[i][j] = max_neighbor_value
#                     changed = True
        

#         matrix = new_matrix
    
#         if not changed:
#             break
    
#     return matrix

# def main():
#     import sys
#     input = sys.stdin.read
#     data = input().split()
    
#     index = 0
#     t = int(data[index])
#     index += 1
#     results = []
    
#     for _ in range(t):
#         n = int(data[index])
#         m = int(data[index + 1])
#         index += 2
        
#         matrix = []
#         for i in range(n):
#             row = list(map(int, data[index:index + m]))
#             index += m
#             matrix.append(row)
        
#         stabilized_matrix = stabilize_matrix(n, m, matrix)
#         results.append(stabilized_matrix)
    
#     for result in results:
#         for row in result:
#             print(" ".join(map(str, row)))

# if __name__ == "__main__":
#     main()
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    idx = 0
    t = int(data[idx])
    idx += 1
    
    results = []
    
    for _ in range(t):
        n = int(data[idx])
        m = int(data[idx + 1])
        idx += 2
        
        s = list(data[idx])
        idx += 1
        
        ind = list(map(int, data[idx:idx + m]))
        idx += m
        
        c = list(data[idx])
        idx += 1
        
        ui = set(ind)
        si = sorted(ui)
        
        ic = {}
        for i in range(len(si)):
            ic[si[i]] = c[i]
        
        for key in ic:
            s[key - 1] = ic[key]
        
        results.append("".join(s))
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
