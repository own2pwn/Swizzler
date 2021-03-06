/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class NSData, NSMutableData;

@interface GCDAsyncReadPacket : _CATransform3DMakeScale
{
    NSMutableData *buffer;
    unsigned int startOffset;
    unsigned int bytesDone;
    unsigned int maxLength;
    double timeout;
    unsigned int readLength;
    NSData *term;
    BOOL bufferOwner;
    unsigned int originalBufferLength;
    long tag;
}

- (void)dealloc;
- (int)searchForTermAfterPreBuffering:(long)fp8;
- (unsigned int)readLengthForTermWithPreBuffer:(id)fp8 found:(char *)fp12;
- (unsigned int)readLengthForTermWithHint:(unsigned int)fp8 shouldPreBuffer:(char *)fp12;
- (unsigned int)readLengthForNonTermWithHint:(unsigned int)fp8;
- (unsigned int)optimalReadLengthWithDefault:(unsigned int)fp8 shouldPreBuffer:(char *)fp12;
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned int)fp8;
- (id)initWithData:(id)fp8 startOffset:(unsigned int)fp12 maxLength:(unsigned int)fp16 timeout:(double)fp20 readLength:(unsigned int)fp28 terminator:(id)fp32 tag:(long)fp36;

@end

