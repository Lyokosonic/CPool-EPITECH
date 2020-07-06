#!
if [ $1 ]
then
    cut -d ";" -f 3 | grep $1 -i | wc -l
else
    wc -l
fi
