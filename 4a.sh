for i in $*
do
echo "----$i contents are-----"
if [ -f $i ]
then
cat $i | tr "[a-z]" "[A-Z]"
echo "-------------------------------------------"
else
echo -n"$i file doesnot exists"
fi
done

