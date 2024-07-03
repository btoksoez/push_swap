/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:29:10 by btoksoez          #+#    #+#             */
/*   Updated: 2023/10/17 12:03:56 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	current = *lst;
	if (!current)
	{
		*lst = new;
		return ;
	}
	while (current->next)
		current = current->next;
	current->next = new;
	new->next = NULL;
}
// int main() {
//     // Create some test data
//     int data1 = 42;
//     int data2 = 123;
//     int data3 = 789;

//     // Create some list nodes and initialize them
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     t_list *node3 = (t_list *)malloc(sizeof(t_list));

//     node1->content = &data1;
//     node2->content = &data2;
//     node3->content = &data3;

//     // Initialize the next pointers to NULL
//     node1->next = NULL;
//     node2->next = NULL;
//     node3->next = NULL;

//     // Create a head pointer and set it to NULL (empty list)
//     t_list *head = NULL;

//     printf("Initial state: Empty list\n");

//     // Add nodes to the end of the list
//     printf("Adding node1 to the end of the list\n");
//     ft_lstadd_back(&head, node1);

//     printf("Adding node2 to the end of the list\n");
//     ft_lstadd_back(&head, node2);

//     printf("Adding node3 to the end of the list\n");
//     ft_lstadd_back(&head, node3);

//     // Traverse the list and print the content of each node
//     printf("Traversing the list and printing the content:\n");

//     t_list *current = head;
//     while (current) {
//         printf("Content: %d\n", *((int *)current->content));
//         current = current->next;
//     }

//     // Clean up (free memory)
//     free(node1);
//     free(node2);
//     free(node3);

//     return 0;
// }
