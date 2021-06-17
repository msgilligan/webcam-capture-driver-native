/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class capturemanager_classes_SourceControlNative */

#ifndef _Included_capturemanager_classes_SourceControlNative
#define _Included_capturemanager_classes_SourceControlNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     capturemanager_classes_SourceControlNative
 * Method:    createSourceControl
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_capturemanager_classes_SourceControlNative_createSourceControl
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     capturemanager_classes_SourceControlNative
 * Method:    createSourceNode
 * Signature: (JLjava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_capturemanager_classes_SourceControlNative_createSourceNode
  (JNIEnv *, jobject, jlong, jstring, jint, jint);

/*
 * Class:     capturemanager_classes_SourceControlNative
 * Method:    createSourceNodeWithDownStreamConnection
 * Signature: (JLjava/lang/String;IIJ)J
 */
JNIEXPORT jlong JNICALL Java_capturemanager_classes_SourceControlNative_createSourceNodeWithDownStreamConnection
  (JNIEnv *, jobject, jlong, jstring, jint, jint, jlong);

/*
 * Class:     capturemanager_classes_SourceControlNative
 * Method:    getCollectionOfSources
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_capturemanager_classes_SourceControlNative_getCollectionOfSources
  (JNIEnv *, jobject, jlong);

/*
 * Class:     capturemanager_classes_SourceControlNative
 * Method:    getSourceOutputMediaType
 * Signature: (JLjava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_capturemanager_classes_SourceControlNative_getSourceOutputMediaType
  (JNIEnv *, jobject, jlong, jstring, jint, jint);

#ifdef __cplusplus
}
#endif
#endif