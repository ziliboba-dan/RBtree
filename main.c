#include "rbtree.h"

int main (int argc, char **argv) {
	struct rbtree *tree = NULL;
	tree = rbtree_add(tree, 35, "35");
	rbtree_print(tree, 1);
	printf("\n-------\n");
	tree = rbtree_add(tree, 5, "5");
	rbtree_print(tree, 1); printf("\n-------\n");
	tree = rbtree_add(tree, 4, "4");
	rbtree_print(tree, 1); printf("\n-------\n");
	tree = rbtree_add(tree, 11, "11");
	rbtree_print(tree, 1); printf("\n-------\n");
	tree = rbtree_add(tree, 12, "12");
	rbtree_print(tree, 1); printf("\n-------\n");
	tree = rbtree_add(tree, 6, "6");
	rbtree_print(tree, 1);	printf("\n-------\n");
	tree = rbtree_add(tree, 8, "8");
	rbtree_print(tree, 1); printf("\n-------\n");
	tree = rbtree_add(tree, 9, "9");
	rbtree_print(tree, 1); printf("\n-------\n");
		

	struct rbtree *tmp = NULL;
	tmp = rbtree_max(tree);
	
	printf("max = %d\n",tmp->key);
	
	tmp = rbtree_min(tree);
	printf("min = %d\n",tmp->key);
	
	rbtree_print(tree, 4);
	printf("\n\n\n\n");
	rbtree_delete(tree, 5);
	
	rbtree_print(tree, 1);
	
	rbtree_free(tree);      
return 0;
}
