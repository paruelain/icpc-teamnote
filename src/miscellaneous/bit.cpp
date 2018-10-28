// Returns the number of 1-bits in x.
int __builtin_popcount(unsigned int x)
int __builtin_popcountll(unsigned long long x)

// Returns the number of leading redundant sign bits in x.
int __builtin_clrsb(unsigned int x)
int __builtin_clrsbll(unsigned long long x)

// Hidden functions of bitset<> bs
bs._Find_next(int idx)
bs._Unchecked_set(int idx)
bs._Unchecked_reset(int idx)
bs._Unchecked_flip(int idx)

// Smallest bit
(x & -x)
