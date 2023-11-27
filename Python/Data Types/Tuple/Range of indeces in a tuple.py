elements = input("Input elements: ")

List = list(map(int, elements.split()))
Tuple = tuple(List)

start_point = int(input("Input start point: "))
end_point = int(input("Input end point: "))

range_of_indeces = Tuple[start_point:end_point]
print("The range of indeces in a tuple: ", range_of_indeces)
