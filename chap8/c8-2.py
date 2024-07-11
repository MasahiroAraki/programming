import sys

x = int(input('Enter integer: '))
if x <= 0:
    print('Input error!')
    sys.exit()
rnew = float(x)

for i in range(3):
    r1 = rnew
    r2 = x/r1
    rnew = (r1 + r2)/2
    print(f'{r2:7.5} < {rnew:7.5} < {r1:7.5}')
    