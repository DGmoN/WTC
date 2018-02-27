if [ "$#" -eq 1 ]; then
	MODF="/usr/share/vim/vim*/plugin"
	FILENAME="stdheader.vim"
	cp $FILENAME $MODF
	if [ -e ${MODF}/${FILENAME} ]; then
		sed -i "s/\$USER/'$1'/g" $MODF/$FILENAME
		echo "Eveything should be done now... that is if you didnt make a typo in the username"
	fi
else
	echo "Please for the love of god and all that is holy give me your WTC user name so I can setup this god forsaken shit!!!"
fi
