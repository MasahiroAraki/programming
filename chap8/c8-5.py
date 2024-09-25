import sys

def input_number():
    while True:
        x = input('Enter positive number: ')
        try:
            x = float(x)
        except ValueError:
            print(f'{x}は数値に変換できません。')
            continue
        except:
            print('予期せぬエラーです')
            sys.exit()
        if x <= 0:
            print(f'{x}は正の数値ではありません。')
            continue
        break
    return x

def square_root(x):
    rnew = x
    while True:
        r1 = rnew
        r2 = x/r1
        rnew = (r1 + r2)/2
        if r1 - r2 < 1.0E-6:
            break
    return rnew

x = input_number()
sq = square_root(x)
print(f'Square root of {x} is {sq}.')
