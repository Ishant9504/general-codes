#Accessing,Writing,Updation,len(),.update(),.keys(),.values()

groceries = {'fruits': ['mangoes', 'bananas', 'kiwis'],
            'protein': ['beef', 'pork', 'salmon'],
            'carbs': ['rice', 'pasta', 'bread'],
            'veggies': ['lettuce', 'cabbage', 'onions']}

print(groceries['protein'])
groceries['protein']={'beef'}
print(groceries['protein'])

groceries1={'fruits': ['mangoes', 'bananas']}
groceries.update(groceries1)
print(groceries)

print(len(groceries))
print(groceries.keys())
print(groceries.values())
