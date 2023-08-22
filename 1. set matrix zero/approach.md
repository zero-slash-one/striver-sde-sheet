Brute:
1. If any cell (i,j) contains the value 0, we will mark all cells in row i and column j with -1 except those which contain 0.
2. Finally, we will mark all the cells containing -1 with 0.
### TC - O((N * M) * (N + M)) or 0(n³)
### SC - 0(1)

Better:
1. First, we will declare two arrays: a row array of size N and a col array of size M and both are initialized with 0.
2. If any cell (i,j) contains the value 0, we will mark ith index of row array i.e. row[i] and jth index of col array col[j] as 1. It signifies that all the elements in the ith row and jth column will be 0 in the final matrix.
### TC - O(N * M) or O(n²)
### SC - O(N + M) or O(n)

Optimal:
1. Instead of external two arrays of row and column use 0th row and 0th column of matrix, element [0][0] would cause ambiguity so we will create two variables row0 and col0 to handle that case
2. Follow the steps as you did in better approach
### TC - O(n²)
### SC - O(1)
