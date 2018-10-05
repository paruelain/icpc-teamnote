string S;
int ai, bi, ri;
int A[MAXL], B[MAXL], R[MAXL];
int main(){
  cin>>S;
  for(auto it = S.rbegin(); it != S.rend(); it++) A[ai++] = *it - '0';
  cin>>S;
  for(auto it = S.rbegin(); it != S.rend(); it++) B[bi++] = *it - '0';
  mult(A, ai, B, bi, R);
  for(ri = 0; ri < ai + bi; ri++) R[ri + 1] += R[ri] / 10;
  while(!R[ri] && ri) ri--;
  while(ri >= 0) cout<<R[ri--] % 10;
  cout<<'\n';
  return 0;
}
