# Rename all *.c to *.c.test
for f in *.c; do
	mv -- "$f" "${f%.c}.c.test"
done

for f in ./Part_1/*.c; do
	mv -- "$f" "${f%.c}.c.test"
done
