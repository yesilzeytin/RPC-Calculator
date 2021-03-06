/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALC_H_RPCGEN
#define _CALC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int a;
	int b;
};
typedef struct numbers numbers;

#define ADD_PROG 0x42427769
#define ADD_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define add 1
extern  int * add_1(numbers *, CLIENT *);
extern  int * add_1_svc(numbers *, struct svc_req *);
extern int add_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define add 1
extern  int * add_1();
extern  int * add_1_svc();
extern int add_prog_1_freeresult ();
#endif /* K&R C */

#define SUB_PROG 0x42427770
#define SUB_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define sub 1
extern  int * sub_1(numbers *, CLIENT *);
extern  int * sub_1_svc(numbers *, struct svc_req *);
extern int sub_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define sub 1
extern  int * sub_1();
extern  int * sub_1_svc();
extern int sub_prog_1_freeresult ();
#endif /* K&R C */

#define MUL_PROG 0x42427771
#define MUL_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define mul 1
extern  int * mul_1(numbers *, CLIENT *);
extern  int * mul_1_svc(numbers *, struct svc_req *);
extern int mul_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define mul 1
extern  int * mul_1();
extern  int * mul_1_svc();
extern int mul_prog_1_freeresult ();
#endif /* K&R C */

#define DIV_PROG 0x42427772
#define DIV_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define div 1
extern  int * div_1(numbers *, CLIENT *);
extern  int * div_1_svc(numbers *, struct svc_req *);
extern int div_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define div 1
extern  int * div_1();
extern  int * div_1_svc();
extern int div_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALC_H_RPCGEN */
