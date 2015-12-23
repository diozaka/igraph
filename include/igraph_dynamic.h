/* vim:set ts=8 sw=2 sts=2 noet:  */
/* 
   Algorithms for dynamic graphs
   Copyright (C) 2015  Erik Scharwaechter <erik.scharwaechter@rwth-aachen.de>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 
   02110-1301 USA

*/

#ifndef IGRAPH_DYNAMIC_H
#define IGRAPH_DYNAMIC_H

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
# define __BEGIN_DECLS extern "C" {
# define __END_DECLS }
#else
# define __BEGIN_DECLS /* empty */
# define __END_DECLS /* empty */
#endif

#include <stdio.h>
#include "igraph_vector_ptr.h"

__BEGIN_DECLS

int igraph_read_dynamic_velist(igraph_vector_ptr_t *graphs, FILE *instream);

int igraph_compute_full_union_graph_projection(igraph_vector_ptr_t *graphs,
      igraph_vector_ptr_t *vcolors, igraph_vector_ptr_t *ecolors,
      igraph_vector_ptr_t *result, igraph_vector_ptr_t *result_vcolors,
      igraph_vector_ptr_t *result_ecolors,
      igraph_integer_t max_vcolor, igraph_integer_t max_ecolor);

int igraph_compute_dynamic_neighborhoods(igraph_vector_ptr_t *graphs,
      igraph_vector_ptr_t *vcolors, igraph_vector_ptr_t *ecolors,
      igraph_vector_ptr_t *result, igraph_vector_ptr_t *result_vcolors,
      igraph_vector_ptr_t *result_ecolors, igraph_integer_t max_vcolor,
      igraph_integer_t max_ecolor);

int igraph_compute_event_neighborhoods(igraph_vector_ptr_t *graphs,
      igraph_vector_ptr_t *vcolors, igraph_vector_ptr_t *ecolors,
      igraph_vector_ptr_t *result, igraph_vector_ptr_t *result_vcolors,
      igraph_vector_ptr_t *result_ecolors, igraph_integer_t max_vcolor,
      igraph_integer_t max_ecolor);

__END_DECLS

#endif
