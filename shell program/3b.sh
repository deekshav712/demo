echo "\nEnter a password:\n"
stty -echo
read p1
stty echo
echo "\nConfirm your password\n"
stty -echo
read p2
stty echo
while [ "$p1" != "$p2" ]
do
echo "\nPassword doesnot match, re-enter the password:\n"
stty -echo
read p2
stty echo
done
clear
echo "-------------TERMINAL LOCKED--------------"
echo "\nEnter the password to unlock:\n"
stty -echo
read p3
stty echo
while [ "$p1" != "$p3" ]
do
clear
echo "-------------TERMINAL LOCKED--------------"
echo "\nPassword doesnot match,re-enter the password:\n"
stty -echo
read p3
stty echo
done
echo "\nTerminal unlock\n"

