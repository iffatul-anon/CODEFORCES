s := File standardInput readLine
N := s size
negative := 0
if(s at(0) == 45,
  negative = 1
  s = s slice(1)
  N = N - 1
)
k := 0
for(i, 0, N-1,
  if(s at(i) != 48, break)
  k = k + 1
)
if(k == N, "0" println,
  s = s slice(k)
  N = N - k
  k = N - 1
  for(i, N-1, 0, -1,
    if(s at(i) != 48, break)
    k = k - 1
  )
  if(negative == 1, "-" print)
  for(i, k, 0, -1, s at(i) asCharacter print)
  "" println
)
