//-----------------------------------------------------------------------------
//
// Partition benchmark, part 2
//
// see partition.cc for part 1
//
//-----------------------------------------------------------------------------

void ext_swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}