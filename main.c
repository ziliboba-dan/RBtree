#include "rbtree.h"

int main (int argc, char **argv) {
	struct rbtree *tree = NULL;
	tree = rbtree_add(tree, 10, "10");
	tree = rbtree_add(tree, 5, "5");
	tree = rbtree_add(tree, 3, "3");
	tree = rbtree_add(tree, 11, "11");
	tree = rbtree_add(tree, 12, "12");
	tree = rbtree_add(tree, 6, "6");
	tree = rbtree_add(tree, 8, "8");
	tree = rbtree_add(tree, 9, "9");
		

	struct rbtree *tmp = NULL;
	tmp = rbtree_max(tree);
	printf("max = %d\n",tmp->key);
	
	tmp = rbtree_min(tree);
	printf("min = %d\n",tmp->key);
	
	rbtree_print(tree, 0);
	printf("\n\n\n\n");
	rbtree_delete(tree, 5);
	
	rbtree_print(tree, 0);
	
	rbtree_free(tree);      
return 0;
}

