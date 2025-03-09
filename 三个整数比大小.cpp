#include <stdio.h>
int main()
{
	int a, b, c;
	printf("请依次输入三个数字\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		printf("%d=%d=%d", a, b, c);
	}
	  if (a == b && b > c) {
		printf("%d=%d>%d", a, b, c);
	  }
	    if (a == b && c > b) {
		  printf("%d>%d=%d", c, a, b);
	    }
		  if (a == c && c > b) {
			printf("%d=%d>%d", a, c, b);
		  }
		    if (b == c && a > b) {
			  printf("%d>%d=%d", a, b, c);
		    }
		      if (b == c && a > b) {
			    printf("%d>%d=%d", a, b, c);
		      }
			    if (b == c && b > a) {
				  printf("%d=%d=%d", c, b, a);
			    }
	               if (a > b && b > c) {
	                 printf("%d>%d>%d",a, b, c);
	               }
	                  if (a > b && c > b&&a>c){
		                 printf("%d>%d>%d", a, c, b);
	                  }
	                    if (b> a && a > c) {
		                   printf("%d>%d>%d", b, a, c);
	                    }
	                      if (b> a && c > a && b>c) {
		                    printf("%d>%d>%d", b, c, a);
	                      }
			                if (c > a && a > b) {
				               printf("%d>%d>%d", c, a, b);
			                }
						     if (c > b && b > a && c>a) {
								  printf("%d>%d>%d", c, b, a);
					         }

	return 0;
}