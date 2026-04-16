def difference(Left, Right):
    S = []
    for l in Left:
        if l not in Right:
            S.append(l)
    for r in Right:
        if r not in Left:
            S.append(r)
    return S

def main():
    Left = [1, 2, 3, 4, 5]
    Right = [1, 2, 0, 4, 5, 6]
    result = difference(Left, Right)
    print(result)

if __name__ == "__main__":
    main()
