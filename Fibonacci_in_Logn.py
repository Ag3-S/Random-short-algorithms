#from scratch

def multiply(A, B):
  result = [[A[0][0]*B[0][0] + A[0][1]*B[1][0], A[0][0]*B[0][1] + A[0][1]*B[1][1]],
            [A[1][0]*B[0][0] + A[1][1]*B[1][0], A[1][0]*B[0][1] + A[1][1]*B[1][1]]]
  return result

def mat_exponen(matrix, n): # we'll exponentiate the transoformation matrix in O(logn) and then apply it
  result = [[1, 0], [0, 1]]
  while n>0:
    if n & 1:
      result = multiply(result, matrix)

    matrix= multiply(matrix, matrix)  
    n>>=1 #right shift
  return result



def fibonacci(n):
  if n==0:
    return 0

  M = [[1,1], [1, 0 ]] # NOTICE HOW THIS IS THE TRANSFORMATION MATRIX....
  #the above matrix converts F(n-2), F(n-1) to F(n-1) and F(n)

  M_n = mat_exponen(M, n-1)
  #also notice how the top left entry will be multiplied with 1  and M12 entry with zero, 
  #so our final result is in M11 entry
 """ 
  [Fi+1] = M[Fi​  ]
  [Fi​​  ]    [Fi−1​​] """

  return M_n[0][0] 

  
