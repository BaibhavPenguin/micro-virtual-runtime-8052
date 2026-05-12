#!/bin/sh
CONF=config/at89s52.conf
PART=AT89S52
PROG=usbasp
BLCK=10

echo ".hex file to flash?"
read -r FPATH

if [[ -z "$1" ]]; then
	echo "Fatal Error! : File or Directory not found!"
	exit 1
fi


avrdude \-C "$CONF" \-c "$PROG" \-p "$PART" \-B "$BLCK" \-U flash:w:"$1":i

