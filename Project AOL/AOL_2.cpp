#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data{
	/*
		A struct to store the datas from the file
	*/
	
	char location[30]; 
	char city[20]; 
	long long price;
	short rooms;
	short bathroom;
	short carpark;
	char type[15]; 
	char furnish[15];
};

/* A Part of Case 1: Display() */

void Print_data(struct Data* d, int rows, int max){
	/*
		A module to print out the data per line	for as many rows
	*/	
	
	// Reads the file and shows the data
	if(rows > 0){
		for(int i = 0; i < rows; i++){
	       	printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
				d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
	       	if(i == max - 1) break;
	       	else if(i == rows - 1) printf("...                        |  ...           |  ...       |  ...    |  ...       |  ...      |  ...        |  ...\n");
		}
	} else if(rows == 0){
		printf("...                        |  ...           |  ...       |  ...    |  ...       |  ...      |  ...        |  ...\n");
	} else if(rows < 0){
		if(rows < - max) rows = - max;
		for(int i = max + rows; i < max; i++){
	       	if(i == max + rows && i != 0) printf("...                        |  ...           |  ...       |  ...    |  ...       |  ...      |  ...        |  ...\n");
	       	printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
				d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
		}
	}
}

/* --------------------------- */



/* A Part of Case 2: Search() */

void Search_num_print_data(struct Data* d, long long find, short option, int size){
	/*
		A module to search number data and print out the data
	*/		

	// Reads the struct and shows the data
		bool found = false;
		for(int i = 0; i < size; i++){
			switch(option){
				case 1: // Price
					if(find == d[i].price){
						printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
							d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
						found = true;
					} 
				break;
				case 2: // Rooms
					if(find == d[i].rooms){
						printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
							d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
						found = true;
					} 
				break;
				case 3: // Bathroom
					if(find == d[i].bathroom){
						printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
							d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
						found = true;
					} 
				break;
				case 4: // Carpark
					if(find == d[i].carpark){
						printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
							d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
						found = true;
					} 
				break;
			}
		} 	

		
	// If the data is not found
		if(!found) printf("Data not found!\n"); 
		
				
}

