filename=$1
if [ -f $filename ]
then
  set -- `ls -dl $filename`
  echo "the creation time of $filename  is $6 $7 $8"
else
  echo "file doesnot exists"
fi

