#!/bin/bash
i=0
> ./data/data.out
> ./data/data.ans
while ((i<10000)) 
do
    ((++i))
    mv ./data/data.in ./data/data.in.old
    ./gen < ./data/data.in.old > ./data/data.in
    ./force < ./data/data.in > ./data/data.ans
    ./main < ./data/data.in > ./data/data.out
    if ! diff ./data/data.out ./data/data.ans -q
    then
        break
    fi
    if ((i % 100 == 0))
    then
        echo $i
    fi
done
