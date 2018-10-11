#include<stdio.h>
void binario(int nume){
	int coc, bin[30], c, num;
	c=0;
	printf("Digite el numero para transformarlo a binario : ");
	scanf("%d",&num);
	printf("El numero binario es: ");
	do{
		coc=num/2;
		bin[c]=num%2;
		c++;
		num=coc;
			
	}while (coc!=1);
	
	bin[c]=1;
	
	for(c;c>=0;c--){
		printf("%d",bin[c]);
	}
};
int main(){
	int a;
	
	binario(a);
	return 0;		
}
	
	
