//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

@class NSError, NSNumber, NSString, OTAClientAuthenticator;

@protocol OTAClientAuthenticatorDelegate
- (void)showDownloadIPhoneConfigUI:(OTAClientAuthenticator *)arg1;
- (void)authenticator:(OTAClientAuthenticator *)arg1 showOtaError:(NSError *)arg2;
- (void)authenticator:(OTAClientAuthenticator *)arg1 didUpdateStatus:(int)arg2 withMessage:(NSString *)arg3 majorProgressLocation:(NSNumber *)arg4 minorProgressLocation:(NSNumber *)arg5;
- (void)authenticator:(OTAClientAuthenticator *)arg1 didFailWithError:(NSError *)arg2;
- (void)authenticator:(OTAClientAuthenticator *)arg1 didLoadResult:(id)arg2;
@end
