student = {'name': 'K SAATVIK', 'email': 'skucher1@student.gitam.edu', 'quiz-1': 0,'quiz-2': 3.5}
print(student)
print(type(student))

print(student['name'])

print("keys:", student.keys())
print("Values:", student.values())
print("Items:", student.items())

#OUTPUT
{'name': 'K SAATVIK', 'email': 'skucher1@student.gitam.edu', 'quiz-1': 0, 'quiz-2': 3.5}
<class 'dict'>
K SAATVIK
keys: dict_keys(['name', 'email', 'quiz-1', 'quiz-2'])
Values: dict_values(['K SAATVIK', 'skucher1@student.gitam.edu', 0, 3.5])
Items: dict_items([('name', 'K SAATVIK'), ('email', 'skucher1@student.gitam.edu'), ('quiz-1', 0), ('quiz-2', 3.5)])
