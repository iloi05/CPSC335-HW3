def sorting(list):
   spots = len(list)

   non_dec = True
   non_inc = True

   for i in range(spots - 1):
       if list[i] < list[i + 1]:
            non_dec = False
       elif list[i] > list[i + 1]:
            non_inc = False

   if non_dec:
        return list
   elif non_inc:
        return list[::-1]
   
   for i in range(spots):
        for j in range(0, spots - i - 1):
            if list[j] > list[j + 1]:
                list[j], list[j + 1] = list[j + 1], list[j]
   return list


def main():
    list = [5, 2, 9, 1, 5, 6]
    sorted_list = sorting(list)
    print("Sorted list:", sorted_list)

    list2 = [1, 2, 3, 4, 5]
    sorted_list2 = sorting(list2)
    print("Sorted list:", sorted_list2)

    list3 = [5, 4, 3, 2, 1]
    sorted_list3 = sorting(list3)
    print("Sorted list:", sorted_list3)

if __name__ == "__main__":
    main()