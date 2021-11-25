hero1=input("Enter first hero1 name")
hit1=int(input("Enter number of hit movies of hero1:"))
avg1=int(input("Enter number of avg movies of hero1:"))
flop1=int(input("Enter number of flop movies of hero1:"))
hero2=input("Enter second hero2 name")
hit2=int(input("Enter number of hit movies of hero2:"))
avg2=int(input("Enter number of avg movies of hero2:"))
flop2=int(input("Enter number of flop movies of hero2:"))
tot1=hit1*10+avg1*6+flop1*-4
tot2=hit2*10+avg2*6+flop2*-5
if tot1>tot2:
    print(hero1,"is best hero with",tot1)
else:
    print(hero2,"is best hero with",tot2)
