#!/bin/bash

project_name="gs"
author_name="gianluca salvato"

cur_date=`date "+%d-%m-%Y"`
cur_year=${cur_date##*-}

project_name_up="GS"

file_path_real="${1%.$file_type}"
file_path_escaped="${file_path_real//\//\\/}"

file_name_c="${file_path_real//*\//}"
file_path_c="${file_path_real//[^a-zA-Z0-9]/_}"

license_file="doc/license_short.txt"

project=(
	"FILE_PATH":"$file_path_escaped"
	"PROJECT_NAME":"$project_name"
	"AUTHOR_NAME":"$author_name"
	"PROJECT_NAME_UP":"$project_name_up"
	"DATE":"$cur_date"
	"YEAR":"$cur_year"
	"LICENSE":"$license_file"
	"FILE_PATH_C":"$file_path_c"
		
	"FILE_NAME":"$file_name_c"
	"FILE_NAME_C":"$file_name_c"

)