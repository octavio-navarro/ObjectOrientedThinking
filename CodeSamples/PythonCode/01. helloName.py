import math

# Comentarios

def hello(nombre):
    print("Hello", nombre)


def main():
    print("Hola Python!")
    
    nombre = input("Dame tu nombre: ")
    edad = int(input("Dame tu edad: "))

    print(f"Hola {nombre}! En 20 años tendras {edad+20}")

main()

# none, int, float, string, boolean