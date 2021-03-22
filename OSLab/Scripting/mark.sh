echo enter mark
read m1

if (( $m1 >= 90 ))
 then echo A grade
elif (( $m1 >= 80  ))
  then echo B Grade 
elif (( $m1 >= 70))
  then echo C Grade 
elif (( $m1 >= 50  ))
  then echo D Grade 
else 
   echo F Grade 
fi

