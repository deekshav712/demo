#Create a script file called file properties that reads a filename entered and outputs it
#properties.
if [ -e $1 ]
then
set -- `ls -ld$1`
echo "permission are $1"
echo "file links count is $2"
echo "user name is $3"
echo "group name is $4"
echo "file size is $5"
echo "month is $6"
echo "modification is done $6 $7 $8"
else
echo "file does not exit"
fi
