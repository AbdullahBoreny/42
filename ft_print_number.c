#include <unistd.h>

void ft_print_alphabet(void);

void ft_print_alphabet(void) {
char digit = '0';
while(digit <='9') {

write(1,&digit,1);
digit++;
}


}

int main(void) {
ft_print_alphabet();
write(1,"\n",1);
return 0;


}
