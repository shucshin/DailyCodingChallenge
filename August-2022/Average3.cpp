#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, n4, exam;
    cin >> n1 >> n2 >> n3 >> n4;
    float media = n1*0.2 + n2*0.3 + n3*0.4 + n4*0.1;
    if(media >= 7.0)
        printf("Media: %.1f\nAluno aprovado.\n", media);
    else if(media < 5.0)
        printf("Media: %.1f\nAluno reprovado.\n", media);
    else {
        printf("Media: %.1f\n", media);
        cout << "Aluno em exame.\n";
        cin >> exam;
        printf("Nota do exame: %.1f\n", exam);
        float avg = (media+exam)/2;
        if(avg >= 5.0)
            cout << "Aluno aprovado.\n";
        else
            cout << "Aluno reprovado.\n";
        printf("Media final: %.1f\n", avg);
    }
    return 0;
}