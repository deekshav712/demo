#Write a shell script which accepts valid log-in names as arguments and prints their
#corresponding home directories, if no arguments are specified, print a suitable error message.
if [ $# -eq 1 ]
then
grep $1 /etc/passwd >ud
if [ $? -eq 0 ]
then
echo "user exits"
h=`cut -d ":" -f 6 ud`
echo "Home directory of $1 is $h"
else
echo "user not found"
fi
else
echo "Enter a login/username"
fi

