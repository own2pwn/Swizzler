/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface GDString : _CATransform3DMakeScale
{
}

+ (BOOL)createErrorObject:(int)fp8 domain:(id)fp12 errorObj:(id *)fp16 path:(id)fp20;
+ (unsigned int)encodingUsedForBytes:(const char *)fp8 length:(unsigned int)fp12;
+ (BOOL)writeToURL:(id)fp8 atomically:(BOOL)fp12 bytes:(const void *)fp16 length:(unsigned int)fp20 error:(id *)fp24;
+ (BOOL)writeToFile:(id)fp8 atomically:(BOOL)fp12 bytes:(const void *)fp16 length:(unsigned int)fp20 error:(id *)fp24;
+ (id)stringWithContentsOfURL:(id)fp8;
+ (id)stringWithContentsOfURL:(id)fp8 usedEncoding:(unsigned int *)fp12 error:(id *)fp16;
+ (id)stringWithContentsOfURL:(id)fp8 encoding:(unsigned int)fp12 error:(id *)fp16;
+ (id)stringWithContentsOfFile:(id)fp8;
+ (id)stringWithContentsOfFile:(id)fp8 usedEncoding:(unsigned int *)fp12 error:(id *)fp16;
+ (id)stringWithContentsOfFile:(id)fp8 encoding:(unsigned int)fp12 error:(id *)fp16;

@end

