def ingresar(m,f,c):
  for i in range(f):
    for j in range(c):
      m[i][j]= int(input("valor"))
def mostrar(m,f,c):
  for i in range(f):
    for j in range (c):
      print(m[i][j], end=" ")
    print()
f=c=3
m=[[0,0,0],[0,0,0],[0,0,0]]
print(m)
ingresar(m,f,c)
mostrar(m,f,c)