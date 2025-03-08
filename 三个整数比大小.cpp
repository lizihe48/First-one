#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && b > c) {
	  printf("%d\>%d\>%d",a, b, c);
	}
	  if (a > b && c > b) {
		printf("%d\>%d\>%d", a, c, b);
	  }
	    if (b> a && a > c) {
		  printf("%d\>%d\>%d", b, a, c);
	    }
	      if (b> a && c > a) {
		    printf("%d\>%d\>%d", b, c, a);
	      }
		    if (c > a && b > a) {
			  printf("%d\>%d\>%d", c, b, a);
		    }
			  if (c > a && a > b) {
				  printf("%d\>%d\>%d", c, a, b);
			  }

	return 0;
}