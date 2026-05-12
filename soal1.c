/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 5 - Foundation of Algorithm
 *   Hari dan Tanggal    : Selasa, 12 Mei 2026
 *   Nama (NIM)          : Abydzar Dzakyan Akbar (13224106)
 *   Nama File           : soal1.c
 *   Deskripsi           : melakukan pencetakan preorder, inorder, dan postorder dari tree keluarga
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>

 typedef struct Node{
    int keluarga;
    struct Node *kiri;
    struct Node *kanan;
 }Node;

 Node* node_baru(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node -> keluarga = data;
    node -> kiri = NULL;
    node -> kanan = NULL;
    return (node);
 }

 void preorder(Node* Node){
    if(Node == NULL){
        return;
    }
    printf("%d", Node -> keluarga);
    preorder(Node -> kiri);
    preorder(Node -> kanan);
 }

 void inorder(Node* Node){
    if(Node == NULL){
        return;
    }
    inorder(Node -> kiri);
    printf("%d", Node -> keluarga);
    inorder(Node -> kanan);
 }

 void postorder(Node* Node){
    if (Node == NULL){
        return;
    }
    printf("%d", Node -> keluarga);
    postorder(Node -> kiri);
    postorder(Node -> kanan);
 }
 
 #include <stdio.h>
 #include <string.h>
  
 int main() {
    int input;
    int i;
    int root;
    if(scanf("%d", &input) != 1){
        return 0;
    }

    Node* data_keluarga[input];
    Node *pohon = NULL;
    for (i = 0; i<input; i++){
        scanf("%d", &data_keluarga[i]);
        int temp [input];
        pohon -> kiri = data_keluarga[(2*i)+1];
        pohon -> kanan = data_keluarga[(2*i+2)];
    }

    printf("PRE ");
    preorder(pohon);
    printf("\n");
    printf("IN ");
    inorder(pohon);
    printf("\n");
    printf("POST ");
    printf("\n");
    postorder(pohon);
    
    return 0;
 }
