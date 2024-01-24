#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void rotate(int src[], int tar[], int N){
	int i;
	
	tar[0] = src[N-1];
	for(i = 0; i < N-1; i++)
	   tar[i + 1] = src[i];
	   
	for(i = 0; i < N; i++)
	   src[i] = tar[i];
}

void insert(int src[], int tar[], int N, int x){
	int i;
	
	for(i = 0; i < N; i++)
	   tar[i] = src[i];
	src[0] = x;   
	for(i = 0; i < N; i++)
	   src[i+1] = tar[i];
	
}

int main(){
	int i, src[10] = {1,2,3,4,5,6,7,8,9,10}, tar[10];
	int N = 4, M; 
	
	src[0] = N;
	M = 1;    
	N--;
	while(N){
		insert(src, tar, M, N);
	  	M++; 
		for(i = 0; i < N; i++)
		  rotate(src, tar, M);
		N--;
	}
	for(i = 0; i < M; i++)
	   printf("%d",src[i]);
	printf("\n");
}
