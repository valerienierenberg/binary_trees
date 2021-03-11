#include "binary_trees.h"

/**
 * bt_enqueue - function to add elements to a queue
 * description: first in
 * @q: pointer to queue
 * @n: value of element to be added
 *
 * Return: void
 */

void bt_enqueue(queue *q, const binary_tree_t *n)
{
	qnode node = malloc(sizeof(struct qnode_s));

	node->value = n;
	node->next = 0;
	if (q->end)
		q->end->next = node;
	else
		q->begin = node;
	q->end = node;
}

/**
 * bt_dequeue - func to remove an element from the head of the queue
 * description: first out
 * @q: pointer to queue
 * Return: node from binary tree
 */

const binary_tree_t *bt_dequeue(queue *q)
{
	const binary_tree_t *tmp = q->begin->value;
	qnode second = q->begin->next;

	free(q->begin);
	q->begin = second;
	if (!q->begin)
		q->end = 0;
	return (tmp);
}

/**
 * bt_queue_empty - checks if queue is empty
 * description: verify empty queue
 * @q: pointer to queue
 * Return: y or n
 */

int bt_queue_empty(queue *q)
{
	return (!q->begin);
}

/**
 * binary_tree_levelorder - traverses a tree level by level
 * @tree: pointer to the root node of the tree
 * @func: function pointer to print the nodes
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue nodequeue = {NULL, NULL};
	const binary_tree_t *next_sub;

	if (tree == NULL || func == NULL)
		return;

	enqueue(&nodequeue, tree);
	while (!queue_empty(&nodequeue))
	{
		next_sub = dequeue(&nodequeue);
		func(next_sub->n);
		if (next_sub->left)
			enqueue(&nodequeue, next_sub->left);
		if (next_sub->right)
			enqueue(&nodequeue, next_sub->right);
	}
}
