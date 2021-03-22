echo enter the limit
read n

f=0
s=1
t=0
i=0
 echo Fibonnacci Series
 while (( $i < $n ))
 do 
 echo $t
(( f = s ))
(( s = t ))
(( t = f + s ))
 (( i=$i+1 ))
done

