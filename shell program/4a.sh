#Write a shell script that accept one or more file names as argument and convert all of them
#to uppercase, provided they exists in current directory.
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

