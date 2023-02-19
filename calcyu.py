while True:
    print('-' * 30)
    print('1)Toplama')
    print('2)Çıxma')
    print('3)Vurma')
    print('4)Bölmə')
    print('5)Qüvvət')
    print('6)Proqramı bağla')
    print('-'*30)
    print(' ')
    print('Əməl seçin:')
    emel = int ( input ( ) )
    if emel==1:
        print('I Toplanan:')
        I = float( input() )
        print('II Topanan:')
        II = float( input() )
        r = I + II
        print('Cəm: ' + r)

    elif emel==2:
        print('Çıxılan:')
        I = float( input() )
        print('Çıxan:')
        II = float( input() )
        r = I - II
        print('Cəm: ' + r)

    elif emel==3:
        print('I Vuruq:')
        I = float( input() )
        print('II Vuruq:')
        II = float( input() )
        r = I * II
        print('Cəm: ' + r)

    elif emel==4:
        print('Bölünən:')
        I = float( input() )
        print('Bölən:')
        II = float( input() )
        r = I / II
        print('Cəm: ' + r)

    elif emel==5:
        print('Əsas:')
        I = float( input() )
        print('Qüvvət:')
        II = float( input() )
        r = I ** II
        print('Cəm: ' + r)

    elif emel==6:
        print('Proqram bağlandı')
        break