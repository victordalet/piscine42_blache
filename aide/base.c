/*
    affichage printf():
        %d pour int
        %f pour float   
        %c pour char
        %s pour chaine de charactère
        %p pour adresse (rajouter & devant la var)
    -------------
    scnaf("%.",&var) pour demande (pas sécurisé)
    ---------------
    var : contunue de la variable
    &var : addresse où est stockée la variable
    -------------------
    switch() : teste la variable avec  case pour condition et default pour else
    (age == 15)? printf("tu as 15 ans") : printf("tu n'as pas 15 ans");   condition if et else en une seul ligne
    int quinze = (age == 15)? 1 : 0;      condition précédente avec stockage de variable pour if et else
    -------------------------
    do {condition;} while (condition);  fait une fois la condition avant de teste notre boucle
    ----------------------------
    void  ne renvoir rien et ne prend rien
    -----------------------------
    #include "fichier.h"    dans .h mettre fonction(); et dans autre .c mettre la fonction avec le #include 
    ----------------------------
    #ifndef ...
    #define ...     } permet d'inclure les fichiers dans le bon ordre et de ne pas inclure un fichier plusieures fois (... = nom du fichier h) 
    #endif         se met a la fin du fichier
    ------------------------------
    #define var 20    pour creer une constante dans l'étape prépocessing
    ----------------------------------
    constante prédéfinie : 
        __FILE__ (nom du fichier)
        __LINE__ (ligne du fichier)
        __DATE__ (date de compilation)
        __TIME__ (heure de compilation)
    ------------------------------------
    pointeur : variable contenant l'adresse d'une autre variable 
    var = adresse de la variable pointée
    *var = valeur de la variable pointée (definir le pointeur en même temps (int *var)) ;  permet de faire un return direct
    &var = adresse du pointeur
    int *pointeurNb1 = &nb1 ou  NULL;    déclaration et initialisation (création) d'un pointeur
    exemple : 
        int ft_change(int *nb1)
        {
            *nb1 = 4;
        }

        int main()
        {
            int nb1 = 5;
            ft_change(&nb1);
            printf("salut %d",nb1); # reponse = 4
            return 0 ;
        }
    ------------------------------------
    [déclaration tableau]
        <type> <nom> <x>; exemlpe: int tableau[5];
    [initialisation],
,       int tableau[5] = {5,100,2,8,6};
        int tableau[5] = {0}; //tout vaux 0
        int tableau[5] = {4}; //la premiere vaut 4 et le reste vaut 0
    [accès au tableau]
        tableau[x] = 5; //modifier une valeur
        tableau   //adresse du tableau
        *tableau  //premier élément du tableau
        *(tableau + x) //élément d'indice x   (même chose que tableau[x]  (donc un tableau est un pointeur))
    [affichage]
        boucle for et type du tableau
    [fonction]
        int afficher_tableau(int *tableau[] , int taille)  //[]pour être sur qu'il s'agit d'un tableau 
        afficher_tableau(tableau,5); //pas de & car déja pointeur
        int *tableau = fonction();  //pour le return 
        static int tableau[5];      //pour faire une variable statique (permet de modifier)
    ------------------------------------------
    signed char c[] = "salut";  //declaration char
    signed char c[] = "salut";
    ['\0'] //symbole de fin donc:
    signed char c[6] = "salut";
    signed char c[] = {'s','a','l','u','t'} //pas besoin du caractère de fin
    ------------------------------------------
    [fonction chaine]
        strcpy()  // copie une chaine dans une autre
        strlen()  // longueur d'une chaine
        strcmpt() // compare deux chaines (au niveau des mots)
        strcat()  // concaténer deux chaines (fusionner)
        strstr()  // chercher une chaine dans une autre
        strchr()  // chercher premiere occurence du caractère
        sprintf() // écrire dans une chaine
    -------------------------------------------
    (*monpointeur).unchamp = x;
    monpointeur->unchamp = x; 
    ------------------------------------------
    [structure] : 

        typedef struct player //définir une structure
        {
            signed char name[256];
            int hp;
            int mp;
        }player;


        void create_player(player *p)
        {
            p->mp = 40;
            p->hp = 200;
            strcpy(p->name, "billy"); //modifier chaine
        }


        int main(void)
        {
            player p1 = {"",0,0}; //initialisation
            create_player(&p1); //fonction creer un joeur
            printf("nom du joeur : %s \n", p1.name); //affichage
            p1.hp -= 50;  //modifier valeur
            return 0 ;
        }
    -----------------------------------------------------
    [enumeration]:

    typedef enum marqueVoiture //creation d'une énumération
    {
        PEUGEOT, //on peut mettre une valeur (PEUGEOT = 5)
        RENAULT,
        TOYOTAF
    }marque;


    int main(void)
    {
        marque voiture1 = TOYOTA;
        return 0 ;
    }
    ------------------------------------------------------
    [union]: //structure qui prend une seule place

    union nombre
    {
        int entier;
        float decimal;
    };


    int main(void)
    {
        union nombre nb1;
        nb1.entier  = 3;
        nb1.decimal = 3.14;
        return 0 ;
    }
    -----------------------------------------------------
    [allocation dynamique]:
            sizeof(<donnee>)                    // retourne la taille en octet d'une donnée
            malloc(<taille en octets>)          // allouer dynamiquement une zone mémoire
            free(<donnee_allouee>)                  // libere la mémoire aloué dynamiquement
            calloc(<donnee> , <taille_octet>)   // alloue et initialiser tout a 0
            realloc(<donnee , <nouvelle_taille) // réalloue un espace mémoire
    --------------------------------------- ---------------
    [fichiers]
        fopen(<fichiers> , <mode_ouverture>) : r (lecture seul , doit exister)
                                               w (écriture) 
                                               a (ajout fin fichier)
                                               r+ (lecture/écriture, doit exister)
                                               w+ (lecture/écriture, supprime contenu)
                                               a+ (ajout lecture/écriture, fin de fichier)

        fclose(<fichier>) // ferme un fichier ouvert
        feof(<fichier>)   // tester la fin d'un fichier
        [lecture]
            fgetc(<fichier>)  //lire un caractère
            fgets(<chaine>,<taille_chaine>,<fichier>)  // lit une ligne
            fsscanf(<fichier>,<format>)    //lit un texte formaté
        [écriture]
            fputc(<caractere>,<fichier>)   // écrit un caractère
            fputs(<chaine>,<fichier>)      // écrit une ligne de texte
            fprintf(<chaine>,<format>)     // écrit du texte formaté    
        [positionnement]
            ftell(<fichier>)               //retourne position curseur du fichier
            fseek(<fichier>,<deplacement>,<origine>) //déplace curseur
                -> origine :  SEKK_SET (début du fichier)
                              SEEK_CUR (position coureante)
                              SEEK_END (fin du fichier)
            rewind(<fichier>)  //reinitialise la position du curseur
        [divers]
            rename(<ancien_nom>,<nouveau_nom>)
            remove(<fichiers>) 
    ---------------------------------------------------------

        

*/