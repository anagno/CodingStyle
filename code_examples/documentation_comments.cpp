// Divide result by two, taking into account that x
// contains the carry from the add.
for (int i = 0; i < result->size(); i++) 
{
  x = (x << 8) + (*result)[i];
  (*result)[i] = x >> 1;
  x &= 1;
}
