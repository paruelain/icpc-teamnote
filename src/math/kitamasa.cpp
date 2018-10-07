// Calculate n-th result of a = ¢²aw
// O(k^2 log n)
// Warning : 1 base index(NOT 0)
int kitamasa(long long n) {
    vector<int> c(2*k+1, 0); c[1] = 1;
    vector<int> d(2*k+1);
    int b = floor(log2(n) + 1e-15);
    while(b--) {
        // c(n) -> c(2n)
        fill(d.begin(), d.end(), 0);
        for (int i=1; i<=k; i++) for (int j=1; j<=k; j++) d[i+j] = add(d[i+j], mul(c[i], c[j]));
        for (int i=2*k; i>k; i--) for (int j=1; j<=k; j++) d[i-j] = add(d[i-j], mul(d[i], w[j]));
        swap(c, d);
        // c(n) -> c(n+1)
        if ((n>>b)&1) {
            fill(d.begin(), d.end(), 0);
            d[1] = mul(c[k], w[k]);
            for (int i=2; i<=k; i++) d[i] = c[i-1] + mul(c[k], w[k+1-i]);
            swap(c, d);
        }
    }
    int r = 0;
    for (int i=1; i<=k; i++) r = add(r, mul(a[i], c[i]));
    return r;
}

