#include <stdio.h>

struct ponto {
    int x, y;
};

int dentroRet(struct ponto *v1, struct ponto *v2, struct ponto *p) {
    if (p->x >= v1->x && p->x <= v2->x && p->y >= v1->y && p->y <= v2->y) {
        return 1;
    } else
        return -1;
}

int main () {
    struct ponto p;
    int ver1, ver2, ver3, ver4;

    printf("Entre com as coordenadas dos vertices inferiores: \n");
    scanf("%d %d", &ver1, &ver2);
    struct ponto v1 = { ver1, ver2 };

    printf("Entre com as coordenadas dos vertices superiores: \n");
    scanf("%d %d", &ver3, &ver4);
    struct ponto v2 = { ver3, ver4 };

    printf("Entre com as coordenadas do ponto (x y): \n");
    scanf("%d %d", &p.x, &p.y);

    printf("%d \n", dentroRet(&v1, &v2, &p));

    return 0;
}
