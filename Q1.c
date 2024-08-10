#include <stdio.h>

struct Type {
    char type[20]; 
    char common_friends[50]; 
    int places_visited; 
};
struct Friends {
    char name[50];
    char pet_name[20]; 
    char phone_number[20]; 
    struct Type type; 
};

int main() {
    int num_friends;
    printf("Enter the number of friends to add: ");
    scanf("%d", &num_friends);

    struct Friends friends[num_friends];
    
    for (int i = 0; i < num_friends; i++) {
        printf("Enter Friend Name: ");
        scanf("%s", friends[i].name);
        printf("Enter Pet Name: ");
        scanf("%s", friends[i].pet_name);
        printf("Enter Phone Number: ");
        scanf("%s", friends[i].phone_number);
        printf("Enter Type of friend: ");
        scanf("%s", friends[i].type.type);
        printf("Enter Name of Common Friends: ");
        scanf("%s", friends[i].type.common_friends);
        printf("Enter No. of Places Visited Together: ");
        scanf("%d", &friends[i].type.places_visited);
        printf("\n");
    }

    printf("Friends List:\n");
    printf("S.No.\tName\t\tPet Name\tPhone Number\tType of Friend\tName of common friends\tNo. of places visited together\n");
    for (int i = 0; i < num_friends; i++) {
        printf("%d\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%d\n", i + 1, friends[i].name, friends[i].pet_name, friends[i].phone_number, friends[i].type.type, friends[i].type.common_friends, friends[i].type.places_visited);
    }

    return 0;
}
