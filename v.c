#include <stdio.h>

int main(void) {
	char c;
	scanf("%s",&c);
	switch(c)
{
	case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf(" vowel");
      break;
      case '!':
      case '@':
      case '#':
      case '$':
      case '%':
      case '^':
      case '&':
      case '*':
      case '(':
      case ')':
      printf("invaild");
      break;
      default:
      printf("consonant");
}
	return 0;
}
