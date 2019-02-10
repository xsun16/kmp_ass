#include "string_matching.h"

int string_matching_naive(char *text, int N, char* pattern, int M){
	int count = 0; 
	int flag = 0;  
	for(int i = 0; i < N; i ++) {
		for (int j = 0; j < M; ++j) {
			char x = text[i + j];  
			char y = pattern[j];   
			if (x != y) {    
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			count ++;
		} else {
			flag = 0;
		}
	}
	return count;
}
