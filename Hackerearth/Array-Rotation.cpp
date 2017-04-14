#include<iostream>

using namespace std;

void shiftByK(char S[], char shiftedS[], int N, int K);


int main(){
	
	
	string s = "HackerEarth";
	int n=6,k=2;
	
		shiftByK(s);

	
	
	return 0;
}


void shiftByK(char S[], char shiftedS[], int N, int K) {
    // Iterate through the length of given string
    for(int i=0; i<N; i++) {
        // Find the index for this current character in shiftedS[]
        int idx = (i+K) % N;
        // Copy that character at the found index idx
        shiftedS[idx] = S[i];
    }
    // Add a NULL character to mark the end of string
    shiftedS[N] = '\0';
}
