base=`stat -f "%a"`
minone=`expr $base - 1`
echo "$minone\n"
