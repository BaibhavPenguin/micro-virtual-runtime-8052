#!/bin/sh
CONF=/etc/avrdude.conf
PART=AT89S52
PROG=usbasp
BLCK=10

echo ".hex file to flash?"
read -r FPATH

if [[-z "$FPATH"]]; then
	echo "Fatal Error! : File or Directory not found!"
	exit 1
fi

FPATH ="$1"

avrdude \-C "$CONF" \-c "$PROG" \-p "$PART" \-B "$BLCK" \-U flash:w:"$FPATH":i

