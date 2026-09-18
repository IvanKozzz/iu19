def pow(base: float, exp: int):
    result = 1
    for _ in range(abs(exp)):
        result *= base
    if exp < 0: return 1 / result
    return result

for i in range(-3, 0):
    print(pow(2, i))