/*for ios*/

#include "app.h"

int main(void) {
    
    int start = 0;
    
    do {
        printf("===================================================\n");
        printf("'           Shing Shang show                      '\n");
        printf("'                Menu                             '\n");
        printf("'                                                 '\n");
        printf("'                1 : start                        '\n");
        printf("'               2 : Quitt                         '\n");
        printf("===================================================\n");
        scanf("%d",&start);
        Buffer();
        
        if (start == 1) {
            initialiser();
            
            inter();
            
            run();
            
            return 0;
        }
        else if (start == 2) {
            return 0;
        }
        
    } while (start != 1 || start !=2 );
}
