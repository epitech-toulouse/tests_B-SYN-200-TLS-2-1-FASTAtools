#include <criterion/criterion.h>

/**
 ** @breif Capitalizes the first letter of each word
 ** @param [IN/OUT] `str` The string to capitalize (to edit).
 ** @return Pointer to the string `str`
 */
char *my_strcapitalize_synthesis(char *str);

Test(Requirement, simple_case)
{
  char tmp[] = "hello world";
  char* res = NULL;

  res = my_strcapitalize_synthesis(tmp);
  cr_assert_not_null(res);
  cr_expect_str_eq(res, "Hello World");
}

//Test when the first letter is already capitalized
Test(Requirement, first_letter_capitalized)
{
  char tmp[] = "Hello World";
  char* res = NULL;

  res = my_strcapitalize_synthesis(tmp);
  cr_assert_not_null(res);
  cr_expect_str_eq(res, "Hello World");
}

//Test with an empty string
Test(Requirement, empty)
{
  char tmp[] = "";
  char* res = NULL;

  res = my_strcapitalize_synthesis(tmp);
  cr_assert_not_null(res);
  cr_expect_str_eq(res, "");
}

//Test with only capitalized letters
Test(Requirement, all_capitalized)
{
  char tmp[] = "HELLO WORLD";
  char* res = NULL;

  res = my_strcapitalize_synthesis(tmp);
  cr_assert_not_null(res);
  cr_expect_str_eq(res, "HELLO WORLD");
}
