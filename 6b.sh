#Write s a shell script to find a file/s that matches a pattern given as command line argument
#in the home directory, display the contents of the file and copy the file into the directory
#~/mydir.
for i in `ls`
do
fl=`expr length $i`
if [ $fl -ge 10 ]
then 
echo $i
fi
done
