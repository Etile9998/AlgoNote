char buf[1 << 20];
int p, len;
inline int readChar() {
	if (p == len) {
		len = fread(buf, 1, sizeof buf, stdin);
		if (!len)return EOF;
		p = 0;
	}
	return buf[p++];
}
inline int readInt() {
	int ch;
	while (ch = readChar(), ch != '-' && (ch<'0' || ch>'9'));
	int sign, res;
	if (ch == '-')sign = -1, res = 0;
	else sign = 1, res = ch - '0';
	while (ch = readChar(), ch >= '0'&&ch <= '9')
		res = res * 10 + ch - '0';
	return sign * res;
}
