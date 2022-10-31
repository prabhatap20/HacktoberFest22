def ispalindrome(num):
    rev=0
    pal=num
    while num>0:
        r=num%10
        rev=rev*10+r
        num=num//10
    if pal==rev:
        print('palindrome')
    else:
        print('not palindrome')

ispalindrome(665566)