#Applying a permulation k times to a given sequence in O(n) time (we'll use cyclic decomposition, permutation graphs)
#not O(nlogk) (which could be done by using simple binary exponentiation) 
#not O(n*k) (which could be done in the most naive way possible)


def permutation_k_times_in_O_n(sequence, permutation, k):
  n = len(sequence)
  visited = [False for i in range(n)]
  result = [None]*n


  for i in range(n):
    if not visited[i]:
      cycle = []
      current = i
      while not visited[curr]:
        visited[current] = True
        cycle.append(current)
        current = permutation[current]

      cycle_length = len(cycle)

      for j in range(cycle_len):
        from_pos = cycle[j]
        to_pos = cycle[(j+k)%cycle_len]
        resutl[to_pos] = sequence[from_pos]

return result
