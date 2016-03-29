def BubbleSort1(A,n):

	for i in range(n):
		for j in range(n-i):
			k = n-1-j
			if A[i] > A[k]:
				temp = A[i]
				A[i] = A[k]
				A[k] = temp
	return A
	
def BubbleSort2(A,n):
	for i in range(n):
		for j in range(n-i):
			k = n-1-j
			if A[k] < A[k-1]:
				temp = A[i]
				A[i] = A[k]
				A[k] = temp
	return A

A = [3,6,9,2,10,5]
B = BubbleSort1(A,len(A))
print(B)
C=BubbleSort2(A,len(A))
print(C)