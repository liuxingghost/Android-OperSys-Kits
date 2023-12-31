#ifndef _SEPOL_ROLES_H_
#define _SEPOL_ROLES_H_

extern int sepol_role_exists(const sepol_policydb_t * policydb,
			     const char *role, int *response);

extern int sepol_role_list(const sepol_policydb_t * policydb,
			   char ***roles, unsigned int *nroles);

#endif
