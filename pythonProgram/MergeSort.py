def MERGE(A,p,q,r):
	n1 = q-p+1;
	n2 = r-q;
	L1 = list(range(n1+1))
	L2 = list(range(n2+1))

	for i in range(n1):
		L1[i] = A[i+p]
	for i in range(n2):
		L2[i] = A[i+q+1]

	L1[n1] = float('inf')
	L2[n2] = float('inf')

	i = 0
	j = 0
	k = p

	for k in range(p,r):
		if(L1[i] <= L2[j]):
			A[k] = L1[i]
			i+=1
		else:
			A[k] = L2[j]
			j+=1
		
		
	return A

def MergeSort(A,p,r):
	if p <r:
		q = (p+r)//2
		MergeSort(A,p,q)
		MergeSort(A,q+1,r)
		MERGE(A,p,q,r)
	return A

A = [5,6,4,8,3,2,9,7,1,10]
B = MergeSort(A,0,9)
print(B)
