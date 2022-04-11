#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct details{
    int id;
    float sallary;
    char name[50];
    };
int main(){
    struct details emp[3];
 /*   emp.id=1;
    strcpy(emp.name,"sawarni");
    emp.sallary=45.0;
    printf("name: %s\n",emp.name);
    printf("id: %d\n",emp.id);
    printf("sallary: %f\n",emp.sallary); */
    for(int i=0;i<3;i++){
        printf("emp %d id: ",i+1);
        scanf("%d",&emp[i].id);
        printf("emp %d sallary: ",i+1);
        scanf("%f",&emp[i].sallary);
        printf("emp %d name: ",i+1);
        scanf("%s",emp[i].name);
    } 
    for(int i=0;i<3;i++){
        printf("employe id: %d\n",emp[i+1].id);
        printf("employee sallary: %f\n",emp[i+1].sallary);
        printf(" employee name: %s\n",emp[i+1].name);

    }
    return 0;
}