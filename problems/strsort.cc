#include <stdio.h>
#include <string>

template< class T, size_t N >
std::size_t Length(const T(&)[N]) {
    return N;
};

int s_bubblesort(std::string argv[], int size);


int main(void)
{
  std::string str[] = {
    "zzz", "zhz", "ydc",
    "acb", "zzb", "zua",
    "abc", "zuaaa", "xzz"
  };

  s_bubblesort(str, Length(str));

  for( int n = 0 ; n < 9 ; n++ ) {
    printf("%s\n",str[n].c_str());
  }
  printf("\n\n");

  std::string words[] = {
    "Baba", "Caca" , "Cece",
    "Lala","Babaaaaaa", "L"
  };

  s_bubblesort(words, Length(words));

  for( int n = 0 ; n < 6 ; n++ ) {
    printf("%s\n", words[n].c_str());
  }
}

int s_bubblesort(std::string src[], int size) {
  int i , j = 0;

  char *p_1 , *p_2 , *tmp;

  while( j < size ) {
    for( i = 0 ; i < size - j - 1 ; i++ ) {
      p_1 = src[i] , p_2 = src[i+1];

      while( *p_1 && *p_2 ) {
	if( (*p_1 > *p_2) || (!*(p_2 + 1) && (*p_1 == *p_2))) {
	  tmp = src[i];

	  src[i] = src[i + 1];

	  src[i + 1] = tmp;

	  break;
	} else if( *p_1 < *p_2 ) {
	  break;
	}
	p_1++;
	p_2++;
      }
    }
    j++;
  }
  return 0;
}
