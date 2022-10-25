if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().strip().split()))[:n]
    arr.sort()
    for i in range(2,n):
        if arr[n-1]==arr[n-i] and arr[n-1]!=arr[n-i-1]:
            print(arr[n-i-1])
            break
        elif arr[n-1]!=arr[n-2]:
            print(arr[n-2])
            break
