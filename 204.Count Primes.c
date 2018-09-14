/**
Count the number of prime numbers less than a non-negative number, n.

Example:

Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/

int countPrimes(int n) {
    int i, j;
    int cnt = 0;
    bool* cont = (bool* )malloc(sizeof(bool)*n);
    memset(cont, true, sizeof(bool)*n);
    for(i=2; i*i<n; i++)
    {
        if(cont[i] == false)
        {
            continue;
        }
        for(j=i*i; j<n ;j+=i)
        {
            cont[j] = false;
        }
    }
    for(i=2; i<n; i++)
    {
        if(cont[i] == true)
        {
            cnt++;
        }
    }
    return cnt;
}
