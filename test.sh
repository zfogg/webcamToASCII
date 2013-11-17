#!/bin/bash


for i in `ls ./imgs/*.jpg`; do
    #sleep $((1/30));
    jp2a "$i";
    echo -en '\t';
done
