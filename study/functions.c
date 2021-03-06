// data_type_of_returned_value user_function(place for arguments){place for actions; return returned_value;}
//                                      function can be with or without argument(s)
// data_type_of_returned_value - void                                            function can be without return
//
// 1. function without arguments, without returned value
// 2. function without arguments, with returned value
// 3. function with arguments, without returned value
// 4. function with arguments, with returned value
//
// function can be defined before main
// function can be declared before main and after main be defined
#include <stdio.h>

// int a_2 = 0;

void my_function_1 ();
int my_function_2 ();
void my_function_3 (int in_a_3);
double my_function_4 (int in_a_4a, int in_a_4b);

int main ()
{
  printf ("Hello from main function\n");
  double result_main;
  char a_main;
  my_function_1 ();
  printf ("output from my_function_2 from main function: %d\n",my_function_2 ());
  a_main = my_function_2 ();
  printf ("a_main = %d from main function\n", a_main);
  my_function_3 (74);
  result_main = my_function_4 (4, 5);
  printf ("result_main = %.3f from main function", result_main);

  return 0;
}

void my_function_1 ()
{
  printf ("Hej fra my_function_1!\n");
}

int my_function_2 ()
{
  int a_2 = 74;
  printf ("Sveiki no my_function_2!\n");
  printf ("a_2 = %d from my_function_2\n", a_2);
  return a_2;
}

void my_function_3 (int in_a_3)
{
  printf ("Sveiki no my_function_3!\n");
  printf ("in_a_3 = %d from my_function_3\n", in_a_3);
}

double my_function_4 (int in_a_4a, int in_a_4b)
{
  double result = (float) in_a_4a / in_a_4b;
  printf ("Sveiki no my_function_4!\n");
  printf ("%d / %d = %.3f from my_function_4\n", in_a_4a, in_a_4b, result);
  return result;
}
