/* http://stackoverflow.com/questions/42313373/r-cmd-check-note-found-no-calls-to-r-registerroutines-r-usedynamicsymbols generated by tools::package_native_routine_registration_skeleton(".") */
#include <R_ext/RS.h>
#include <stdlib.h> /* for NULL */
#include <R_ext/Rdynload.h>

/* FIXME:
   Check these declarations against the C/Fortran source code.
*/

/* .Fortran calls */
extern void F77_NAME(liusamsize)(void *, void *, void *, void *, void *, void *);

static const R_FortranMethodDef FortranEntries[] = {
    {"liusamsize", (DL_FUNC) &F77_NAME(liusamsize), 6},
    {NULL, NULL, 0}
};

void R_init_binomSamSize(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, NULL, FortranEntries, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
