#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <string.h>


float  conv;
char digitado [50];
float nota2;
float trab;
float nota1;
float peso2;
float peso1;
float t1;
float total;


void PedeNumero();
 
 void PedeNumero()
{

	char c;
	int i;
	
	i=0;
	
	do {
	
		c=getch();
		if (isdigit(c)!=0)
		{
		
		digitado[i] = c;
		i++;
		printf("%c", c);
		
		}else if (c==8&&i)
		
		{
		
			digitado[i]='\0';
			i--;
			printf("\b \b");
		}

	 }while(c!=13);
	 
	 
	 digitado[i]='\0'; 
	 
	 conv=atoi(digitado);
	 
	 nota2=conv;
	 
	 	
}	
 

void media_sem_trabalho (float nota1, float nota2); //prot�tipo da fun��o. Boa pr�tica de programa��o

void media_sem_trabalho (float nota1, float nota2) {

    	system("pause > NULL");
		system("cls");
		
		float media;
    	
    	 
	
		media = (nota2 + nota1)/2;
			   
		
			

	    if (media <6) {
	
	printf("\n                                  SUA M�DIA �:%.2f VOC� REPROVOU ...                            ", media);                                                                                                     
	printf("\n                                                                                                       "); 
	printf("\n                                                                                                       ");		
	printf("\n  	oooooooooooo/.`        :oooooooooooo.`                                      -oo/                 "); 
    printf("\n      MMMMMMMMMMMMMMds.      yMMMMMMMMMMMMMmy-                                  `sMMN:                 "); 
    printf("\n      MMMMmoooooohmMMMN+     yMMMMoooooodNMMMm.                                 yMMMo                  "); 
    printf("\n      MMMMy       `sMMMM/    yMMMM       :MMMMy             ssss/              /MMMm                   "); 
    printf("\n      MMMMy         yMMMm-   yMMMM       .MMMMy             MMMMy             -mMMM/                   "); 
    printf("\n      MMMMy         /MMMM/   yMMMM::::::ymMMMN:             hhhho             oMMMd.                   "); 
    printf("\n      MMMMy         /MMMM/   yMMMMMMMMMMMMMNs-                                MMMMy                    "); 
    printf("\n      MMMMy         +MMMN:   yMMMMyyyyyyy+/-                                  MMMMy                    ");  
    printf("\n      MMMMy        `NMMMy`   yMMMM                                            MMMMy                    "); 
    printf("\n      MMMMh......:omMMMN`    yMMMM                          ////:             hMMMy                    "); 
    printf("\n      MMMMMNNNNNNMMMMmo.     yMMMM                          MMMMy             /MMMN-                   "); 
    printf("\n      ddddddddddddss-.       sdddd                          dddds             `hMMM+                   "); 
    printf("\n      ````````````           `````                          `````              .mMMN.                  "); 
    printf("\n                                                                                :NMMh`                 "); 
    printf("\n                                                                                 .mMMo                 ");  
    printf("\n                                                                                  `..`                 "); 

	
	}  else {
			                                                                                                                                                                
        printf("\n                                                         ```          SUA M�DIA �: %.2f",                                                                                 media);	                                                                                                       
        printf("\n                                                        +MdMs                                                                                                             ");   
        printf("\n                          ....            ....         -+: -+:                                         `...`         `...`          `...`                                 ");  
        printf("\n     `dNN:     .mNm.  `omNMMMMNh:     `odNMMMMNy/   :NNNNNNNNNNo        hNNNNNNNms-      hNNNh      `oNMMMMNmy.   `sNMMMMNms.    -ymMMMMMmy.    hNN:    `NNN         mNN` ");  
        printf("\n      :NMm`    yMM+  -NMN+-..:yMMh   -NMN+-..+dMMs  :MMm///////-        dMMs///sMMN:    +MMhMMs     mMMo-..sNMN. `mMM+-.-sMMm`  oMMd/.../dMMo   dMM:    `MMN         NMM` ");  
        printf("\n       sMM+   :MMd  .NMN-      oMMy .NMN`      ++-  :MMd                dMM:    sMMo   .NMh yMN-    mMMy/.. .--` `NMMs/.` ---  /MMd`     `hMM/  dMM:    `MMN         mMM` ");  
        printf("\n        NMM`  mMN.  /MMy       `MMN /MMh            :MMMNNNNNNN.        dMMyoooyMMm-   dMM: -MMm`   -hMMMMMNho.   :dMMMMMNh+`  yMM/       +MMy  dMM:    `MMN         oMh  ");  
        printf("\n        /MMh oMMs   /MMh       .MMN :MMd       .    :MMm///////`        dMMmmmmmy+    +MMd+//dMMo     `:/shmMMM+    `:/shmMMN: yMM+       oMMy  dMM:    `MMN         oMy  ");  
        printf("\n         hMM:mMm`    dMM/     `dMM/  dMMo`    +MNh` :MMd                dMM:         .NMMNNNNNMMM- -shs     oMMh :sho     sMMs -NMN.     -NMN.  hMM+    .MMN         .h:  ");  
        printf("\n         .NMNMM-     `hMMmo++smMN+   `oNMNhyyNMMd.  :MMNyyyyyyyy        dMM:        `dMM/     -NMd` hMMdo++yMMN: `dMMho++yMMN.  :mMNd+++hMMm-   -NMMh++oNMM/         mmm` ");  
        printf("\n          +yyy+        -oymmmdy+`      `:+yyys+.    -yyyyyyyyyyy        oyy.        -yys       oyy:  :sdmmmdy+`   `:ydmmmdy/`     /shmmmhs/      `+ymmmmho-          syy` "); 

	}	
												 }

