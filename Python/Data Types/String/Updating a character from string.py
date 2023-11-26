#Updating a character from a string
string = "Hello World"
print("Original string: ", string)
updated_string = string[0:1] + "B" + string[2:]
print("Updated string: ", updated_string)

list1 = list(string)
list1[2] = 'N'
new_string = ''.join(list1)
print("Updated new string: ", new_string)
