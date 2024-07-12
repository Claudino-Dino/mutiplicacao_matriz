#include <stdio.h>

int matriz1[2][2], matriz2[2][2], matriz3[2][2];
int i, j;
int x1[2], x2[2], y1[2], y2[2];

int main()
{

    system("cls");

    printf("Primeira Matriz\n\n");

    for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            fflush(stdin);
            printf("Digite o numero do elemento %d x %d: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nSegunda Matriz\n\n");

    for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            fflush(stdin);
            printf("Digite o numero do elemento %d x %d: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

x1[0] = matriz1[0][0];
x1[1] = matriz1[0][1];

x2[0] = matriz1[1][0]; 
x2[1] = matriz1[1][1]; 

y1[0] = matriz2[0][0];
y1[1] = matriz2[1][0];

y2[0] = matriz2[0][1]; 
y2[1] = matriz2[1][1]; 

matriz3[0][0] = ((x1[0] * y1[0]) + (x1[1] * y1[1]));
matriz3[0][1] = ((x1[0] * y2[0]) + (x1[1] * y2[1]));
matriz3[1][0] = ((x2[0] * y1[0]) + (x2[1] * y1[1]));
matriz3[1][1] = ((x2[0] * y2[0]) + (x2[1] * y2[1]));

printf("\nR E S P O S T A\n");

printf("\n%d | %d\n%d | %d", matriz3[0][0], matriz3[0][1], matriz3[1][0], matriz3[1][1]);

printf("\n\n---------------");

// printf("\nX:\n");
// printf("%d | %d", x1[0], x1[1]);
// printf("\n%d | %d", x2[0], x2[1]);

// printf("\nY:\n");
// printf("%d | %d", y1[0], y1[1]);
// printf("\n%d | %d", y2[0], y2[1]);

}

