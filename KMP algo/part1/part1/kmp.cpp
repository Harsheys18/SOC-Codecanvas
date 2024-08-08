/*
In this problem, you will be implementing the Knuth Morris Pratt (KMP) algorithm as dicussed in class
Complete the functions 'computeLPSArray' and 'KMPSearch' where the former preprocesses the query
and the latter prints all occurences of the target pattern in the string. 

You can use the print statement already provided to match the output format (You can write your own print statement too)

Running Instructions
Run make to compile your code.
Run make test to test your code on the provided testcase

Input Format
2 line input.
First line contains pattern
Second line contains text.
No whitespace or newline characters withing either string.
(To add support for whitespace, you will have to change main.cpp, you can try doing this on your own OPTIONALLY)

Output Format
Provided in outputs/output0.txt.
Multiple occurences can be possible and will be printed on SEPARATE LINES in the same way.

Please also test the code with your OWN test cases.

- We will test both KMPSearch and computeKMPTable function.
  Please do not change their definitions.

- Please note that we will ONLY copy kmp.cpp to our auto-grader.
  Any modification to any other file will not be part of the
  evaluation of the submission. Please make sure that your
  submission continue to work with the original version of
  the other files.
*/

// abbbacdadgh
#include <iostream>
#include <string>
using namespace std;

class Queue{
  char queue[1000];
};

// Prints occurrences of txt[] in pat[]
void KMPSearch(char* pat, char* txt,int M,int N)
{ 
	// printf("Found pattern at index %d \n", index_where_found);
  int num[M];
  computeKMPTable(pat, M, num);
  int i=0,j=0; 
  while ((N - i) >= (M - j)) {
      if (pat[j] == txt[i]) {
          j++;
          i++;
      }

      if (j == M) {
          printf("Found pattern at index %d ", i - j);
          j = num[j - 1];
      }

      // mismatch after j matches
      else if (i < N && pat[j] != txt[i]) {
          // Do not match lps[0..lps[j-1]] characters,
          // they will match anyway
          if (j != 0)
              j = num[j - 1];
          else
              i = i + 1;
      }
  }
}

// Fills h[] for given pattern pat[0..M-1] ; h is nothing but num
void computeKMPTable(char* pat, int M,int* num)
{
  int len = 0;
  num[0] = 0;
  int i = 1;
  while (i < M) {
      if (pat[i] == pat[len]) {
          len++;
          num[i] = len;
          i++;
      }
      else{
        if (len != 0) {
            len = num[len - 1];
        }
        else{
          num[i] = 0;
          i++;
        }
      }
    }
}


int main(){
  string pattern; cin>>pattern;
  string text; cin>>text;
  int M=pattern.length();
  int N=text.length();
  int num[100];
  char pat[100],txt[1000];
  for(int i=0;i<M;i++) pat[i]=pattern[i];
  for(int i=0;i<N;i++) txt[i]=text[i];
  KMPSearch(pat,txt,M,N);
}