void media_com_trabalho (float nota1, float nota2, float trab); //prot�tipo da fun��o. Boa pr�tica de programa��o

void media_com_trabalho (float peso2, float t1, float peso1) {

    	system("pause > NULL");
		system("cls");
		
			float media;
		
			media = (peso2  + t1  + peso1 )/2;
			
				

			if (media <6) {
	
	printf("\n                                  SUA M�DIA �:%.2f VOC� REPROVOU ...                            ", media);                                                                                                     
	printf("\n                                                                                                       ");
	printf("\n                                                                                                       ");		
	printf("\n  	oooooooooooo/.`        :oooooooooooo.`                                      -oo/                 "); 
    printf("\n      MMMMMMMMMMMMMMds.      yMMMMMMMMMMMMMmy-                                  `sMMN:                 "); 
    printf("\n      MMMMmoooooohmMMMN+     yMMMMoooooodNMMMm.                                 yMMMo                  "); 
    printf("\n      MMMMy       `sMMMM/    yMMMM       :MMMMy             ssss/              /MMMm                   "); 
    printf("\n      MMMMy         yMMMm-   yMMMM       .MMMMy             MMMMy             -mMMM/                   "); 
    printf("\n      MMMMy         /MMMM/   yMMMM::::::ymMMMN:             hhhho             oMMMd.                   "); 
    printf("\n      MMMMy         /MMMM/   yMMMMMMMMMMMMMNs-                                MMMMy                    "); 
    printf("\n      MMMMy         +MMMN:   yMMMMyyyyyyy+/-                                  MMMMy                    ");  
    printf("\n      MMMMy        `NMMMy`   yMMMM                                            MMMMy                    "); 
    printf("\n      MMMMh......:omMMMN`    yMMMM                          ////:             hMMMy                    "); 
    printf("\n      MMMMMNNNNNNMMMMmo.     yMMMM                          MMMMy             /MMMN-                   "); 
    printf("\n      ddddddddddddss-.       sdddd                          dddds             `hMMM+                   "); 
    printf("\n      ````````````           `````                          `````              .mMMN.                  "); 
    printf("\n                                                                                :NMMh`                 "); 
    printf("\n                                                                                 .mMMo                 ");  
    printf("\n                                                                                  `..`                 "); 			        
		     
				
	
	} 		else {
		      			                                                                                                                                                                
        printf("\n                                                         ```          SUA M�DIA �: %.2f",                                                                             media);	                                                                                                       
        printf("\n                                                        +MdMs                                                                                                             ");   
        printf("\n                          ....            ....         -+: -+:                                         `...`         `...`          `...`                                 ");  
        printf("\n     `dNN:     .mNm.  `omNMMMMNh:     `odNMMMMNy/   :NNNNNNNNNNo        hNNNNNNNms-      hNNNh      `oNMMMMNmy.   `sNMMMMNms.    -ymMMMMMmy.    hNN:    `NNN         mNN` ");  
        printf("\n      :NMm`    yMM+  -NMN+-..:yMMh   -NMN+-..+dMMs  :MMm///////-        dMMs///sMMN:    +MMhMMs     mMMo-..sNMN. `mMM+-.-sMMm`  oMMd/.../dMMo   dMM:    `MMN         NMM` ");  
        printf("\n       sMM+   :MMd  .NMN-      oMMy .NMN`      ++-  :MMd                dMM:    sMMo   .NMh yMN-    mMMy/.. .--` `NMMs/.` ---  /MMd`     `hMM/  dMM:    `MMN         mMM` ");  
        printf("\n        NMM`  mMN.  /MMy       `MMN /MMh            :MMMNNNNNNN.        dMMyoooyMMm-   dMM: -MMm`   -hMMMMMNho.   :dMMMMMNh+`  yMM/       +MMy  dMM:    `MMN         oMh  ");  
        printf("\n        /MMh oMMs   /MMh       .MMN :MMd       .    :MMm///////`        dMMmmmmmy+    +MMd+//dMMo     `:/shmMMM+    `:/shmMMN: yMM+       oMMy  dMM:    `MMN         oMy  ");  
        printf("\n         hMM:mMm`    dMM/     `dMM/  dMMo`    +MNh` :MMd                dMM:         .NMMNNNNNMMM- -shs     oMMh :sho     sMMs -NMN.     -NMN.  hMM+    .MMN         .h:  ");  
        printf("\n         .NMNMM-     `hMMmo++smMN+   `oNMNhyyNMMd.  :MMNyyyyyyyy        dMM:        `dMM/     -NMd` hMMdo++yMMN: `dMMho++yMMN.  :mMNd+++hMMm-   -NMMh++oNMM/         mmm` ");  
        printf("\n          +yyy+        -oymmmdy+`      `:+yyys+.    -yyyyyyyyyyy        oyy.        -yys       oyy:  :sdmmmdy+`   `:ydmmmdy/`     /shmmmhs/      `+ymmmmho-          syy` "); 
	}
  	
																	}

