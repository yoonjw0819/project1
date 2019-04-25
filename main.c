#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//alphabet to number conversion
int Alp_Num(char a);
int Alp_Num(char a){
	switch(a){
		case 'A': return 0;
		break;
		case 'B': return 1;
		break;
		case 'C': return 2;
		break;
		case 'D': return 3;
		break;
		case 'E': return 4;
		break;
		case 'F': return 5;
		break;
		case 'G': return 6;
		break;
		case 'H': return 7;
		break;
		case 'I': return 8;
		break;
		case 'J': return 9;
		break;
		case 'K': return 10;
		break;
		case 'L': return 11;
		break;
		case 'M': return 12;
		break;
		case 'N': return 13;
		break;
		case 'O': return 14;
		break;
		case 'P': return 15;
		break;
		case 'Q': return 16;
		break;
		case 'R': return 17;
		break;
		case 'S': return 18;
		break;
		case 'T': return 19;
		break;
		case 'U': return 20;
		break;
		case 'V': return 21;
		break;
		case 'W': return 22;
		break;
		case 'X': return 23;
		break;
		case 'Y': return 24;
		break;
		case 'Z': return 25;
		break;
	}
}
//alphabet to number conversion
char Num_Alp(int n);
char Num_Alp(int n){
	switch(n){
		case 0: return 'A';
		break;
		case 1: return 'B';
		break;
		case 2: return 'C';
		break;
		case 3: return 'D';
		break;
		case 4: return 'E';
		break;
		case 5: return 'F';
		break;
		case 6: return 'G';
		break;
		case 7: return 'H';
		break;
		case 8: return 'I';
		break;
		case 9: return 'J';
		break;
		case 10: return 'K';
		break;
		case 11: return 'L';
		break;
		case 12: return 'M';
		break;
		case 13: return 'N';
		break;
		case 14: return 'O';
		break;
		case 15: return 'P';
		break;
		case 16: return 'Q';
		break;
		case 17: return 'R';
		break;
		case 18: return 'S';
		break;
		case 19: return 'T';
		break;
		case 20: return 'U';
		break;
		case 21: return 'V';
		break;
		case 22: return 'W';
		break;
		case 23: return 'X';
		break;
		case 24: return 'Y';
		break;
		case 25: return 'Z';
		break;
	}
}
//Making k+Alp_Num range from 0 to 26.
int Adj(int x);
int Adj(int x){
	while (x<0){
		x+=26;
	}
	return x;
}
//Rotation Encryption
char rEn(char a,int k);
char rEn(char a,int k){
	return Num_Alp(Adj(Alp_Num(a)+k)%26);
}
//Rotation Decryption
char rDE(char b,int k);
char rDE(char b,int k){
	return Num_Alp(Adj(Alp_Num(b)-k)%26);
}
//Substitution Encryption
char sEn(char c);
char sEn(char c){
	switch(c){
		case 'A': return 'Q';
		break;
		case 'B': return 'W';
		break;
		case 'C': return 'E';
		break;
		case 'D': return 'R';
		break;
		case 'E': return 'T';
		break;
		case 'F': return 'Y';
		break;
		case 'G': return 'U';
		break;
		case 'H': return 'I';
		break;
		case 'I': return 'O';
		break;
		case 'J': return 'P';
		break;
		case 'K': return 'A';
		break;
		case 'L': return 'S';
		break;
		case 'M': return 'D';
		break;
		case 'N': return 'F';
		break;
		case 'O': return 'G';
		break;
		case 'P': return 'H';
		break;
		case 'Q': return 'J';
		break;
		case 'R': return 'K';
		break;
		case 'S': return 'L';
		break;
		case 'T': return 'Z';
		break;
		case 'U': return 'X';
		break;
		case 'V': return 'C';
		break;
		case 'W': return 'V';
		break;
		case 'X': return 'B';
		break;
		case 'Y': return 'N';
		break;
		case 'Z': return 'M';
		break;
	}
}
//Substitution Decryption
char sDE(char c);
char sDE(char c){
	switch(c){
		case 'Q': return 'A';
		break;
		case 'W': return 'B';
		break;
		case 'E': return 'C';
		break;
		case 'R': return 'D';
		break;
		case 'T': return 'E';
		break;
		case 'Y': return 'F';
		break;
		case 'U': return 'G';
		break;
		case 'I': return 'H';
		break;
		case 'O': return 'I';
		break;
		case 'P': return 'J';
		break;
		case 'A': return 'K';
		break;
		case 'S': return 'L';
		break;
		case 'D': return 'M';
		break;
		case 'F': return 'N';
		break;
		case 'G': return 'O';
		break;
		case 'H': return 'P';
		break;
		case 'J': return 'Q';
		break;
		case 'K': return 'R';
		break;
		case 'L': return 'S';
		break;
		case 'Z': return 'T';
		break;
		case 'X': return 'U';
		break;
		case 'C': return 'V';
		break;
		case 'V': return 'W';
		break;
		case 'B': return 'X';
		break;
		case 'N': return 'Y';
		break;
		case 'M': return 'Z';
		break;
	}
}

