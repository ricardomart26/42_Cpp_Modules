
echo "Char Test:"
./convert a
./convert asf

echo "Int Test:"
./convert -42
./convert 42
./convert 3
./convert 0

echo "float Test:"
./convert 423.af
./convert a423.f
./convert 423.fa
./convert 423.f
./convert 42.2453f
./convert 42.24.53f


echo "nanf/nan Test:"
./convert nan
./convert nanf
./convert nanf2222222222222222222222222222222222
./convert 34nan
./convert 34nanf


echo "+inf/+inff Test:"
./convert +inf
./convert +inf2222222222
./convert +inff
./convert +inff2222222222222222222222222222222222
./convert +34inf
./convert +34inff
./convert 34+inf
./convert 34+inff


echo "-inf/-inff Test:"
./convert -inf
./convert -inf2222222222
./convert -inff
./convert -inff2222222222222222222222222222222222
./convert -34inf
./convert -34inff
./convert 34-inf
./convert 34-inff

