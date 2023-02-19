while True:
    print('-'*30)
    print('(1)+')
    print('(2)-')
    print('(3)*')
    print('(4)/')
    print('(5)**')
    print('(6)back')
    print('-'*30)
    z=int(input('Please choose the opperation you want:'))
    a=int(input('please choose the first number:'))
    b=int(input('Please choose the second number:'))
    if z==1:
        c=a+b
        print('result:' + str(c))
        c=input('Please, press ENTER to continue.')
    if z==2:
        c=a-b
        print('result:' + str(c))
        c = input('Please, press ENTER to continue.')
    if z==3:
        c=a*b
        print('result:' + str(c))
        c = input('Please, press ENTER to continue.')
    if z==4:
        c=a/b
        print('result:' + str(c))
        c = input('Please, press ENTER to continue.')
    if z==5:
        c=a**b
        print('result:' + str(c))
        c = input('Please, press ENTER to continue.')
    if z==6:
        break