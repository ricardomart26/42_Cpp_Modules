
assert ()
{
	PARAM_ERR=98
	ASSERT_FAILED=99

	echo "$2"
	if [ -z "$2" ]
	then
		return $PARAM_ERR
	fi

	lineno=$2
	if [ ! $1 ]
	then
		echo "Assertion failed \"$1\""
		exit $ASSERT_FAILED
	else
		echo "Assertion Sucessfull \"$1\""
	fi
}


get_output()
{

	# $1 Name of the program to execute
	# $2 / $3 / $... Output a enviar para o programa
	# $last Comparação final
	touch output.txt
	file=`pwd`/output.txt
	
	if [ -z "$3" ]
	then
		"$1" > "$file"
		echo "Entrou?"
	else
		$1 "$2" > "$file"
	fi

	# ./megaphone Damnit " ! " "Sorry students, I thought this thing was off." > "$file"

	output=""
	while read -r line
	do
		output="$line"
	done < "$file"

	echo $output
	b=$3
	if [ "$output" = "$b" ];
	then
		echo -e "\e[32m[OK]\e[0m"
	else
		echo -e "\e[31m[KO]\e[0m"
	fi

}

make

# file=~/Desktop/C++/"Cpp Module 00"/ex00/output.txt

# get_output "./megaphone" "shhhhh... I think the students are asleep..." "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."

# get_output "./megaphone" "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

get_output ./megaphone Damnit " ! " "Sorry students, I thought this thing was off." "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."

# ./megaphone "" > "$file"

# output=""
# while read -r line
# do
# 	output=$line
# done < "$file"

# b="SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."

# if [ "$output" = "$b" ];
# then
# 	echo -e "\e[32m[OK]\e[0m"
# else
# 	echo -e "\e[31m[KO]\e[0m"
# fi


