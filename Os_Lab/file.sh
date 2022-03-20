#creating a file with the name of the user
echo "Enter the name of the file"
read name
touch $name
echo "Enter the content of the file"
read content
echo $content >> $name
echo "File created"
echo "Enter the name of the file"
read name
echo "Enter the content of the file"
read content
echo $content >> $name
echo "File created"
