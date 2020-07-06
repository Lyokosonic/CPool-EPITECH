#!
if [ $1 ]
then
    cut -d ":" -f5 | cut -d " " -f2 | grep "^$1" -i | wc -l
else
    wc -l
fi
