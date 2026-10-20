#!/bin/bash
for file in *.txt
do
    if [ -s "$file" ];then
        echo "有效文件：$file"
    fi
done

