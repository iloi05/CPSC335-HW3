
def L_or_R(left, right):
    visited = set()
    S = []
    for l in left:
        visited.add(l)
        S.append(l)
    for r in right:
        if r not in visited:
            S.append(r)
    
    return S

def main():
    left = [1, 2, 3, 4, 5]
    right = [1, 2, 0, 4, 5]
    result = L_or_R(left, right)
    print(result)

if __name__ == "__main__":
    main()