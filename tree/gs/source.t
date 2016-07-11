#!/bin/bash

project_name="gs"
author_name="gianluca salvato"

cur_date=`date "+%d-%m-%Y"`
cur_year=${cur_date##*-}

project_name_up="GS"


file_path_c="${1%.$file_type}"
file_path_escaped="${file_path_c//\//\\/}"

file_name_c="${file_path_c//*\//}"
file_path_c="${file_path_c//[^a-zA-Z0-9]/_}"

license_file="doc/license_short.txt"

project=(
	"PROJECT_NAME":"$project_name"
	"PROJECT_NAME_UP":"$project_name_up"
	"FILE_PATH":"$file_path_escaped"
	"FILE_NAME":"$file_name_c"
	"FILE_NAME_C":"$file_name_c"
	"FILE_PATH_C":"$file_path_c"
	"AUTHOR_NAME":"$author_name"
	"DATE":"$cur_date"
	"YEAR":"$cur_year"
	"LICENSE":"$license_file"
)