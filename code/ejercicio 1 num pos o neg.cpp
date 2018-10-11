#include<stdio.h>
void determinar(int n){
	int num;
	printf("Digite un numero: ");
	scanf("%d", &num);
	if(num<0){
		printf("El numero %d es negativo",num);
	}else if(num>0){
		printf("El numero %d es positivo",num);
	}else
	printf("El numero ingresado es cero");
	
}

int main(){
	int a;
	
	determinar(a);		
	return 0;
}
