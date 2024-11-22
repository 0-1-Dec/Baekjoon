A,B = map(int,input().split())
if(B<45):
    if A == 0:
         A,B =23 , 60+(B-45)
    else: 
        A,B = A-1, 60+(B-45)
            
else: 
    A,B= A, B - 45
    
print(A, B)