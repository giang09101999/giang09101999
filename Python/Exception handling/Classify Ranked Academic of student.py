import sys
math = float(input("Input math score: "))
physics = float(input("Input physics score: "))
chemistry = float(input("Input chemistry score: "))
average_score = (math + physics + chemistry)/3

try:
    if (average_score >= 8)&(average_score <= 10):
        print("====================================")
        print("Excellent!!")
    if (average_score >= 6.5)&(average_score < 8):
        print("====================================")
        print("Credit!!")
    if (average_score >= 5)&(average_score < 6.5):
        print("====================================")
        print("Average!!")
    if (average_score >=0)&(average_score < 5):
        print("====================================")
        print("Bad!!")

    if (math > 10)|(math < 0)|(physics > 10)|(physics < 0)|(chemistry > 10)|(chemistry < 0):
        sys.exit()
except:
    print("====================================")
    print("Error!!")
else:
    print("The average score is:", average_score)
    print("Run program successfully!!")