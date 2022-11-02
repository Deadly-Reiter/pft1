#include<unistd.h> 
void a(void)
{
	
	write(1, "a\n", 3);

}



int main(void) 
	
{
	a();
	return 0;
}


