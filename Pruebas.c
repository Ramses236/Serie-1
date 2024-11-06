#include <stdio.h>

float moyenne (int a, int b, int c){
    return (a + b + c) /3.0;
}

int main()
{
    char nom[50], prenom[50]; 
    puts("Ecrire le nom et prenom de l'étudiant: ");
    scanf("%s %s", nom, prenom);
    
    puts("Ecrire les trois notes pour les modules separés par un espace: ");
    int al, pr, an;
    scanf("%i %i %i", &al, &pr, &an);
    printf("Le nom complet de l'etudiant est: %s %s\n", prenom, nom); printf("Le moyenne est egal: %f", moyenne(al, pr, an));
}
///int argc, char const *argv[]

/* Exercice 3:
    int a;
    scanf("%d", &a);
    /// b = a*a;    
    printf ("%d", a*a);

int Exercice4 (int a, int b){
    puts("Ingrese el valor de dos numeros: ");
    int a, b;
    scanf("%d %d", &a, &b);
    if (a != 0 && b != 0)
    {
        printf("Le resultat pour \"somme\" est: %d\n", a + b);
            printf("Le resultat pour \"soustraction\" est: %d\n", a - b);
                printf("Le resultat pour \"multiplication\" est: %d\n", a * b);
                    printf("Le resultat pour \"division\" est: %f\n", (float)a / b);
    }
    //return 0;
    }


int Exercice6 (int a, int b, int c){ 
    int a, b, c, temp;
    puts("Donner les trois valeurs pour: A, B, C");
    scanf("%d %d %d", &a, &b, &c);

    temp = a; a = b; b = c; c = temp;
    printf(" Les valeurs echangé sont:\nPour A: %d\nPour B: %d\nPour C: %d", a, b, c);
    return a, b, c;
    }

    int Exercice5 (int a, int b, int c){
    int produit, quantite, prix;
    puts("Ecrire le prix total, et la quantité:");

    scanf("%d %d", &produit, &quantite);
    prix = (produit * quantite);
    printf("Le prix total pour la quantité de produits est egual à: %d", prix);
    return prix;
    }


 Exercice 8:
     puts("Ingrese el valor de dos numeros: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf(Exercice4(a, b));
    return 0;

Proof: 
int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("Se ingreso: %d", num);
*/