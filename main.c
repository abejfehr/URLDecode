#include <stdlib.h>
#include <stdio.h>
#include "urldecode.h"

int main(void) {
  printf("URL Decoder Test\n");
  printf("================\n\n");

  /* TEST 1 */
  printf("Test 1: Just a space\n");
  printf("--------------------\n");
  printf("Input:           %%20\n");
  printf("Expected Output:  \n");
  char *test1 = urlDecode("%20");
  printf("Actual Output:   %s\n\n\n", test1);
  free(test1);


  /* TEST 2 */
  printf("Test 2: A string with a space\n");
  printf("-----------------------------\n");
  printf("Input:           ASDF%%20ASDF\n");
  printf("Expected Output: ASDF ASDF\n");
  char *test2 = urlDecode("ASDF%20ASDF");
  printf("Actual Output:   %s\n\n\n", test2);
  free(test2);


  /* TEST 3 */
  printf("Test 3: Just a %% symbol\n");
  printf("------------------------\n");
  printf("Input:           %%\n");
  printf("Expected Output: %%\n");
  char *test3 = urlDecode("%");
  printf("Actual Output:   %s\n\n\n", test3);
  free(test3);


  /* TEST 4 */
  printf("Test 4: A string with all escaped characters\n");
  printf("--------------------------------------------\n");
  printf("Input:           %%20%%21%%22%%23%%24%%25%%26%%27%%28%%29\n");
  printf("Expected Output:  !\"#$&'()\n");
  char *test4 = urlDecode("%20%21%22%23%24%26%27%28%29");
  printf("Actual Output:   %s\n\n\n", test4);
  free(test4);


  /* TEST 5 */
  printf("Test 5: A string with doubly escaped characters\n");
  printf("-----------------------------------------------\n");
  printf("Input:           %%2520%%2524%%2523\n");
  printf("Expected Output:  $#\n");
  char *test5 = urlDecode("%2520%2524%2523");
  printf("Actual Output:   %s\n\n\n", test5);
  free(test5);


  /* TEST 6 */
  printf("Test 6: An empty string\n");
  printf("-----------------------\n");
  printf("Input:           \n");
  printf("Expected Output: \n");
  char *test6 = urlDecode("");
  printf("Actual Output:   %s\n\n\n", test6);
  free(test6);


  /* TEST 7 */
  printf("Test 7: A number of percent signs\n");
  printf("---------------------------------\n");
  printf("Input:           %%%%%%%%\n");
  printf("Expected Output: %%%%%%%%\n");
  char *test7 = urlDecode("%%%%");
  printf("Actual Output:   %s\n\n\n", test7);
  free(test7);


  /* TEST 8 */
  printf("Test 8: A number of percent signs followed by an encoded symbol\n");
  printf("---------------------------------------------------------------\n");
  printf("Input:           %%%%%%%%%%29\n");
  printf("Expected Output: %%%%%%%%)\n");
  char *test8 = urlDecode("%%%%%29");
  printf("Actual Output:   %s\n\n\n", test8);
  free(test8);


  /* TEST 9 */
  printf("Test 9: A mix of +'s for spaces\n");
  printf("-------------------------------\n");
  printf("Input:           a%%20b+c+d");
  printf("Expected Output: a b c d)\n");
  char *test9 = urlDecode("a%20b+c+d");
  printf("Actual Output:   %s\n\n\n", test9);
  free(test9);

  printf("Testing is complete!\n\n\n");

  return 0;
}