class Solution:
    def countPrimes(self, n: int) -> int:
        if n <= 2:
            return 0

        def SieveOfEratosthenes(n):
            prime = [True for _ in range(n)]
            p = 2
            while (p * p < n):
                if prime[p]:
                    for i in range(p * p, n, p):
                        prime[i] = False
                p += 1
            return prime
        
        prime = SieveOfEratosthenes(n)
        count = sum(1 for i in range(2, n) if prime[i])

        return count

    