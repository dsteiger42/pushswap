duplicacoes, caracteres estranhos

int	is_sorted(node	*tab)
{
	node	*temp;

	temp = tab->stack_a;
	while (temp->next)
	{
		if (temp->value < temp->next->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}

