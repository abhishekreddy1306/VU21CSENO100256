p=float(input("enter the principle amount  "))
t=float(input("enter the time period "))
r=float(input("enter the rate of intrest "))
ci=p * (pow((1+r/100),t))
print(ci)