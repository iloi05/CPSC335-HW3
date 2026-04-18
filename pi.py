def triple_pi(a, b):
    for x in range(a, b):
        for y in range(a, b):
            for z in range(a, b):
                if x**2 + y**2 == z**2:
                    return (x, y, z)
    return None

def main():
    a = 1
    b = 100
    result = triple_pi(a, b)
    if result:
        print(f"Found a Pythagorean triple for {a}-{b}: {result}")    
    else:
        print("No Pythagorean triple found in the given range.")

    a = 9
    b = 20
    result = triple_pi(a, b)
    if result:
        print(f"Found a Pythagorean triple for {a}-{b}: {result}")    
    else:        
        print("No Pythagorean triple found in the given range.")

if __name__ == "__main__":
    main()