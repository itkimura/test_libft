# Rename all *.c to *.c.test
for f in *.c.test; do
	mv -- "$f" "${f%.c.test}.c"
done
