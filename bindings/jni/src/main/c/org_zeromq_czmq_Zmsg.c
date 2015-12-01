/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "../../native/include/org_zeromq_czmq_Zmsg.h"

JNIEXPORT jlong JNICALL
Java_zmsg__1_1new (JNIEnv *env, jclass c)
{
    jlong new_ = (jlong) zmsg_new ();
    return new_;
}

JNIEXPORT void JNICALL
Java_zmsg__1_1destroy (JNIEnv *env, jclass c, jlong self_p)
{
    zmsg_destroy ((zmsg_t **) &self_p);
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1recv (JNIEnv *env, jclass c, jlong source)
{
    jlong recv_ = (jlong) zmsg_recv ((void *) source);
    return recv_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1send (JNIEnv *env, jclass c, jlong self_p, jlong dest)
{
    jint send_ = (jint) zmsg_send ((zmsg_t **) &self_p, (void *) dest);
    return send_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1sendm (JNIEnv *env, jclass c, jlong self_p, jlong dest)
{
    jint sendm_ = (jint) zmsg_sendm ((zmsg_t **) &self_p, (void *) dest);
    return sendm_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1size (JNIEnv *env, jclass c, jlong self)
{
    jlong size_ = (jlong) zmsg_size ((zmsg_t *) self);
    return size_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1content_size (JNIEnv *env, jclass c, jlong self)
{
    jlong content_size_ = (jlong) zmsg_content_size ((zmsg_t *) self);
    return content_size_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1routing_id (JNIEnv *env, jclass c, jlong self)
{
    jint routing_id_ = (jint) zmsg_routing_id ((zmsg_t *) self);
    return routing_id_;
}

JNIEXPORT void JNICALL
Java_zmsg__1_1set_routing_id (JNIEnv *env, jclass c, jlong self, jint routing_id)
{
    zmsg_set_routing_id ((zmsg_t *) self, (uint32_t) routing_id);
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1prepend (JNIEnv *env, jclass c, jlong self, jlong frame_p)
{
    jint prepend_ = (jint) zmsg_prepend ((zmsg_t *) self, (zframe_t **) &frame_p);
    return prepend_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1append (JNIEnv *env, jclass c, jlong self, jlong frame_p)
{
    jint append_ = (jint) zmsg_append ((zmsg_t *) self, (zframe_t **) &frame_p);
    return append_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1pop (JNIEnv *env, jclass c, jlong self)
{
    jlong pop_ = (jlong) zmsg_pop ((zmsg_t *) self);
    return pop_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1pushmem (JNIEnv *env, jclass c, jlong self, jlong src, jlong size)
{
    jint pushmem_ = (jint) zmsg_pushmem ((zmsg_t *) self, (const void *) src, (size_t) size);
    return pushmem_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1addmem (JNIEnv *env, jclass c, jlong self, jlong src, jlong size)
{
    jint addmem_ = (jint) zmsg_addmem ((zmsg_t *) self, (const void *) src, (size_t) size);
    return addmem_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1pushstr (JNIEnv *env, jclass c, jlong self, jstring string)
{
    char *string_ = (char *) (*env)->GetStringUTFChars (env, string, NULL);
    jint pushstr_ = (jint) zmsg_pushstr ((zmsg_t *) self, string_);
    (*env)->ReleaseStringUTFChars (env, string, string_);
    return pushstr_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1addstr (JNIEnv *env, jclass c, jlong self, jstring string)
{
    char *string_ = (char *) (*env)->GetStringUTFChars (env, string, NULL);
    jint addstr_ = (jint) zmsg_addstr ((zmsg_t *) self, string_);
    (*env)->ReleaseStringUTFChars (env, string, string_);
    return addstr_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1pushstrf (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    jint pushstrf_ = (jint) zmsg_pushstrf ((zmsg_t *) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
    return pushstrf_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1addstrf (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    jint addstrf_ = (jint) zmsg_addstrf ((zmsg_t *) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
    return addstrf_;
}

JNIEXPORT jstring JNICALL
Java_zmsg__1_1popstr (JNIEnv *env, jclass c, jlong self)
{
    char *popstr_ = (char *) zmsg_popstr ((zmsg_t *) self);
    jstring string = (*env)->NewStringUTF (env, popstr_);
    zstr_free (&popstr_);
    return string;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1addmsg (JNIEnv *env, jclass c, jlong self, jlong msg_p)
{
    jint addmsg_ = (jint) zmsg_addmsg ((zmsg_t *) self, (zmsg_t **) &msg_p);
    return addmsg_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1popmsg (JNIEnv *env, jclass c, jlong self)
{
    jlong popmsg_ = (jlong) zmsg_popmsg ((zmsg_t *) self);
    return popmsg_;
}

JNIEXPORT void JNICALL
Java_zmsg__1_1remove (JNIEnv *env, jclass c, jlong self, jlong frame)
{
    zmsg_remove ((zmsg_t *) self, (zframe_t *) frame);
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1first (JNIEnv *env, jclass c, jlong self)
{
    jlong first_ = (jlong) zmsg_first ((zmsg_t *) self);
    return first_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1next (JNIEnv *env, jclass c, jlong self)
{
    jlong next_ = (jlong) zmsg_next ((zmsg_t *) self);
    return next_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1last (JNIEnv *env, jclass c, jlong self)
{
    jlong last_ = (jlong) zmsg_last ((zmsg_t *) self);
    return last_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1encode (JNIEnv *env, jclass c, jlong self, jlong buffer)
{
    jlong encode_ = (jlong) zmsg_encode ((zmsg_t *) self, (byte **) &buffer);
    return encode_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1decode (JNIEnv *env, jclass c, jlong buffer, jlong buffer_size)
{
    jlong decode_ = (jlong) zmsg_decode ((byte *) buffer, (size_t) buffer_size);
    return decode_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1dup (JNIEnv *env, jclass c, jlong self)
{
    jlong dup_ = (jlong) zmsg_dup ((zmsg_t *) self);
    return dup_;
}

JNIEXPORT void JNICALL
Java_zmsg__1_1print (JNIEnv *env, jclass c, jlong self)
{
    zmsg_print ((zmsg_t *) self);
}

JNIEXPORT jboolean JNICALL
Java_zmsg__1_1eq (JNIEnv *env, jclass c, jlong self, jlong other)
{
    jboolean eq_ = (jboolean) zmsg_eq ((zmsg_t *) self, (zmsg_t *) other);
    return eq_;
}

JNIEXPORT jlong JNICALL
Java_zmsg__1_1new_signal (JNIEnv *env, jclass c, jbyte status)
{
    jlong new_signal_ = (jlong) zmsg_new_signal ((byte) status);
    return new_signal_;
}

JNIEXPORT jint JNICALL
Java_zmsg__1_1signal (JNIEnv *env, jclass c, jlong self)
{
    jint signal_ = (jint) zmsg_signal ((zmsg_t *) self);
    return signal_;
}

JNIEXPORT jboolean JNICALL
Java_zmsg__1_1is (JNIEnv *env, jclass c, jlong self)
{
    jboolean is_ = (jboolean) zmsg_is ((void *) self);
    return is_;
}

JNIEXPORT void JNICALL
Java_zmsg__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zmsg_test ((bool) verbose);
}

