import random  #this is important to apply#######

computer=random.choice([-1,0,1])

youstr=input("enter your choice:")
youdict={"r":-1,"p":0,"s":1}
reversedict={-1:"rock",0:"paper",1:"scissor"}
you=youdict[youstr]

print(f"you chose {reversedict[you]}\ncomputer chose {reversedict[computer]}") 

if(computer==you):
    print("match is draw")

else:
    if(computer==-1 and you==0):
        print("you win!")
    elif(computer==-1 and you==1):
        print("you lose!")
    elif(computer==0 and you==-1):
        print("you lose!")
    elif(computer==0 and you==1):
        print("you win!")
    elif(computer==1 and you==0):
        print("you lose!")
    elif(computer==1 and you==-1):
        print("you win!")
    else:
        print("error")

#or use
# if((you-computer)==-1 or(you-computer)==2):
#     print("you win")
# else:
#     print("you lose")

#this is observation of pattern to make it faster for code writer
    