int main(){
	FILE *fIn;
	FILE *fOut;
	int index, data;
	
	fIn = fopen("input.txt", "r");
	fOut = fopen("output.txt","w");
	char c;
	printf("\nCheck your input.txt.\n");
	printf("Your output will be printed in output.txt.\n");
	printf("Type an integer for the following task.\n");
	printf("	1 for Encryption with a rotation cipher, key given\n");
	printf("	2 for Decryption with a rotation cipher, key given\n");
	printf("	3 for Encryption with a substitution cipher, key given\n");
	printf("	4 for Decryption with a substitution cipher, key given\n");
	printf("	5 for Decryption with a rotation cipher without key\n");
	printf("	6 for Decryption with a substitution cipher without key\n");
	int method;
	scanf("%d",&method);
	int k;
	if (method ==1 ||method==2){
		printf("Assign key value by typing an integer.\n");
		scanf("%d",&k);
	}
	if (method ==3 ||method==4){
		printf("Your key is set by this default:\n");
		printf("QWERTYUIOPASDFGHJKLZXCVBNM\n");
	}
	
	if (method ==1||method==2||method ==3||method==4){
	//Read each character from input.txt
		while(!feof(fIn)){
			fscanf(fIn,"%c",&c);
			if (c == ' '){
				fprintf(fOut,"%c",' ');
			} else if (c == '\n'){
				fprintf(fOut,"%c",'\n');
			} else if (c == '.'){
				fprintf(fOut,"%c",'.');
			} else if (c == ','){
				fprintf(fOut,"%c",',');
			} else if (c == '-'){
				fprintf(fOut,"%c",'-');
			} else if (c == '?'){
				fprintf(fOut,"%c",'?');
			} else if (c == '!'){
				fprintf(fOut,"%c",'!');
			} else {
				if (method==1){
					fprintf(fOut,"%c",rEn(c,k));
				} else if (method==2){
					fprintf(fOut,"%c",rDE(c,k));
				} else if (method==3){
					fprintf(fOut,"%c",sEn(c));
				} else if (method==4){
					fprintf(fOut,"%c",sDE(c));
				}
			}
		}
	}
	
	if (method==5){
		for (k=1;k<26;k++){
			printf("\n\nKey(%d): ",k);
			fIn = fopen("input.txt", "r");
			while(!feof(fIn)){
				fscanf(fIn,"%c",&c);
				if (c == ' '){
					printf("%c",' ');
				} else if (c == '\n'){
					printf("%c",'\n');
				} else if (c == '.'){
					printf("%c",'.');
				} else if (c == ','){
					printf("%c",',');
				} else if (c == '-'){
					printf("%c",'-');
				} else if (c == '?'){
					printf("%c",'?');
				} else if (c == '!'){
					printf("%c",'!');
				} else {
					printf("%c",rDE(c,k));
				}
			}
		}
		printf("\nType the correct key: ");
		scanf("%d",&k);
		fIn = fopen("input.txt", "r");
		while(!feof(fIn)){
			fscanf(fIn,"%c",&c);
			if (c == ' '){
				fprintf(fOut,"%c",' ');
			} else if (c == '\n'){
				fprintf(fOut,"%c",'\n');
			} else if (c == '.'){
				fprintf(fOut,"%c",'.');
			} else if (c == ','){
				fprintf(fOut,"%c",',');
			} else if (c == '-'){
				fprintf(fOut,"%c",'-');
			} else if (c == '?'){
				fprintf(fOut,"%c",'?');
			} else if (c == '!'){
				fprintf(fOut,"%c",'!');
			} else {
				fprintf(fOut,"%c",rDE(c,k));
			}
		}
		printf("\nCode decryption using the key(%d) has been saved into output.txt\n",k);
	}
	
	
	
	fclose(fIn);
	fclose(fOut);
}

