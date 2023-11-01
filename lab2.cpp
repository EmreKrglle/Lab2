#include <stdio.h>
#include <string.h>

int tos = -1;
int stack[5] ;


int push(){
	int a;
 if(tos>=4 ){
 	
 	printf(" \n Stack is Overflow ");
 	
 }
 else{
 printf("\n Enter Number:");
 scanf("%d",&a); tos++; stack[tos]=a;
 printf("\n Number  (%d) pushed into stack",a )	;
 }
 
 
  
 
 	

}
void pop(){
	if (tos==-1){
		printf("stack is empty ");
		
	}
	else{
		printf(" \n (%d) removed from stack ",stack[tos]);
		tos--;
		
	};
	
}
void display() {
	printf("Element in the stack:");
	for(int i =0 ; i <5 ; i++){
		printf("%d ",stack[i]);
	}
}



main(){
	int choice;
	
	do
	{
		printf("\n 1. push \n 2. pop \n 3. Display \n 4. Exit");
		printf("\n Enter your choice:");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4 :
				return 0 ;
			default: 
				printf("Ýnvalid Number Please Select Valid Number(1,2,3,4)");
				
				
				
	}

	}
		while(1);
		return 0;
	

}
