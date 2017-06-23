/*
	Copyright 2015 Mariusz Dzikowski

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/
#include <ex.h>

#include <stdlib.h>

void* ex_malloc(unsigned int size) {
	return malloc(size);
}

void* ex_realloc(void* data, unsigned int size) {
	return realloc(data, size);
}

void* ex_calloc(unsigned num, unsigned size) {
	return calloc(num, size);
}

void ex_free(void* data) {
	free(data);
}