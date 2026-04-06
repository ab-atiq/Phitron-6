# n=int(input())

# l=[]
# for i in range(n):
#     x=int(input())
#     l.append(x)
    
    
    
def display_person(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}", end=" ")

display_person(name="Amir Khan", Age = "45")
