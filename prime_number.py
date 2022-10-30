def prime(num):
    flag=0
    if num==0 or num==1:
        flag=1
    n=num//2
    for i in range(2,n+1):
        if num%i==0:
            flag=1
    if flag==1:
        print('number is not prime')
    elif flag==0:
        print('number is prime')

prime(9)