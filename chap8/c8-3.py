import sys

x = int(input('Enter integer: '))
if x <= 0:
    print('Input error!')
    sys.exit()
rnew = float(x)
diff = rnew - x/rnew

while diff > 1.0E-3:
    r1 = rnew
    r2 = x/r1
    rnew = (r1 + r2)/2
    diff = abs(r1 - r2)

print(f'{r2:10.8} < {rnew:10.8} < {r1:10.8}')
