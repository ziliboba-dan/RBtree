#ifndef RBTREE
#define RBTREE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define COLOR_RED 0
#define COLOR_BLACK 1
struct rbtree {
	int key;
	char *value;
	int color;
	struct rbtree *parent;
	struct rbtree *left;
	struct rbtree *right;
};

void rbtree_print(struct rbtree *tree, int level);
struct rbtree *rbtree_add(struct rbtree *root, int key, char *value);
struct rbtree *rbtree_fixup_add(struct rbtree *root,struct rbtree *node);
struct rbtree *rbtree_left_rotate(struct rbtree *root, struct rbtree *node);
struct rbtree *rbtree_right_rotate(struct rbtree *root, struct rbtree *node);
struct rbtree *rbtree_lookup(struct rbtree *tree, int key);
struct rbtree *rbtree_max(struct rbtree *tree);
struct rbtree *rbtree_min(struct rbtree *tree);
void rbtree_free(struct rbtree *tree);

struct rbtree *rbtree_fixup_delete(struct rbtree *root, struct rbtree *x);
struct rbtree *rbtree_delete(struct rbtree *root, int key);
struct rbtree *rbtree_transplant(struct rbtree *root, struct rbtree *u, struct rbtree *v);

#endif
