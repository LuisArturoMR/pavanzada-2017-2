#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pcre.h"
#define PCRE2_CODE_UNIT_WIDTH 8
#include "include/pcre2.h"


/* Add function signatures here */
int main(int argc, char **argv) {

  PCRE2_SPTR pattern;
  PCRE2_SIZE *ovector;
  pcre2_match_data *match_data;
  pcre2_code *re;
  int crlf_is_newline;
  int errornumber;
  int erroroffset;
  int rc;

  char *strpattern = strdup("Mari[ao]");
  char *String = argv[1];
  pattern = strpattern;


  re = pcre2_compile(
    pattern,                //the pattern
    PCRE2_ZERO_TERMINATED,  //indicates pattern is zer-terminated
    0,                      // default options
    &errornumber,           //
    &erroroffset,
    NULL);

    /* Run the next matching operation */

  match_data = pcre2_match_data_create_from_pattern(re,NULL);

  rc = pcre2_match(
    re,                   /* the compiled pattern */
    String,              /* the subject string */
    strlen(String),       /* the length of the subject */
    0,         /* starting offset in the subject */
    0,              /* options */
    match_data,           /* block for storing the result */
    NULL);                /* use default match context */
  /* Start your code here */
  if (rc < 0) {
    printf("There was an error\n" );
    return 1;
  }
  ovector = pcre2_get_ovector_pointer(match_data);
  printf("Match success at offset %d\n", (int)ovector[0]);
  return 0;
}
