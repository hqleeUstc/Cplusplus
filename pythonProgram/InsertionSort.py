
def InsertionSort(A,n):
    j = 1

    while j<n:
	    key=A[j]
	    i=j-1

	    while (i>=0 and A[i]>key):
		    A[i+1] = A[i]
		    i = i-1
		    A[i+1] = key

	    j=j+1
	
    return A
A = [2,3,47,5,7,68,23]
B = InsertionSort(A,len(A))
print(B)
