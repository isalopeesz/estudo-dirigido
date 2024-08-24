#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int r1, r2, r3, r4, r5; 
    
    printf("Será que farei o passeio?\n\n");
    
    printf("Tenho compromisso no dia? (1 - não, 0 - sim): ");
    scanf("%d", &r1);
    
    printf("Vou estar na cidade? (1 - não, 0 - sim): ");
    scanf("%d", &r2);
    
    printf("Tenho dinheiro? (1 - não, 0 - sim): ");
    scanf("%d", &r3);
        
    printf("Está chovendo? (1 - não, 0 - sim): ");
    scanf("%d", &r4);
    
    printf("É perto? (1 - não, 0 - sim): ");
    scanf("%d", &r5);
    
    if (r1 == 1 && r2 == 0 && r3 == 0 && r4 == 1 && r5 == 0) {
        printf("Eu vou!\n");
    } else {
        printf("Eu não vou!\n");
    }
    
    return 0;
}
