#include <iostream>
#include<fstream>
#include<string>
using namespace std;

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

// Prints occurrences of txt[] in pat[]
void KMPSearch(char* pat, char* txt,int M,int N,int linenum)
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
          cout<<linenum<<" "<<i-j<<endl;
          j = num[j - 1];
      }
      else if (i < N && pat[j] != txt[i]) {
          if (j != 0)
              j = num[j - 1];
          else
              i = i + 1;
      }
  }
}

int main(int argc, char *argv[]){
    if(argc!=3){
    cerr<<"Usage : "<<argv[0]<<" <file_path> <query_string> "<<endl;
   }
   string filePath=argv[1];
   string query=argv[2];

   ifstream file(filePath);
   string line;
   if(!file.is_open()){
        cerr<<"unable to open the file : "<<filePath<<endl;
        return 0; 
    }
    int linenum=0;
    while(getline(file,line)){
        linenum++;
        char txt[200],pat[50];
        int M=query.length(),N=line.length();
        for(int i=0;i<M;i++) pat[i]=query[i];
        for(int j=0;j<N;j++) txt[j]=line[j];
        KMPSearch(pat,txt,M,N,linenum);
    }
    return 0;
}