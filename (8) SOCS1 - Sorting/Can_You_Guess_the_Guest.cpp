#include <stdio.h>
#include <stdbool.h>

void sort(short left, short mid, short right, int pb[]) {
    short sizeL = (mid + 1) - left;
    short sizeR = right - mid;

    int tempL[sizeL], tempR[sizeR];
    for (short i = 0; i < sizeL; i++) tempL[i] = pb[left + i];
    for (short j = 0; j < sizeR; j++) tempR[j] = pb[(mid + 1) + j];

    short i = 0, j = 0, k = left;
    while (i < sizeL && j < sizeR) {
        if (tempL[i] < tempR[j]) pb[k] = tempL[i++];
        else pb[k] = tempR[j++];
        k++;
    }

    while (i < sizeL) pb[k++] = tempL[i++];
    while (j < sizeR) pb[k++] = tempR[j++];
}

void merge_sort(short left, short right, int paper_bag[]) {
    if (left >= right) return;

    short mid = left + (right - left) / 2;

    merge_sort(left, mid, paper_bag);
    merge_sort(mid + 1, right, paper_bag);

    sort(left, mid, right, paper_bag);
}

int main() {
	
	// Input
    int num_case;
    scanf("%d", &num_case);

    for (int t = 0; t < num_case; t++) {
        int paper_bag[25];
        for (short j = 0; j < 25; j++) {
            scanf("%d", &paper_bag[j]);
        }

		// Process
        merge_sort(0, 24, paper_bag);
        
        int num[5];
		num[0] = paper_bag[0] / 2;
		num[1] = paper_bag[1] - num[0];
		num[4] = paper_bag[24] / 2;
		num[3] = paper_bag[23] - num[4];
       
       int tempBawah = paper_bag[1], tempAtas = paper_bag[23];
       short foundBawah = 0, foundAtas = 0;
       short counterBawah = 0, counterAtas = 0;
       short atas, bawah;
       if(tempBawah == tempAtas) num[2] = tempBawah / 2;
       else{
	       for(int i = 0, j = 24; i < 25; i++, j--){
	       		if(paper_bag[i] > tempBawah && !foundBawah){
	       			bawah = paper_bag[i];
					tempBawah = paper_bag[i];
					tempBawah -= num[0];
					counterBawah = i;
					foundBawah = 1;
				} if(foundBawah && paper_bag[i] == bawah) counterBawah++;
				
	       		if(paper_bag[j] < tempAtas && !foundAtas){
	       			atas = paper_bag[j];
					tempAtas = paper_bag[j];
					tempAtas -= num[4];
					counterAtas = 24 - j;
					foundAtas = 1;
				} if(foundAtas && paper_bag[j] == atas) counterAtas++;
				
				if(tempBawah == tempAtas){
				   num[2] = tempBawah;
				   break;
				}
		   }
		   if(tempBawah != tempAtas && foundBawah && foundAtas && counterBawah > counterAtas){
				num[2] = tempBawah;
			} else if(tempBawah != tempAtas && foundBawah && foundAtas && counterBawah < counterAtas){
				num[2] = tempAtas;
			} 
			if(atas == bawah) num[2] = tempBawah / 2;
	   }
       
		// Output
        printf("Case #%d:", t + 1);
        for (short j = 0; j < 5; j++) {
            printf(" %d", num[j]);
        }
        printf("\n");
    }

    return 0;
}

