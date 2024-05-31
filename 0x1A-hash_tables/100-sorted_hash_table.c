  printf("{");
  while (node != NULL)
  {
    printf("'%s': '%s'", node->key, node->value);
    node = node->snext;
    if (node != NULL)
      printf(", ");
  }
  printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
  shash_node_t *node;

  if (ht == NULL)
    return;

  node = ht->stail;
  printf("{");
  while (node != NULL)
  {
    printf("'%s': '%s'", node->key, node->value);
    node = node->sprev;
    if (node != NULL)
      printf(", ");
  }
  printf("}\n");
}