void cadastrar(); //prot�tipo da fun��o. Boa pr�tica de programa��o

void cadastrar()
{
 
 
  
                                                                      
    printf("\n                     .oyy:                                   .yNNmNd+  yN+ `ymNmNmo  NNNNNNNNo`NNNNNNNd :NNN+  yNNN`   .NNd         -yNNmNd+  sNNNNNmh:  mN.   yN/ oNNNNNNN`:NNNNNNNs oNo .NNNNNNdo`  /hNNmNdo`      ");   Sleep(125);                                                             
    printf("\n                    :sshho                                   sMh` `yy. yM+ +Md. `sy-    dM/   `MM       /MdNm .MdMM`  `mNhMs       :Md.  `yy- sMo   :MN  NM.   hM/     +Nm/ :Md       sMs .MN   `dM/ oMy.  `oMd      ");   Sleep(125);                                          
    printf("\n                  `++.:yhy`                                  `smNNmy+  yM+ `odNMmh+`    dM/   `MMmmmmm: /MdsM/sM/MM`  hM/`mM:      hM/        sMmhddNm/  NM.   hM/   :dNo`  :MMmmmmm. sMs .MMhhdmNy` NM.     mM-     ");   Sleep(125);                                          
    printf("\n                 .o:  .shh/-:::///////:-`                    /o` `-yMy yM+ /o. `-sMh    dM/   `MM`````  /Md.MdNm MM` oMNhhmMN.     oMy    ss- sMs./mNo   NM.   hM/ .hMy.    :Mm`````  sMs .MN.-sMh.  dM+    .NN`     ");   Sleep(125);                               
    printf("\n               `-so/++ooyhhyssooo++shhhy/                     oMmo+omM/ yM+ +MNs+omMo    dM/   `MMssssss /Md hMMo MM`:Mm----oMd      oNdssmMy` sMo   sMh` oMdo+yMm`-MMmsssss-:MNssssso sMs MMN   :NN/ .dMho+yNm:     ");   Sleep(125);                      
    printf("\n         `.-:/+o++:-..`:shh.    .:+yhso:`                      ./+o+:`  -/.  `:+o+/.     :/.    //////// ./: .//` // :/.     :/`        -/.    :/-  ./oo+-  `////////.`///////: -/- `//    MMMM    MM                ");   Sleep(125);            
    printf("\n       :+:-.../+`      `oyh/ .:oyys+-`                                                                                                                                                                               ");   Sleep(125);
    printf("\n       :o+-``/+`        /yys+yys+-`                                                                                                                                                                                  ");   Sleep(125);
    printf("\n        `-osoo`       `./syhh+-`                                                                                                                                                                                     ");   Sleep(125);
    printf("\n          .ssho-`  `.:+syhdmd`                                  --------`        .-///-.             .://:-`    `--`     --.  `--.                                                                                   ");   Sleep(125);
    printf("\n         `o+ `/so::+syyo-:ddd+                                  dNNmmmmNmy-    /dNNmdmNNd/         :dNNddmNms`  /NN/    `NNh  .NNs                                                                                   ");   Sleep(125);
    printf("\n        `o+   `-ssyhy:`   ohhd.                                 mMN....-hMN:  sMMo.```.oNMs        NMN-``.omm/  /MM+    `MMh  -MMs                                                                                   ");   Sleep(125);
    printf("\n       `o+``./oyys/ohs-`  .yhho                                 mMN     `NMd .MMh       sMM-       +NMmhyo+:.`  /MM+    `MMh  -MMs                                                                                   ");   Sleep(125);
    printf("\n      `oy::+syy+-   .+ys:` /yhh-                                mMN      mMm :MMs       oMM/        `:oyhdNNm+  /MM+    `MMh  -MMs                                                                                   ");   Sleep(125);
    printf("\n      /hyyyho:`       `:so-`+yhy`                               mMN      mMm :MMs       oMM/        `:oyhdNNm+  /MM+    `MMh  -MMs                                                                                   ");   Sleep(125);
    printf("\n      +hhy/.             -oooyhh+                               mMN     :MMy  mMN.     .mMN`      :yh/   ``dMM. /MMo    `MMh  -MMs                                                                                   ");   Sleep(125);
    printf("\n       ..                  -oyyy/                               mMMoooohNMy`  .dMNy+/+yNMd-       `dMNy+/+yMMh  `dMNs+/omMN:  -MMdoooooo/                                                                            ");   Sleep(125);
    printf("\n                             `-.                                syyyyyys+.      :oydddys:          `/shdddys:    `/sddddy+.   .yyyyyyyyy+                                                                            ");   Sleep(125);
                                    
 
 	printf("\n\n\n\n");
  
 
	int menu;
	

	int rgm; 			
    
	printf("Ol� aluno novo :)  \n\nInforme seu RGM para que possamos cadastr�-lo ^_^ ");	
	printf("\n\nQual � o seu RGM? ");
	PedeNumero();
	
	rgm=conv; 
	system("cls"); // comando que limpa a tela
	                                                                                                                                                                                                                                 
	                                                                                                                   printf("                                                                                  SEJA BEM-VINDO                                              "); 
	printf("\n                     .oyy:                      ");                printf("   �CEUNSP CRUZEIRO DO SUL - SISTEMA DE CADASTRO DE NOTAS E M�DIA");                                                                  
    printf("\n                    :sshho                       ");              printf("  Ol� aluno------------------%i------------------", rgm); // regasta o RGM digitado e mostra no menu da tela seguinte          
    printf("\n                  `++.:yhy`                       ");             printf("*===================================================*");          
    printf("\n                 .o:  .shh/-:::///////:-`          ");              printf("Observe o MENU abaixo para escolher a op��o correta!\n");          
    printf("               `-so/++ooyhhyssooo++shhhy/          ");             printf("*===================================================*");         
    printf("\n         `.-:/+o++:-..`:shh.    .:+yhso:`              ");          printf("  [1] A2/TRABALHO     + A1");          
    printf("\n       :+:-.../+`      `oyh/ .:oyys+-`               ");            printf("    \[2] A2/SEM TRABALHO + A1 ");        
    printf("\n       :o+-``/+`        /yys+yys+-`                      ");                
    printf("\n        `-osoo`       `./syhh+-`                         ");                                        
    printf("\n          .ssho-`  `.:+syhdmd`                          ");                                         
    printf("\n         `o+ `/so::+syyo-:ddd+                          ");                                         
    printf("\n        `o+   `-ssyhy:`   ohhd.                           ");          printf("tecle uma das op��es: ");                              
    printf("\n       `o+``./oyys/ohs-`  .yhho                            ");                                      
    printf("\n      `oy::+syy+-   .+ys:` /yhh-                            ");                                     
    printf("\n      /hyyyho:`       `:so-`+yhy`                            ");                                    
    printf("\n      +hhy/.             -oooyhh+                              ");                                  
    printf("\n       ..                  -oyyy/                                ");                                
    printf("\n                                                                  ");

	
	printf("\n\n\n\n\n\n\n>>>>: ");
	scanf("%i",&menu); // armazena o  valor na vari�vel "&menu" digitado pelo o usu�rio conforme as possibilidades entre a linha 72 e 73.


		switch (menu) { // o comando "SWITCH" verifica a o valor armazenado na vari�vel "MENU", e de acordo com seu valor, ser� direcionado para um "CASE" espec�fico.
		
		
		case 1: // caso a variavel "MENU" armazenar o "valor 1", o comando "SWITCH" lIBERA os camandos reservados para este N�MERO! Conforme a linha 76 � linha 86.

	printf("\n");		
	                                                   printf("\n-------------------------------------");
	                                                   printf("\nA nota \"A2\" tem peso de 0 � 3       |");
 	                                                   printf("\n-------------------------------------");
	printf("                                                      Por favor, Digite a nota A2: "); 
	PedeNumero();  

	nota2=conv;
	
	if(nota2 >=0 ||nota2 <=3)
	{
	printf("\n\n");
	}
							

	
	while (nota2 >3){
		
		printf("\nNOTA DIGITADA: %.2f\n\n", nota2);
		
        printf("\n_________________________________________");
		printf("\nO valor %.2f esta acima do peso da nota A2.",nota2);
		printf("\n_________________________________________");
		printf("\n\n                                                                                           Por favor, digite novamente: ");
		scanf("%f", &nota2);
	}
	
	peso2 = nota2 * 2;
	
	printf("\n");
	printf("\n===============");
	printf("\nPeso da A2: %.2f", peso2);
	printf("\n===============");
														    printf("\n\n");
															printf("\n-------------------------------------");
	                                                        printf("\nA nota de \"trabalho\" tem peso de 0 � 2");
															printf("\n-------------------------------------");
	printf("                                                      Por favor, Digite a nota do trabalho: "); 
															   
	PedeNumero();

	trab=conv;
	
	if(trab >=0 ||trab <=3)
	{
	printf("\n\n");
	}
	
	while (trab > 2){
		
		printf("\nNOTA DIGITADA: %.2f\n\n", trab);
		
		printf("\n__________________________________________________");
		printf("\nO valor %.2f esta acima do peso da nota de trabalho     ",trab);
		printf("\n__________________________________________________");
		printf("\n\n                                                                                             Por favor, digite novamente: "); 
		scanf("%f", &trab);
		
		}
			t1 = trab *2;
			printf("\n");
			printf("\n===================");
			printf("\nNota de peso doTrabalho: %.2f", t1);
			printf("\n===================");
	
	
	printf("\n\n\n\nA nota \"A1\" tem peso de 0 � 5");
	printf("\n-----------------------------");
	printf("\n\n                                                                                           Por favor, Digite a nota A1: "); 
	PedeNumero();
	
	nota1=conv;
	
	if(nota1 >=0 ||nota1 <=5)
	{
	printf("\n\n");
	}
	 
	
	while (nota1 > 5){
		
		printf("\nNOTA DIGITADA: %.2f\n\n", trab);
		
		printf("\n__________________________________________________");
		printf("\nO valor %.2f esta acima do peso da nota A1     ",nota1);
		printf("\n__________________________________________________");
		printf("\n\n                                                                                         Por favor, digite novamente: "); 
		scanf("%f", &nota1);
		
		}
			peso1= nota1 *2;
			printf("\n===========");
			printf("\nPeso A1: %.2f", peso1);
			printf("\n===========\n");	
			
			
			
			media_com_trabalho(peso2,t1,peso1); // essa rotina recebe valores por par�metros com a nota de trabalho que "comp�em" "a nota da A2" � pedido do professor. Portanto, a A2 tem o "valor dividido", entre nota e trabalho.
		
		break; // comando semelhante ao system("pause"). Ap�s a intera��o com algum tipo de dado, o comando "BREAK" congela o programa para visualiza��o ou a espera de uma nova a��o � partir desta.
		
		case 2: // caso a variavel "MENU" armazenar o "valor 2", o comando "SWITCH" lIBERA os camandos reservados para este N�MERO! Conforme a linha 98 � linha 106.
	printf("\n");		
	                                                   printf("\n-------------------------------------");
	                                                   printf("\nA nota \"A2\" tem peso de 0 � 5       |");
 	                                                   printf("\n-------------------------------------");
	printf("                                                      Por favor, Digite a nota A2: "); 
	PedeNumero();  

	nota2=conv;
	
	if(nota2 >=0 ||nota2 <=3)
	{
	printf("\n\n");
	}
							

	
	while (nota2 >5){
		
		printf("\nNOTA DIGITADA: %.2f\n\n", nota2);
		
        printf("\n_________________________________________");
		printf("\nO valor %.2f esta acima do peso da nota A2.",nota2);
		printf("\n_________________________________________");
		printf("\n\n                                                                                           Por favor, digite novamente: ");
		scanf("%f", &nota2);
	}
	
	peso2 = nota2 * 2;
	
	printf("\n");
	printf("\n===============");
	printf("\nPeso da A2: %.2f", peso2);
	printf("\n===============");	
			
			
			
			
    printf("\n\n\n\nA nota \"A1\" tem peso de 0 � 5");
	printf("\n-----------------------------");
	printf("\n\n                                                                                           Por favor, Digite a nota A1: "); 
	PedeNumero();
	
	nota1=conv;
	
	if(nota1 >=0 ||nota1 <=5)
	{
	printf("\n\n");
	}
	 
	
	while (nota1 > 5){
		
		printf("\nNOTA DIGITADA: %.2f\n\n", trab);
		
		printf("\n__________________________________________________");
		printf("\nO valor %.2f esta acima do peso da nota A1     ",nota1);
		printf("\n__________________________________________________");
		printf("\n\n                                                                                         Por favor, digite novamente: "); 
		scanf("%f", &nota1);
		
		}
			peso1= nota1 *2;
			printf("\n===========");
			printf("\nPeso A1: %.2f", peso1);
			printf("\n===========\n");			
			
			
			
			
			media_sem_trabalho(peso2, peso1); // essa rotina recebe valores por par�metros "sem" a "nota de trabalho". Portanto, a A2 tem o "valor total", "n�o dividido".
			
		break; // comando semelhante ao system("pause"). Ap�s a intera��o com algum tipo de dado, o comando "BREAK" congela o programa para visualiza��o ou a espera de uma nova a��o � partir desta.
		
		default: // caso a variavel "MENU" for != dos valores "1 e 2", o comando SWHITCH executa o DEFAULT. Ou seja, um "caso de erro".
			system("cls");
			printf("*********************************");
			printf("\nPOR FAVOR, Tecle a op��o correta!\n"); // mensagem de erro para o usu�rio
			
			cadastrar(); // Ap�s o DEFAULT ser acionado,a fun��o "cadastrar" retorna para o "MENU" principal. Assim o usu�rio pode reconsultar o MENU e digitar corretamente as 2 op��es exist�ntes... 
						   //  � possivel ver, que a fun��o "cadastrar"(linha 114) resgata o "RGM" digitado anteriormente. Deixando o programa menos repetitivo!
				
		}
}

