#!/bin/bash

source "config/build.conf"

TIMEF=$(date +%H.%M.%S)

echo "Deploy or Build for Debugging or Build Release Binary? : (b) or (d) or (r)"
read -r option


case "$option" in
	d|D) 
		echo "Building Binaries uVR_AT89S52 $VERSION : "
		
		mkdir -p "${DEBUG}${VERSION}${TIMEF}"/
		
		sdcc -mmcs51 \-I "$INCLUDE" \-o "$DEBUG$VERSION${TIMEF}/" "$SRC"main.c
		
		packihx $DEBUG$VERSION$TIMEF/main.ihx > "${DEBUG}${VERSION}${TIMEF}/uvr_debug.hex"

		echo "Output File Generated : ${DEBUG}${VERSION}${TIMEF}/uvr_debug.hex"

		;;
	b|B) 
		echo "Building Binaries uVR_AT89S52 $VERSION : "
		
		mkdir -p "${BUILD}${VERSION}${TIMEF}"/
		
		sdcc -mmcs51 \-I "$INCLUDE" \-o "${BUILD}${VERSION}${TIMEF}/" "$SRC"main.c
		
		packihx ${BUILD}${VERSION}${TIMEF}/main.ihx > "${BUILD}${VERSION}${TIMEF}/uvr_build.hex"

		echo "Output File Generated : ${BUILD}${VERSION}${TIMEF}/uvr_build.hex"

		;;
	
	r|R)
		echo "Building Release uVR_AT89S52 $VERSION : "
		
		mkdir -p "${RELEASE}${VERSION}"/
		
		sdcc -mmcs51 \-I "$INCLUDE" \-o "${RELEASE}${VERSION}/" "$SRC"main.c
		
		packihx ${RELEASE}${VERSION}/main.ihx > "${RELEASE}${VERSION}/uvr_binary_release.hex"
		
		echo "Output File Generated : ${RELEASE}${VERSION}/uvr_binary_release.hex"
		
		;;
	
	*)
		echo "Invalid Selection!"
		echo "usage d : Build Debug Binary , b : Build Project"
		;;
esac

 
