/* 
Nama: Gede Bagus Darmagita
NPM: 140810180068
Tanggal: Rabu, 27-03-2019
Program: Pretest-04
*/

#include<iostream>
using namespace std;

struct ElemtList { 
	char npm[14];
	char nama[40];
	float ipk;
	ElemtList* next; 
}; 
typedef ElemtList* pointer; 
typedef pointer List;

void createList (List& First){
	First = NULL;
}

void createElmt (pointer& pBaru){
	pBaru = new ElemtList;
	cout << "Masukan Nama : ";
	cin >> pBaru->nama;
	cout << "Masukan NPM : ";
	cin >> pBaru->npm;
	cout << "Masukan IPK : ";
	cin >> pBaru->ipk;
	pBaru->next = NULL;
}
void insertSortNama (List& First, pointer pBaru){
	
	if (First==NULL) 		
			First=pBaru;
	else {					
		pBaru->next=First;	
		First=pBaru;		
	}
}

void traversal (List First){

	pointer pBantu;
	if (First == NULL){
		cout << "List Kosong"<<endl;
	}
	else {
		pBantu = First;					
		do {
			cout << "Mahasiswa" << endl
			cout << pBantu->nama << " || " << pBantu->npm << " || " << pBantu->ipk << endl;		
			pBantu = pBantu->next;		
		} while (pBantu != NULL);	
	}
}

void bubbleSort(struct ElemtList *start) 
{ 
    int swapped, i; 
    struct ElemtList *ptr1; 
    struct ElemtList *lptr = NULL; 
  
    if (First == NULL) 
        return; 
    do
    { 
        swapped = 0; 
        ptr1 = First; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->nama > ptr1->next->nama) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 

void swap(struct ElemtList *a, struct ElemtList *b) 
{ 
    int temp = a->nama; 
    a->nama = b->nama; 
    b->nama = temp; 
} 

main (){
	pointer a;
	List bagus;
	
	createList (bagus);				
	
	createElmt (a);					
	insertFirst (bagus, a);
}
