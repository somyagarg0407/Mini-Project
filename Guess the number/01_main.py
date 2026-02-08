import random

n=random.randint(1,50)
guesses=1
a=-1  # a=-1 liya jisse while loop chale hi chale

while (a!=n):
    a=int(input("guess the number: "))
    if(a>n):
        print("lower the number")
        guesses+=1
 
    elif(a<n):
        print("higher the number")
        guesses+=1

print(f"you guess the number {n} correctly in {guesses} guesses")