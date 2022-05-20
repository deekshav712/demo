#Write a shell script that displays all the links to a file specified as the first argument to the
#script. The second argument, which is optional, can be used to specify in which the search is to
#begin. If this second argument is not present, the search is to begin in the current working
#directory. In either case, the starting directory as well as its subdirectories at all levels must be
#searched. The script need not include error checking
if [ $# -ge 1 ]
then
   if [ $# -eq 2 ]
   then
	chd=$2
   else
	chd=`cd .`
   fi
   file=`find $chd -iname $1`
   if [ `echo $file | wc -c` -gt 1 ]
   then
     number=`ls -inum $file | grep -o ^[0-9]*`
     cd $chd
     find $chd -inum $number
   else
     echo "No such file"
  fi
else
echo "Enter argument"
fi
