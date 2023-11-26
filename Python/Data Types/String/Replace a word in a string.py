#Replace a word in a string

string = input("Input string: ")
print("The original string: ", string)

replaced_word = input("Input replaced word: ")
new_word = input("Input new word: ")

new_string = string.replace(replaced_word, new_word)
print("The replaced string: ", new_string)
