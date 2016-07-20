%group GFE
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

// #import "NSObject.h"

// @class NSString;

// @interface GmmSecureStringObjC : NSObject
// {
//     NSString *_backingStore;
// }
%hook GmmSecureStringObjC

+ (id)stringWithString:(id)arg1
{
	NSLog(@"GmmSecureStringObjC stringWithString: %@", arg1);
	return %orig;
};

+ (id)stringWithGmmSecureStringObjC:(id)arg1
{
	NSLog(@"GmmSecureStringObjC stringWithGmmSecureStringObjC: %@", arg1);
	return %orig;
};

+ (id)stringWithUTF8String:(const char *)arg1
{
	NSLog(@"GmmSecureStringObjC GmmSecureStringObjC: %s", arg1);
	return %orig;
};
// @property(retain, nonatomic) NSString *backingStore; // @synthesize backingStore=_backingStore;
// - (id)dataUsingEncoding:(unsigned int)arg1;
// - (id)newSecuredNSString;
- (int)compare:(id)arg1
{
	NSLog(@"GmmSecureStringObjC compare: %@", arg1);
	return %orig;
};
// - (unsigned int)lengthOfBytesUsingEncoding:(unsigned int)arg1;
// - (unsigned int)length;
// - (const char *)cStringUsingEncoding:(unsigned int)arg1;
- (const char *)UTF8String
{
	const char *ret = %orig;
	NSLog(@"GmmSecureStringObjC compare: %s", ret);
	return ret;
};
// - (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
// - (id)copyWithZone:(struct _NSZone *)arg1;
// - (id)initWithString:(id)arg1;
// - (id)initWithGmmSecureStringObjC:(id)arg1;
// - (id)initWithUTF8String:(const char *)arg1;
// - (void)dealloc;

// @end
%end
%end