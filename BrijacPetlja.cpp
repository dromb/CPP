#include <stdio.h>
#include <math.h>

int main(){

    printf("1. Musko sisanje: 100kn\n");
    printf("2. Izbrijavanje masinicom : 40kn\n");
    printf("3. Sredjivanje brade: 50kn\n");
    printf("4. Brijanje brade: 80kn\n");

    int broj,sum=0;

    while (broj){
        scanf("%d",&broj);
        sum+=broj==1?100:broj==2?40:broj==3?50:broj==4?80:0;
    }
    printf("%d",sum);
}
