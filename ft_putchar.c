#include <unistd.h>
void ft_putchar(char c);

void ft_putchar(char c) {

write(1,&c,1);



}
int main(void) {
ft_putchar('c');
ft_putchar('\n');
return 0;




}
