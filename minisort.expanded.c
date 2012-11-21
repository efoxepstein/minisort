for(int x=0; x < i*i; ++x) { // n^2 times do:
  int *j = a + x%(i-1); // let j point tox mod (i-1)th elt of a
  if (*j > *(j+1)) { // if it needs swapping
    int k = *(j+1); // swap
    *(j+1) = *j;
    *j = k;
  }
}
