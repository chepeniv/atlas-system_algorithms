#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>
#include <criterion/new/assert.h>
#include <stdio.h>

/* TEST DRIVE */

char *hello = "hello, world!";

Test(hello_world, hello_world, .timeout = 2, .disabled = 0)
{
	cr_log_info("TESTDRIVE: basic expect assertion");
	cr_expect(eq(str, hello,  "hello, world!"), "strings do not match");
}

Test(hello_world, hello_world_file, .timeout = 2, .disabled = 0)
{
	FILE *expected_out;

	/* capture stdout output for analysis */
	cr_redirect_stdout();
	printf("%s\n", hello);
	fflush(stdout);

	cr_log_info("TESTDRIVE: compare stdout to file contents");
	expected_out = fopen("dev_tests/expected.output", "r");
	cr_expect_stdout_eq(expected_out);
	fclose(expected_out);
}

Test(hello_world, hello_world_cmp_files, .timeout = 2, .disabled = 0)
{
	FILE *expected_out;
	FILE *actual_out;

	/* redirect stdout to file */
	cr_log_info("TESTDRIVE: redirect stdout to an analysis file");
	freopen("dev_tests/actual.output", "w", stdout);
	printf("%s\n", hello);
	fclose(stdout);

	/* compare file contents to target */
	cr_log_info("TESTDRIVE: compare contents of analysis file to target reference file");
	actual_out = fopen("dev_tests/actual.output", "r");
	expected_out = fopen("dev_tests/expected.output", "r");
	cr_expect_file_contents_eq(actual_out, expected_out, "files not equal");

	fclose(actual_out);
	fclose(expected_out);
}

/* PLACE HOLDER UNIT TEST */

Test(intranet_checker, task_0, .timeout = 2, .disabled = 1)
{ }

Test(intranet_checker, task_0_example, .timeout = 2, .disabled = 1)
{ }

Test(scenario, task_0, .timeout = 2, .disabled = 1)
{ }
