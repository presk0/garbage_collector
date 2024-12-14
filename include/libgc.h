#ifndef LIBGC_H
# define LIBGC_H
# include <libft.h>

void    clean_exit(t_list **gc_addr);
void    *gc_calloc(t_list **gc_addr, size_t count, size_t size);
void    gc_free_item(t_list **gc_addr, void *ptr);

# endif