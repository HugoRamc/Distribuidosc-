import math
if __name__ == "__main__":
    print("Ingresa un n para el numero de iteraciones ")
    max =  input()
    max = int(max)

    i = 0.0
    sen = 0.0
    cos = 0.0
    tan = 0.0
    log = 0.0
    sqrt = 0.0
    for j in range(0,max):
        sen += math.sin(i)
        cos += math.cos(i)
        tan += math.tan(i)
        log += math.log10(i)
        sqrt += math.sqrt(i)
        i+=1
        