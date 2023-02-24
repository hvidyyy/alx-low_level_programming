@@ -6,7 +6,7 @@
 */
int _isupper(int c)
{
	if (c < 'a')
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
