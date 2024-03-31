print("Enter the number of characters")
N = 26
if N > 26:
    print("Incorrect data")
else:
    for i in range(N, 0, -1):
        for k in range(N, i-1, -1):
            Str = chr(ord('A') + k - 1)
            print(Str, end=" ")
        print()