#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void ChoiceGen(const char*, const int);

int main(int argc, char* argv[]) {

  if (argc<3) {
    printf("USAGE:\n  %s <int> <string>\n", argv[0]);
    return -1;
  }

  srand(time(0));
  const int tot = atoi(argv[1]);
  const char* OPT = argv[2];

  ChoiceGen(OPT, tot);
  return 0;
}

void ChoiceGen(const char* choices, const int count) {
  const int len = strlen(choices);
  for(int i=0; i<count; i++)
    printf("%d. %c\n", i+1, choices[rand()%len]);
}
