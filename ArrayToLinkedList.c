#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* Diziyi tek yönlü bağlı listeye çevirir ve listenin başını (head) döndürür. */
Node *arrayToLinkedList(int arr[], int size) {
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < size; i++) {
        Node *newNode = malloc(sizeof(Node));

        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            return head;
        }

        newNode->data = arr[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

/* Listeyi şu biçimde yazdırır: 10 -> 20 -> NULL */
void printList(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

/* Bellek sızıntısını önlemek için listedeki tüm düğümleri serbest bırakır. */
void freeList(Node *head) {
    Node *temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node *head = arrayToLinkedList(arr, size);

    printf("Linked List: ");
    printList(head);

    freeList(head);

    return 0;
}
