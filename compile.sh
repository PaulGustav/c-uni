#!/bin/bash
count="$(ls -l $1 | wc -l)"

for ((i=1; i<=count; i++))
do
	gcc "$1/aufgabe$i.c" -o "$1/aufgabe$i"
done
