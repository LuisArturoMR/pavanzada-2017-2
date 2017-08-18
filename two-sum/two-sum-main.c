#include <stdlib.h>
#include "two-sum.h"

int main(){
	int nums[] = {2,7,11,15};
	int target = 9;
	int len = 4;
	int *result = getIndexes(nums, len, target);

	if(result != NULL && (nums[result[0]] + nums[result[1]] == target)){
		printf("Nice Job! \n");
	}else{
		printf("Upps :( \n");
	}

}