void Search_str_print_data(struct Data* d, char find[], short option, int size){
	/*
		A module to search string data and print out the data
	*/		

	// Reads the struct and shows the data
		bool found = false;
		for(int i = 0; i < size; i++){
			switch(option){
				case 5: // Location
					if(!strcmpi(d[i].location, find)){
						printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
							d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
						found = true;
					} 
				break;
				case 6: // City
					if(!strcmpi(d[i].city, find)){
						printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
							d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
						found = true;
					} 
				break;
				case 7: // Type
					if(!strcmpi(d[i].type, find)){
						printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
							d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
						found = true;
					} 
				break;
				case 8: // Furnish
					if(!strcmpi(d[i].furnish, find)){
						printf("%-26s |  %-13s |  %-9lld |  %-6hd |  %-9hd |  %-8hd |  %-10s |  %-8s\n", 
							d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
						found = true;
					} 
				break;
			}
		} 	

		
	// If the data is not found
		if(!found) printf("Data not found!\n"); 
		
			
}

int Search_num_count_data(struct Data* d, long long find, short option, int size){
	/*
		A function to count the number of data 
	*/		
	
	// Reads the struct and counts the data
		int counter = 0;
		for(int i = 0; i < size; i++){
			switch(option){
				case 1: // Price
					if(find == d[i].price) counter++;
				break;
				case 2: // Rooms
					if(find == d[i].rooms) counter++;					
				break;
				case 3: // Bathroom
					if(find == d[i].bathroom) counter++; 
				break;
				case 4: // Carpark
					if(find == d[i].carpark) counter++;
				break;
			}
		} 	
		
		
	return counter;		
}

int Search_str_count_data(struct Data* d, char find[], short option, int size){
	/*
		A function to count the number of data
	*/	
		
	// Reads the struct and counts the data
		int counter = 0;
		for(int i = 0; i < size; i++){
			switch(option){
				case 5: // Location
					if(!strcmpi(d[i].location, find)) counter++; 
				break;
				case 6: // City
					if(!strcmpi(d[i].city, find)) counter++; 
				break;
				case 7: // Type
					if(!strcmpi(d[i].type, find)) counter++; 
				break;
				case 8: // Furnish
					if(!strcmpi(d[i].furnish, find)) counter++; 
				break;
			}
		} 	
		
		
	return counter;		
}

void Find_in_column(char column[], char findstr[], long long* findnum, short* option){
	/*
		A module to take input for what to find in the column
	*/
	
	// Find column
		if(!strcmpi(column, "Price")){ // Numbers
			printf("How much price do you want to find: ");
			scanf("%lld", findnum);
			*option = 1;
		} else if(!strcmpi(column, "Rooms")){
			printf("How many rooms do you want to find: ");
			scanf("%lld", findnum);
			*option = 2;
		} else if(!strcmpi(column, "Bathroom")){
			printf("How many bathroom do you want to find: ");
			scanf("%lld", findnum);
			*option = 3;
		} else if(!strcmpi(column, "Carpark")){
			printf("How many carpark do you want to find: ");
			scanf("%lld", findnum);
			*option = 4;
		} else if(!strcmpi(column, "Location")){ // String
			printf("Which location do you want to find: ");
			scanf(" %s", findstr);
			*option = 5;
		} else if(!strcmpi(column, "City")){
			printf("Which city do you want to find: ");
			scanf(" %s", findstr);
			*option = 6;
		} else if(!strcmpi(column, "Type")){
			printf("What type of land do you want to find: ");
			scanf(" %s", findstr);
			*option = 7;
		} else if(!strcmpi(column, "Furnish")){
			printf("What furnishing condition are you looking for: ");
			scanf(" %s", findstr);
			*option = 8;
		}
}

/* --------------------------- */



/* A Part of Case 3: Sort() */

void sort(int left, int mid, int right, struct Data* d, short option, short asc){
	/*
		A module to sort the struct that have been divided into smaller arrays
	*/
	
 	// Step 1: declare the size of the temporary arrays
		int n1 = (mid + 1) - left;
		int n2 = (right + 1) - (mid + 1);
	
	
	// Step 2: fill in temporary arrays
		struct Data dL[n1], dR[n2];
		for(int i = 0; i < n1; i++) dL[i] = d[left + i]; 
		for(int j = 0; j < n2; j++) dR[j] = d[(mid + 1) + j]; 
	
	
	// Step 3: sort
		int i = 0, j = 0, k = left;
		while(i < n1 && j < n2){
			short condition = 0;
			
			// Filters which condition it should be based on the value of asc(1 for ascending and 0 for descending)
	        switch(option){
	            case 1: // Price
	                condition = (asc) ? (dL[i].price < dR[j].price) : (dL[i].price > dR[j].price);
	            break;
	            case 2: // Rooms
	            	condition = (asc) ? (dL[i].rooms < dR[j].rooms) : (dL[i].rooms > dR[j].rooms);
	            break;
	            case 3: // Bathroom
	            	condition = (asc) ? (dL[i].bathroom < dR[j].bathroom) : (dL[i].bathroom > dR[j].bathroom);
	            break;
	            case 4: // Carpark
	            	condition = (asc) ? (dL[i].carpark < dR[j].carpark) : (dL[i].carpark > dR[j].carpark);	
	            break;
	            case 5: // Location
	            	condition = (asc) ? (strcmp(dL[i].location, dR[j].location) < 0) : (strcmp(dL[i].location, dR[j].location) > 0);
	            break;
	            case 6: // City
	            	condition = (asc) ? (strcmp(dL[i].city, dR[j].city) < 0) : (strcmp(dL[i].city, dR[j].city) > 0);
	            break;
	            case 7: // Type
	            	condition = (asc) ? (strcmp(dL[i].type, dR[j].type) < 0) : (strcmp(dL[i].type, dR[j].type) > 0);
	            break;
	            case 8: // Furnish
	            	condition = (asc) ? (strcmp(dL[i].furnish, dR[j].furnish) < 0) : (strcmp(dL[i].furnish, dR[j].furnish) > 0);
	            break;
      		}
      		
			if(condition) d[k] = dL[i++];
			else d[k] = dR[j++];
			k++;
		}	
	
	
	// Step 4: append the data left
		while(i < n1) d[k++] = dL[i++];
		while(j < n2) d[k++] = dR[j++];
}

void Merge_sort(int left, int right, struct Data* d, short option, short order){
	/*
		A module to split the struct into smaller arrays to be sorted later on on the smaller arrays
	*/
	
	// Basecase
		if(left >= right) return;
		
		
	// Process
		int mid = left + (right - left) / 2;
		
		Merge_sort(left, mid, d, option, order);
		Merge_sort(mid + 1, right, d, option, order);
	
		sort(left, mid, right, d, option, order);
}

void Classify(short* option, short* ordertype, char column[], char order[]){
	/*
		A module to classify the type and option to sort
	*/
	
	// Detects whether the column is going to be sorted by alphabet(1) or integer(2)
		if(!strcmpi(column, "Price")) *option = 1;
		else if(!strcmpi(column, "Rooms")) *option = 2;
		else if(!strcmpi(column, "Bathroom")) *option = 3;
		else if(!strcmpi(column, "Carpark")) *option = 4;
		else if(!strcmpi(column, "Location")) *option = 5;
		else if(!strcmpi(column, "City")) *option = 6;
		else if(!strcmpi(column, "Type")) *option = 7;
		else if(!strcmpi(column, "Furnish")) *option = 8;	

	
	// Detects whether it should be sorted in ascending(asc) or descending(desc) order	
		if(!strcmpi(order, "asc")) *ordertype = 1;
		else *ordertype = 0;
}

/* --------------------------- */



/* A Part of Case 4: Export() */

void File_print_data(FILE* newfile, struct Data* d, int size){
	/*
		A module to print the sorted or unsorted data to a newfile
	*/
	
	// Print the file sorted (or not at all)
		for(int i = 0; i < size; i++){
	       	fprintf(newfile, "%s,%s,%lld,%hd,%hd,%hd,%s,%s\n", 
			   d[i].location, d[i].city, d[i].price, d[i].rooms, d[i].bathroom, d[i].carpark, d[i].type, d[i].furnish);
		}
}

/* --------------------------- */



/* A Part of Main program */

short Option(){
	/*
		A function to input the option
	*/
	
	// Input option
		short option;
		printf("Your choice (by number): ");
		scanf("%hd", &option);		
		
	
	// 	Re-input option if the option isnt in range (1-5)
		while(5 < option || option < 1 ){
			printf("\e[1;1H\e[2J");
			printf("\n\\ Your choice was invalid. \\\n\n");
			printf("What do you wish to do?\n");
			printf("1) Display data.\n");
			printf("2) Search data.\n");
			printf("3) Sort data.\n");
			printf("4) Export data.\n");
			printf("5) Exit.\n");
			printf("Re-enter your choice (by number): ");
			scanf("%hd", &option);
		}	
	
	
	// Returns option to main for switch case
		return option;
}

int Count_data(FILE* file){
	/*
		A function to count the amount of data in file
	*/
	
	// Declare struct
		struct Data d;
	
	
	// Counts the amount of data
		int counter = 0;
		char header[256];
		fscanf(file, "%[^\n]", header); // Scan the header 
		while(fscanf(file, " %[^,],%[^,],%lld,%hd,%hd,%hd,%[^,],%[^\n]", 
			d.location, d.city, &d.price, &d.rooms, &d.bathroom, &d.carpark, d.type, d.furnish) == 8) counter++;
		rewind(file); // Rewinds the pointer back to the beginning of the file
	
	
	// Returns data counted	
		return counter;
}

void Read_copy_data(FILE* file, struct Data* d, int size){
	/*
		A module to read and copy data to struct
	*/
	
	// Read and copy
		char header[256];
		fscanf(file, "%[^\n]", header); // Scan the header 
		for(int i = 0; i < size; i++)
			if(fscanf(file, " %[^,],%[^,],%lld,%hd,%hd,%hd,%[^,],%[^\n]", 
				d[i].location, d[i].city, &d[i].price, &d[i].rooms, &d[i].bathroom, &d[i].carpark, d[i].type, d[i].furnish) == 8) 
				continue;
		rewind(file); // Rewinds the pointer back to the beginning of the file		
}

/* --------------------------- */



/* The Module of Menus */

void Display(struct Data* d, int datasize){
	/*
		A module to display the data
	*/
	
	// Display interface
		printf("\e[1;1H\e[2J");
		printf("\n1) Display Data.\n\n");

					
	// Input rows to be displayed
		int rows;
		printf("Input number of rows (to be displayed): ");
		scanf("%d", &rows);
	
	
	// Display interface		
		printf("\nLocation                   |  City          |  Price     |  Rooms  |  Bathroom  |  Carpark  |  Type       |  Furnish\n");
	    printf("---------------------------------------------------------------------------------------------------------------------\n");	    
	
	
	// Reads the file and shows the data
		Print_data(d, rows, datasize);
		
	
	// Display interface
		printf("---------------------------------------------------------------------------------------------------------------------\n");	
}

void Search(struct Data* d, int datasize){
	/*
		A module to search the data
	*/
	
	// Display interface
		printf("\e[1;1H\e[2J");
		printf("\n2) Search Data.\n\n");		
		printf("( 'Location' || 'City' || 'Price' || 'Rooms' || 'Bathroom' || 'Carpark' || 'Type' || 'Furnish' )\n\n");
	
	// Input column to find
		char column[9];
		printf("Choose column to be searched (column name): ");
		scanf("%s", column);	
	
	
	// Input what to find in the column
		short option = 0;
		char findstr[30];
		long long findnum;
		Find_in_column(column, findstr, &findnum, &option);	
	
	
	// 	Re-input option if column not found		
		while(!option){
			printf("\nColumn not found,\n");
			printf("Re-input column to be searched (column name): ");
			scanf("%s", column);
			Find_in_column(column, findstr, &findnum, &option);
		}
		
		
	// Count data found
		int count;
		if(1 <= option && option <= 4) count = Search_num_count_data(d, findnum, option, datasize);
		else count = Search_str_count_data(d, findstr, option, datasize);
		printf("\n\\ We found %d data of what you have searched for! \\\n", count);


	// Display interface	
		printf("\nLocation                   |  City          |  Price     |  Rooms  |  Bathroom  |  Carpark  |  Type       |  Furnish\n");
	    printf("---------------------------------------------------------------------------------------------------------------------\n");	    
	    
	    
	// Search and shows data
		if(1 <= option && option <= 4) Search_num_print_data(d, findnum, option, datasize);
		else if(5 <= option && option <= 8) Search_str_print_data(d, findstr, option, datasize); 
		
		
	// Display interface
	    printf("---------------------------------------------------------------------------------------------------------------------\n");
}

void Sort(struct Data* d, int datasize){
	/*
		A module to sort the data
	*/
	
	// Display interface
		printf("\e[1;1H\e[2J");
		printf("\n3) Sort Data.\n\n");		
		printf("( 'Location' || 'City' || 'Price' || 'Rooms' || 'Bathroom' || 'Carpark' || 'Type' || 'Furnish' )\n\n");
	
	// Input column
		char column[9], order[5];
		printf("Choose column to be sorted (column name): ");
		scanf("%s", column);
		printf("Sort by ascending ('asc') or descending ('desc') order: ");
		scanf(" %s", order);		
		
		
	// Find type(string or number) and option to sort
		short option, ordertype;
		Classify(&option, &ordertype, column, order); 

		
	// Sort
		Merge_sort(0, datasize - 1, d, option, ordertype);
	
	
	// Display interface
		printf("\n\\ Data sorted! \\\n");	
		printf("\\ Here are the first 10 data after sort: \\\n");	
		printf("\nLocation                   |  City          |  Price     |  Rooms  |  Bathroom  |  Carpark  |  Type       |  Furnish\n");
	    printf("---------------------------------------------------------------------------------------------------------------------\n");	  
			
		
	// Shows the first 10 rows of the data after sort
		Print_data(d, 10, datasize);
		
		
	// Display interface
	    printf("---------------------------------------------------------------------------------------------------------------------\n");
}

void Export(struct Data* d, int size, FILE* file, char fname[]){
	/*
		A module to export the data
	*/
	
	// Display interface
		printf("\e[1;1H\e[2J");
		printf("\n4) Export Data.\n\n");
		
		
	// Input file name
		char nfname[50];
		printf("Input file name (avoid spaces and any symbols): ");
		scanf("%s", nfname);
		strcat(nfname, ".csv");
	
		
	// If file name is the same as the original file ask whether do the user want to re-write or not
		while(!strcmp(nfname, fname)){
			char yn[4];
			printf("\nDo you wish to re-write the original file?\n");
			printf("( 'yes' || 'no' ): ");
			scanf("%s", yn);
			if(!strcmpi(yn, "yes")) break;
			else if(!strcmpi(yn, "no")){
				printf("\nRe-input file name (avoid spaces and any symbols): ");
				scanf("%s", nfname);
				strcat(nfname, ".csv");
			}
		}
		
		
	// Scan header to re-print later in the newfile	
		char header[256];
		fscanf(file, "%[^\n]", header);
		
		
	// Open newfile to write	
		FILE* newfile = fopen(nfname, "w");
		
		
	// Print the file sorted (or not at all)
		fprintf(newfile, "%s\n", header); // Print header
		File_print_data(newfile, d, size);
	
	
	// Close newfile
		fclose(newfile);	
	
		
	// Display interface
		printf("\n\\ Data successfully written to file '%s'! \\\n", nfname);
}

/* --------------------------- */



int main(){
	/*
		The main program runs here
	*/
	
	// Open file to read
		char fname[50];
		strcpy(fname, "file.csv"); // File to open here
		FILE* file = fopen(fname, "r");
		
		
	// Count data
		int datasize = Count_data(file);
		

	// Call struct based on the amount of data counted
		struct Data* data = (struct Data* )malloc(sizeof(struct Data) * datasize);


	// Read and copy data to struct
		Read_copy_data(file, data, datasize);


	// Display Menu
		while(true){		
			printf("\n");
			printf("What do you wish to do?\n");
			printf("1) Display data.\n");
			printf("2) Search data.\n");
			printf("3) Sort data.\n");
			printf("4) Export data.\n");
			printf("5) Exit.\n");	
	
			// Run menu
			switch(Option()){
				case 1:
					Display(data, datasize);			
				break;	
				case 2:
					Search(data, datasize);					
				break;		
				case 3:
					Sort(data, datasize);	
				break;	
				case 4:
					Export(data, datasize, file, fname);	
				break;	
				case 5:
					fclose(file);
					free(data);
					printf("\n\\ Stay hydrated, have a nice day! ;) \\\n");		
				return 0;
			}
			getchar();
			printf("\n");
			printf("Press 'Enter' to continue ...");
			if(getchar()) printf("\e[1;1H\e[2J"); // INI TAU DARI TEMEN :o keren bangeettt wowowow
		}	
}
