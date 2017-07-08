
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

#include <iostream>
#include "StringPuzzles.h"

int main() {

	StringPuzzles strPuzzles;

	std::string word = "Single";
	char * str = new char[word.size() + 1];
	std::copy(word.begin(), word.end(), str);
	str[word.size()] = '\0';
	strPuzzles.revertString(str);
	std::cout<<word<<" -> "<<str<<"\n";


	delete str;
	word = "Reverting words in a string";
	str = new char[word.size() + 1];
	std::copy(word.begin(), word.end(), str);
	str[word.size()] = '\0';
	strPuzzles.revertWordsInString(str);
	std::cout<<word<<" -> "<<str<<"\n";
	return 0;
}