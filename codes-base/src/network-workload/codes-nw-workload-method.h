/*
 * Copyright (C) 2013 University of Chicago.
 * See COPYRIGHT notice in top-level directory.
 *
 */

/* I/O workload generator API to be used by workload generator methods.  
 * It mimics the top level codes-workload.h API, except that there is no 
 * reverse handler.
 */

#ifndef CODES_WORKLOAD_METHOD_H
#define CODES_WORKLOAD_METHOD_H

#include "ross.h"
#include "codes/codes-nw-workload.h"

struct codes_nw_workload_method
{
    char *method_name; /* name of the generator */
    int (*codes_nw_workload_load)(const char* params, int rank);
    void (*codes_nw_workload_get_next)(int rank, struct mpi_event_list *op);
};

#endif /* CODES_WORKLOAD_METHOD_H */

/*
 * Local variables:
 *  c-indent-level: 4
 *  c-basic-offset: 4
 * End:
 *
 * vim: ft=c ts=8 sts=4 sw=4 expandtab
 */
