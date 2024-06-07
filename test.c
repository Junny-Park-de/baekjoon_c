def gfr(message, shift):
    xy = []
    for char in message:![](http://)
        if char.isalpha():
            if char.islower(): 
                xcd = chr((ord(char) - ord('a' - shift) % 26 + ord('a')))
            elif char.isupper():
				xcd = chr((ord(char) - ord('A') - shift) % 26 + ord('A'))
			xy.append(xcd)
		elif char == '_':
			xy.append(' ')
		else:
			xy.append(char)
	return ''.join(xy)

lpc = "Tpnfuijoh_gvooz"
der = gfr(lpc, 1)
print(der)