from collections import defaultdict

def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        s = list(input())
        ind = list(map(int, input().split()))
        c = list(input())
        ui = sorted(set(ind))
        c.sort()
        im = {ui[i]: c[i] for i in range(len(ui))}
        for index, char in im.items():
            s[index - 1] = char
        print(''.join(s))

if __name__ == "__main__":
    main()