echo enter limit
read n
 s=0
 i=1
while (( $i <= $n))
 do
  read a
  (( s = $a + $s ))
  (( i = $i + 1 ))
 done
echo "sum is $s"

