string = input("Input elements: ")

List = list(map(int, string.split()))

index = int(input("Input index: "))
num = int(input("Input desired number: "))

print("The original list:", List)
List.insert(index, num)
print("The inserted list: ", List)
