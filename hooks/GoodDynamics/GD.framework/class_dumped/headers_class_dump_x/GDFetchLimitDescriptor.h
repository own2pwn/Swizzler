/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GDFetchSQLDescriptor.h"

@interface GDFetchLimitDescriptor : GDFetchSQLDescriptor
{
    unsigned int _limit;
    unsigned int _offset;
}

+ (id)descriptorWithSqlDescriptor:(id)fp8 limit:(unsigned int)fp12 offset:(unsigned int)fp16;
- (BOOL)build:(id *)fp8;
- (id)initWithSqlDescriptor:(id)fp8 limit:(unsigned int)fp12 offset:(unsigned int)fp16;

@end

