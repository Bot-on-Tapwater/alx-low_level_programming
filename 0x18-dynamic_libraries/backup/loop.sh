#!/bin/bash

# Specify the path to your text file
file_path="/home/bot-on-tapwater/Desktop/alx_se/alx-low_level_programming/0x18-dynamic_libraries/file_path.txt"

# Loop through each line of the file
while IFS= read -r line; do
    cp $line .
    echo "Processing line: $line"
done < "$file_path"
