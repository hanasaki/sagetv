/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_PowerManagement */

#ifndef _Included_sage_PowerManagement
#define _Included_sage_PowerManagement
#ifdef __cplusplus
extern "C" {
#endif
#undef sage_PowerManagement_SYSTEM_POWER
#define sage_PowerManagement_SYSTEM_POWER 1L
#undef sage_PowerManagement_DISPLAY_POWER
#define sage_PowerManagement_DISPLAY_POWER 2L
#undef sage_PowerManagement_USER_ACTIVITY
#define sage_PowerManagement_USER_ACTIVITY 0L
/*
 * Class:     sage_PowerManagement
 * Method:    setPowerState0
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sage_PowerManagement_setPowerState0
  (JNIEnv *, jobject, jint);

/*
 * Class:     sage_PowerManagement
 * Method:    setWakeupTime0
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_sage_PowerManagement_setWakeupTime0
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
