#Count the number of times a specified value occurs in a string

string = input("Input string: ")
print("The original string: ", string)

word = input("Input the desired word: ")

count = string.count(word)
print("The number of times " + str(word) + " appears in string is: ", count)
