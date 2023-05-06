#include "bindings.h"

solo5_result_t solo5_smp_test(solo5_handle_t handle, const void *start)
{
  int retcode = 0;
  //struct hvt_hc_smp_test smp;

  log(INFO, "Solo5: solo5_smp_test called\n");

  hvt_do_hypercall(HVT_HYPERCALL_SMP_TEST, &retcode);
  log(INFO, "Solo5: solo5_smp_test returned %d\n", retcode);
  return 0;
}
