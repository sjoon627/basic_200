#include <stdio.h>
#include <vector>

// Helpers
const int INF = 1987654321;
int min2(int a, int b){return a>b ? b:a;}
int max2(int a, int b){return a>b ? a:b;}

// Class implementation
class segnode{
public:
	
	// Properties
	int leftcover, rightcover;
	int sum, min, max;
	segnode *leftchild, *rightchild, *parent;
	
	// Constructor
	segnode(int left, int right, const std::vector<int> &val, segnode *parent){
		// Set properties
		this->leftcover = left; 
		this->rightcover = right;
		this->parent = parent;
		if(left < right){ // Non-leaf node; Construct recursively
			int mid = (left+right)/2;
			this->leftchild = new segnode(left, mid, val, this);
			this->rightchild = new segnode(mid+1, right, val, this);
			this->refreshProperties();
		}
		else{ // Leaf node
			this->sum = val[left];
			this->min = val[left];
			this->max = val[left];
			this->leftchild = NULL;
			this->rightchild = NULL;
		}
	}
	
	// Get segment properties
	void getSegmentPropeties(int left, int right, int *result_sum, int *result_min, int *result_max, bool *result_error){
		int mid = (this->leftcover + this->rightcover)/2;
		if(this->leftcover == left && this->rightcover == right){ // Fully fit
			*result_sum += this->sum;
			*result_min = min2(*result_min, this->min);
			*result_max = max2(*result_max, this->max);
		}
		else if(this->leftcover == this->rightcover){ // Invalid
			*result_error = true;
		}
		else if(left <= mid){ // Left exist
			if(right <= mid) this->leftchild->getSegmentPropeties(left, right, result_sum, result_min, result_max, result_error);
			else{ // Partial
				this->leftchild->getSegmentPropeties(left, mid, result_sum, result_min, result_max, result_error);
				this->rightchild->getSegmentPropeties(mid+1, right, result_sum, result_min, result_max, result_error);
			}
		}
		else this->rightchild->getSegmentPropeties(left, right, result_sum, result_min, result_max, result_error); // Right only
	}
	
	// Update single node value
	void refreshProperties(){
		if(this->leftchild == NULL || this->rightchild == NULL) return;
		this->sum = this->leftchild->sum + this->rightchild->sum;
		this->min = min2(this->leftchild->min, this->rightchild->min);
		this->max = max2(this->leftchild->max, this->rightchild->max);
	}
	
	// Upper propagation
	void upperPropagation(){
		this->refreshProperties();
		if(this->parent != NULL) this->parent->upperPropagation();
	}
	
	// Update value
	void updateValue(int index, int value){
		int mid = (this->leftcover + this->rightcover)/2;
		if(this->leftcover == this->rightcover){ // If this node is leaf node
			if(this->leftcover == index){ // If index is arrived correctly
				this->sum = value;
				this->min = value;
				this->max = value;
				if(this->parent != NULL) this->upperPropagation();
			}
		} // Otherwise we need to go deeper
		else if(index <= mid) this->leftchild->updateValue(index, value);
		else this->rightchild->updateValue(index, value);
	}
};

// Print bar
const int barsize = 100;
void printbar(){
	for(int i=0; i<barsize; i++) printf("-");
	printf("\n");
}

// Main function
int main(void){
	
	// Get input
	int n; printf("Enter the number of nodes: "); scanf("%d", &n);
	std::vector<int> nums(n);
	for(int i=0; i<n; i++){
		printf("Enter the number of %dth node: ", i+1); 
		scanf("%d", &nums[i]);
	}
	
	// Construction
	segnode *root = new segnode(0, nums.size()-1, nums, NULL);
	printf("Segment tree construction completed; Sum = %d, Min = %d, Max = %d\n", root->sum, root->min, root->max);

	// Query
	while(true){
		printbar();
		printf("Query 1 i x: Update i-th index value to x\n");
		printf("Query 2 i j: Get sum, min, max of values between index i and j\n");
		//printf("Query 3: Print all information\n");
		printf("Query 0: Termination\n");
		int q; printf("Input your query type(0, 1, 2): "); scanf("%d", &q);
		if(q==0) break; // Termination
		else if(q==1){ // Modify values
			int index, value; 
			printf("Input index and value to update: "); 
			scanf("%d %d", &index, &value); index--;
			if(0 <= index && index < n){
				root->updateValue(index, value);
				printf("Updated.\n");
			}
			else printf("Invalid index entered(%d), try again.\n", index);
		} 
		else if(q==2){ // Search values
			int left, right;
			printf("Input left and right index bound to search: ");
			scanf("%d %d", &left, &right); left--; right--;
			if(0 <= left && left <= right && right < n){
				int rsum = 0, rmin = INF, rmax = -INF; bool rerror = false;
				root->getSegmentPropeties(left, right, &rsum, &rmin, &rmax, &rerror);
				if(rerror) printf("Unknown error received while searching properties, try again.\n");
				else printf("Search result between range(%d ~ %d): Sum %d, Min %d, Max %d\n", left+1, right+1, rsum, rmin, rmax);
			}
			else printf("Invalid index range(%d ~ %d), try again.\n", left+1, right+1);
		} 
		else printf("Invalid query type(=%d), try again.\n", q);
	}
	delete root;
	return 0;
}
