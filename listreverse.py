def reverse_list(lst):
    """Reverses the given list."""
    reverse_list = []
    for item in lst:
        reverse_list.insert(0, item)
    return reverse_list

def main():
    sample_list = [1, 2, 3, 4, 5]
    print("Original list:", sample_list)
    reversed_list = reverse_list(sample_list)
    print("Reversed list:", reversed_list)
if __name__ == "__main__":    main()