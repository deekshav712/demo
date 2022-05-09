if [ $# -eq 1 ]
then
if [ -d $1 ]
then
set -- `ls -Rl $1 | grep "^-" | tr -s " " | cut -d " " -f 5,9- | sort -n | tail -1`
echo "File name is:$2" 
echo "File size is:$1"
else
echo "Not a directory"
fi
else
echo "Enter a directory name"
fi
