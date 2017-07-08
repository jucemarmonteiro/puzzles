
// Copyright {2011} {Jucemar Monteiro - jucemar.monteiro@gmail.com}
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "StringPuzzles.h"
#include <cstring>
#include <iostream>
// ----------------------------------------------------------------------------

void StringPuzzles::revertString(char * str) {
	revertString(str, std::strlen(str));
} // end method 

// ---------------------------------------------------------------------------

void StringPuzzles::revertString(char * str, int size, int initPos){
	for(int i = 0; i < (size/2); ++i) {
		str[initPos+i] += str[initPos+size-1-i];
		str[initPos+size-1-i] = str[initPos+i] - str[initPos+size-1-i];
		str[initPos+i] -=  str[initPos+size-1-i];
	} // end for 
}

void StringPuzzles::revertWordsInString(char * str) {
	revertWordsInString(str, std::strlen(str));
}

void StringPuzzles::revertWordsInString(char * str, int size) {
	revertString(str, size);

	int left = 0;
	int right = 0;
	while(left < size) {
		while(left < size && str[left] == ' ') left++;
		right = left;
		while(right < size && str[right] != ' ') right++;
		int length = right - left;
		revertString(str, length, left);
		left = right;
	}

}