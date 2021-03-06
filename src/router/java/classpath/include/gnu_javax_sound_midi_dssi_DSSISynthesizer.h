/* DO NOT EDIT THIS FILE - it is machine generated */

#include <jni.h>

#ifndef __gnu_javax_sound_midi_dssi_DSSISynthesizer__
#define __gnu_javax_sound_midi_dssi_DSSISynthesizer__

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT void JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_noteOn_1 (JNIEnv *env, jclass, jlong, jint, jint, jint);
JNIEXPORT void JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_noteOff_1 (JNIEnv *env, jclass, jlong, jint, jint, jint);
JNIEXPORT void JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_setPolyPressure_1 (JNIEnv *env, jclass, jlong, jint, jint, jint);
JNIEXPORT jint JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_getPolyPressure_1 (JNIEnv *env, jclass, jlong, jint, jint);
JNIEXPORT void JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_controlChange_1 (JNIEnv *env, jclass, jlong, jint, jint, jint);
JNIEXPORT void JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_open_1 (JNIEnv *env, jclass, jlong);
JNIEXPORT void JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_close_1 (JNIEnv *env, jclass, jlong);
JNIEXPORT jstring JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_getProgramName_1 (JNIEnv *env, jclass, jlong, jint);
JNIEXPORT jint JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_getProgramBank_1 (JNIEnv *env, jclass, jlong, jint);
JNIEXPORT jint JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_getProgramProgram_1 (JNIEnv *env, jclass, jlong, jint);
JNIEXPORT void JNICALL Java_gnu_javax_sound_midi_dssi_DSSISynthesizer_selectProgram_1 (JNIEnv *env, jclass, jlong, jint, jint);

#ifdef __cplusplus
}
#endif

#endif /* __gnu_javax_sound_midi_dssi_DSSISynthesizer__ */
