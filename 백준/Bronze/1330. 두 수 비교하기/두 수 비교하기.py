r = input()
r = r.split()


a = int(r[0])
b = int(r[1])

if a > b:
  print(">")

if a < b:
  print("<")

if a == b:
  print("==")
