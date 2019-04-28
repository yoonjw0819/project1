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
	while (x<0){ //Adjusting the value of x to avoid errors caused by calculating modulus of negative number.
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
				fprintf(fOut,"%c",' '); //manually adding space and symbols. To avoid errors caused by the use of ASCII number.
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
			} else if (c == ':'){
				fprintf(fOut,"%c",':');
			} else {
				if (method==1){
					fprintf(fOut,"%c",rEn(c,k)); //Rotation Encryption
				} else if (method==2){
					fprintf(fOut,"%c",rDE(c,k)); //Rotation Decryption
				} else if (method==3){
					fprintf(fOut,"%c",sEn(c)); //Substitution Encryption
				} else if (method==4){
					fprintf(fOut,"%c",sDE(c)); //Substitution Decryption
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
				} else if (c == ':'){
					printf("%c",':');
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
			} else if (c == ':'){
				fprintf(fOut,"%c",':');
			} else {
				fprintf(fOut,"%c",rDE(c,k));
			}
		}
		printf("\nCode decryption using the key(%d) has been saved into output.txt\n",k);
	}
	
	if (method==6){
		//Check frequency of alphabets in input.txt
		int A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;
		fIn = fopen("input.txt", "r");
		while(!feof(fIn)){
			fscanf(fIn,"%c",&c);
			switch(c){
				case 'A': A+=1; //Counting frequencies
				break;
				case 'B': B+=1;
				break;
				case 'C': C+=1;
				break;
				case 'D': D+=1;
				break;
				case 'E': E+=1;
				break;
				case 'F': F+=1;
				break;
				case 'G': G+=1;
				break;
				case 'H': H+=1;
				break;
				case 'I': I+=1;
				break;
				case 'J': J+=1;
				break;
				case 'K': K+=1;
				break;
				case 'L': L+=1;
				break;
				case 'M': M+=1;
				break;
				case 'N': N+=1;
				break;
				case 'O': O+=1;
				break;
				case 'P': P+=1;
				break;
				case 'Q': Q+=1;
				break;
				case 'R': R+=1;
				break;
				case 'S': S+=1;
				break;
				case 'T': T+=1;
				break;
				case 'U': U+=1;
				break;
				case 'V': V+=1;
				break;
				case 'W': W+=1;
				break;
				case 'X': X+=1;
				break;
				case 'Y': Y+=1;
				break;
				case 'Z': Z+=1;
				break;
			}
		}
		printf("Finding frequencies of alphabets in input.txt...\n");
		printf("Frequency of A: %d\n", A);
		printf("Frequency of B: %d\n", B);
		printf("Frequency of C: %d\n", C);
		printf("Frequency of D: %d\n", D);
		printf("Frequency of E: %d\n", E);
		printf("Frequency of F: %d\n", F);
		printf("Frequency of G: %d\n", G);
		printf("Frequency of H: %d\n", H);
		printf("Frequency of I: %d\n", I);
		printf("Frequency of J: %d\n", J);
		printf("Frequency of K: %d\n", K);
		printf("Frequency of L: %d\n", L);
		printf("Frequency of M: %d\n", M);
		printf("Frequency of N: %d\n", N);
		printf("Frequency of O: %d\n", O);
		printf("Frequency of P: %d\n", P);
		printf("Frequency of Q: %d\n", Q);
		printf("Frequency of R: %d\n", R);
		printf("Frequency of S: %d\n", S);
		printf("Frequency of T: %d\n", T);
		printf("Frequency of U: %d\n", U);
		printf("Frequency of V: %d\n", V);
		printf("Frequency of W: %d\n", W);
		printf("Frequency of X: %d\n", X);
		printf("Frequency of Y: %d\n", Y);
		printf("Frequency of Z: %d\n", Z);
		
		//Create two arrays that represents number and alphabet array.
		int num[]={A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
		char alp[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		
		//Start Bubblesorting
		int i,j,temp;
		char tempChar;
		for(i=0;i<26-1;i++){//Number of process of comparison is number of index - 1, excluding the comparison by itself.
			for(j=0;j<26-1;j++){
				//replace if the array of larger index is greater than the smaller one.
				if(num[j] < num[j+1]){
                temp=num[j];
				tempChar=alp[j];
                num[j]=num[j+1];
				alp[j]=alp[j+1];
                num[j+1]=temp;
				alp[j+1]=tempChar;
				}
			}
		}
		
		//Check if the array is sorted correctly.
		printf("\n\nCheck sorted arrays.\n");
		for (i=0;i<=26-1;i++){
			printf("Index %d:	%c has the frequency of %d\n",i,alp[i],num[i]);
		}
		//Print key
		printf("\nKey is generated: ");
		for (i=0;i<26;i++){
			printf("%c",alp[i]);
		}
		
		//Match key with English alphabet frequencies.
		printf("\nMatching key with English alphabet average frequencies: ");
		char alpEng[]={'E','T','A','O','I','N','S','H','R','D','L','C','U','M','W','F','G','Y','P','B','V','K','J','X','Q','Z'};
		for (i=0;i<26;i++){
			printf("%c",alpEng[i]);
		}
		printf("\n\n");
		//Start Substitution Decryption, displaying on cmd.
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
				} else if (c == ':'){
					printf("%c",':');
				} else {
					//Check the index for c
					for (i=0;i<26;i++){
						if (c==alp[i]){
							printf("%c",alpEng[i]);
						}
					}
				}
			}
		printf("\n");
		//Allow user to swap characters, can be done by swapping array.
		while (temp!='N'){
			printf("\nDo you want to swap characters? (Y/N)\n");
			
			scanf("%c",&temp);
			scanf("%c",&temp); //could not identify the error, the first scanf does not work.
			char c1,c2;
			int i1,i2;
			if (temp=='Y'){
				printf("Change the alphabet from:\n");
				printf("Type an alphabet: ");
				scanf("%c",&c1);
				scanf("%c",&c1);
				printf("To: ");
				scanf("%c",&c2);
				scanf("%c",&c2);
				
				//Change alphabets that are stored in array.
				//Find index first.
				for (i=0;i<26;i++){
					if (alpEng[i]==c1){
						i1=i;//saves index for the first character the user is changing from
					}
				}
				for (i=0;i<26;i++){
					if (alpEng[i]==c2){
						i2=i;//saves index for the second character the user is changing to
					}
				}
				//Swap.
				temp=num[i1];
				tempChar=alpEng[i1]; //We are swapping the characters displayed for output, so we change alpEng[] instead of alp[]
				num[i1]=num[i2];
				alpEng[i1]=alpEng[i2];
				num[i2]=temp;
				alpEng[i2]=tempChar;
				
				printf("Converted from %c to %c.\n",c1,c2);
				
				//Array Status
				printf("\n\nArray Status for substitution cipher\n");
				for (i=0;i<=26-1;i++){
					printf("Index %d:	%c\n",i,alpEng[i]);
				}
				//Start Substitution Decryption, displaying on cmd.
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
					} else if (c == ':'){
						printf("%c",':');
					} else {
						//Check the index for c
						for (i=0;i<26;i++){
							if (c==alp[i]){
								printf("%c",alpEng[i]);
							}
						}
					}
				}
				printf("\n");
			} else if (temp=='N'){
				//print them in output.txt
				
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
					} else if (c == ':'){
						fprintf(fOut,"%c",':');
					} else {
						//Check the index for c
						for (i=0;i<26;i++){
							if (c==alp[i]){
								fprintf(fOut,"%c",alpEng[i]);
							}
						}
					}
				}
				printf("Your decryption has been saved into output.txt\n");
			}
		}
	}
	fclose(fIn); //Close the file as the program exit.
	fclose(fOut);
}
//Rotation decryption 1
//MON MOTHMA: THE DATA BROUGHT TO US BY THE BOTHAN SPIES PINPOINTS THE EXACT LOCATION OF THE EMPEROR'S NEW BATTLE STATION. WE ALSO KNOW THAT THE WEAPON SYSTEMS OF THIS DEATH STAR ARE NOT YET OPERATIONAL. WITH THE IMPERIAL FLEET SPREAD THROUGHOUT THE GALAXY IN A VAIN EFFORT TO ENGAGE US, IT IS RELATIVELY UNPROTECTED. BUT MOST IMPORTANT OF ALL, WE'VE LEARNED THAT THE EMPEROR HIMSELF IS PERSONALLY OVERSEEING THE FINAL STAGES OF THE CONSTRUCTION OF THIS DEATH STAR. MANY BOTHANS DIED TO BRING US THIS INFORMATION.
//Rotation decryption 2
//EVERYBODY IS A GENIUS. BUT IF YOU JUDGE A FISH BY ITS ABILITY TO CLIMB A TREE, IT WILL LIVE ITS WHOLE LIFE BELIEVING THAT IT IS STUPID. - ALBERT EINSTEIN
//Substitution decryption 1
//DID YOU EVER HEAR THE TRAGEDY OF DARTH PLAGUEIS THE WISE? I THOUGHT NOT. ITS NOT A STORY THE JEDI WOULD TELL YOU. ITS A SITH LEGEND. DARTH PLAGUEIS WAS A DARK LORD OF THE SITH, SO POWERFUL AND SO WISE HE COULD USE THE FORCE TO INFLUENCE THE MIDICHLORIANS TO CREATE LIFE HE HAD SUCH A KNOWLEDGE OF THE DARK SIDE THAT HE COULD EVEN KEEP THE ONES HE CARED ABOUT FROM DYING. THE DARK SIDE OF THE FORCE IS A PATHWAY TO MANY ABILITIES SOME CONSIDER TO BE UNNATURAL. HE BECAME SO POWERFUL THE ONLY THING HE WAS AFRAID OF WAS LOSING HIS POWER, WHICH EVENTUALLY, OF COURSE, HE DID. UNFORTUNATELY, HE TAUGHT HIS APPRENTICE EVERYTHING HE KNEW, THEN HIS APPRENTICE KILLED HIM IN HIS SLEEP. IRONIC. HE COULD SAVE OTHERS FROM DEATH, BUT NOT HIMSELF.
//Substitution decryption 2
//A NEW SCIENTIFIC TRUTH DOES NOT TRIUMPH BY CONVINCING ITS OPPONENTS AND MAKING THEM SEE THE LIGHT, BUT RATHER BECAUSE ITS OPPONENTS EVENTUALLY DIE, AND A NEW GENERATION GROWS UP THAT IS FAMILIAR WITH IT. - MAX PLANCK
