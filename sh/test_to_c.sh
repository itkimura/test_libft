# Rename all *.c to *.c.test
for f in *.c.test; do
	mv -- "$f" "${f%.c.test}.c"
done

for f in ./Part_1/*.c.test; do
	mv -- "$f" "${f%.c.test}.c"
done