int main() {
	
	system("Title Sistema de Cadastro de Notas e Media Interdiciplinar");
	
	int resp;
	
	setlocale(LC_ALL, "portuguese");
	
	cadastrar();	// Ap�s o aluno digitar o rgm, ser� direcionado para a fun��o cadastrar. E nessa fun��o ser� possivel lan�ar suas notas e consultar sua m�dia final.
	

	
	do { //
	
	
	printf("\n\n\n\n\n\n                                                                  DESEJA FAZER UMA NOVA CONSULTA? ");
	printf("\n                                                                            TECLE [1]- SIM");
	printf("\n                                                                            TECLE [0]- N�O ");
	printf("\n\n                                                                           >>>>: ");
	scanf("%d", &resp); 
	system("cls");
	
				switch (resp) {
				 
					case 1:
						cadastrar();
						
					break;
					
					case 0:
						printf("\n\n\n\n                                                          :) Obrigado por utilizar o SISTEMA �CEUNSP CRUZEIRO DO SUL - SISTEMA DE CADASTRO DE NOTAS E M�DIA !  ");
						
						printf("\n\n                                                                                                       AT� A PR�XIMA VISITA ^^                            ");
			
						printf("\n\n                                                                                                 VOC� EST� DESLOGADO DO SISTEMA...                      ");
						
						printf("\n\n                                                                                      ====== PRESSIONE \"ENTER\" PARA SAIR DO SISTEMA =======");
						
						printf("\n\n");
					
						printf("\n\n");
											
					break;
						
					default:
						printf("\n\n");
						
						printf("\n\n");
						
						printf("                                         ERRO INESPERADO ):                                           ");
						
						printf("\n\n");
					
						printf("\n\n");
					
					break;	  
					
					}
		} while (resp==1);


		system("pause > NULL");
		  
		
		

	return 0;

	printf("\n\n");
	printf("\n\n");
	printf("\n\n");


}
