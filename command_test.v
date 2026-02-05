import os

fn testsuite_begin() {
	os.chdir(os.dir(@FILE))!
}

fn test_verify_formatting_of_source_code() {
	res := os.system('${os.quoted_path(@VEXE)} fmt -verify src/')
	assert res == 0
	println('> source code is formatted, good')
}

fn test_run_tests() {
	res := os.system('${os.quoted_path(@VEXE)} tests/run_tests.vsh')
	assert res == 0
}
