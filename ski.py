# Ivy Loi
# Homework 3, Problem 1a

def skiCost(days, skiRental, skiPurchase):
    rentTot = days * skiRental
    if rentTot < skiPurchase:
        return True
    else:
        return False



def main():
    dailySkiRental = 100
    purchaseSki = 250
    sampleDays = 5
    print("The cost to rent skis for", sampleDays, "days is $", sampleDays * dailySkiRental)
    if skiCost(sampleDays, dailySkiRental, purchaseSki) == True:
        print("It is cheaper to rent skis for", sampleDays, "days.")
    else:        
        print("It is cheaper to buy skis than to rent for $", purchaseSki)
    
    Days = int(input("How many days do you want to rent skis? "))
    if skiCost(Days, dailySkiRental, purchaseSki) == True:
        print("It is cheaper to rent skis for", Days, "days.")
    else:        
        print("It is cheaper to buy skis than to rent for $", purchaseSki)


if __name__ == "__main__":
    main()