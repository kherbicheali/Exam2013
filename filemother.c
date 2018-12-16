#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Afficher_matrice(int taille, float ** matrice);//ce sous-programme affiche une matrice de nombre réels à l’aide de sa taille

void Inverser_matrice(int taille, float ** matrice, float ** matrice_inv);//ce sous-programme inverse une matrice triangulaire inférieure gauche à partir de la matrice initiale et de sa taille et renvoie la matrice inversée

void Triangle(int taille, float **Mat);//ce sous-programme remplit un triangle de Pascal dans une matrice sous forme tri-angulaire inférieure gauche à l’aide de sa taille.

void Ecrire_fichier(int taille, float ** matrice_a_ecrire);//ce sous-programme écrit dans un fichier la taille suivie de la matrice inversée du triangle de Pascal.


void Afficher_matrice(int taille, float ** matrice){
	int i,j;
	matrice = (float **) malloc(taille*sizeof(float *));
	for(i=0;i<taille;i++){
		matrice[i] = (float *) malloc(taille*sizeof(float));
	}

	//Ca sert à remplir la matrice mais ce n'est pas demandé pour le moment
	
	/*for (i=0;i<taille;i++){
		for (j=0;j<taille;j++){
			printf("\nmatrice[%d][%d]=",i,j);
			scanf("%f",&(matrice[i][j]));
		}
	}*/
	
	printf("\nM=\n");
	for (i=0;i<taille;i++){
		for (j=0;j<taille;j++){
			printf("%f\t",matrice[i][j]);
		}
		printf("\n");
	}	
}

int main (void){

float ** mat;
Afficher_matrice(2,mat);
return 0;
}
