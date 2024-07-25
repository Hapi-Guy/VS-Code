import math
import sys
input = sys.stdin.read

def solve(t, cases):
    results = []
    for case in cases:
        n, a, b, c = case
        tot = sum(a)
        required = math.ceil(tot / 3)
        
        def can_split(v):
            current_sum = 0
            for i in range(n):
                current_sum += v[i]
                if current_sum >= required:
                    return i + 1
            return -1
        
        for perm in [(a, b, c), (a, c, b), (b, a, c), (b, c, a), (c, a, b), (c, b, a)]:
            a_slice = can_split(perm[0])
            if a_slice != -1:
                b_slice = can_split(perm[1][a_slice:])
                if b_slice != -1:
                    c_slice = can_split(perm[2][a_slice + b_slice:])
                    if c_slice != -1:
                        la, ra = 1, a_slice
                        lb, rb = a_slice + 1, a_slice + b_slice
                        lc, rc = a_slice + b_slice + 1, a_slice + b_slice + c_slice
                        results.append((la, ra, lb, rb, lc, rc))
                        break
        else:
            results.append(-1)
    
    return results

def main():
    input_data = input().split()
    idx = 0
    t = int(input_data[idx])
    idx += 1
    cases = []
    for _ in range(t):
        n = int(input_data[idx])
        idx += 1
        a = list(map(int, input_data[idx:idx + n]))
        idx += n
        b = list(map(int, input_data[idx:idx + n]))
        idx += n
        c = list(map(int, input_data[idx:idx + n]))
        idx += n
        cases.append((n, a, b, c))
    
    results = solve(t, cases)
    for result in results:
        if result == -1:
            print(result)
        else:
            print(' '.join(map(str, result)))

if __name__ == "__main__":
    main()
