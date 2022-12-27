#include <stdio.h>
//計算1到N之間屬於5和7的倍數https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933
int main(){
    int inpt ;
    int first = 1;
    scanf("%d", &inpt);
    for (int i=1; i<inpt; i++) {
        if (i % 35 == 0) {
            if (first == 1) {
                printf("%d", i);
                first = 0;
            }
            else {
                printf(" %d", i);
            }
        }
    }
    printf("\n");
    return 0;
}
