import random

def genera3Char():
    salida = ""
    for i in range(0,3):
        num = random.randint(65,90)
        salida = salida+str(chr(num))
    salida = salida + " "
    return salida



if __name__ == "__main__":
    print("Ingresa una n para el numero de iteraciones")
    n = input()
    cad = ""
    for i in range(0,int(n)):
        cad = cad + genera3Char()

    #if(cad.find("IPN")==-1):
    print(cad)
    print("cadena encontrada "+str(cad.count("IPN")) + " veces")



