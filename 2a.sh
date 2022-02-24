#Write a shell script that accepts two filenames as arguments, checks if the permissions for
#these files are identical and if the permissions are identical, output common permissions
#otherwise output each filename followed by its permissions.
echo "enter the first file:"
read file1
if [ -e $file1 ]
then
set -- `ls -ld $file1`
file1perm=$1
else
echo -n"file doesnot exists"
exit
fi

echo -n"enter the second file:"
read file2
if [ -e $file2 ]
then
set -- `ls -ld $file2`
file2perm=$1
else
echo "file doesnot exists"
exit
fi

if [ $file1perm = $file2perm ]
then
echo "file permissions are identical"
echo "permissions is $file1perm"
else
echo "file permissions are not identical"
echo "$file1 permission is $file1perm"
echo "$file2 permissions is $file2perm"
fi

