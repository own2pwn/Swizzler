/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UIActionSheetDelegate-Protocol.h"

@class CTTelephonyNetworkInfo, NSMutableSet, NSOperationQueue, NSString;

@interface GMMApplication : _ABAddressBookAddRecord <UIActionSheetDelegate>
{
    NSString *_callNumber;
    NSOperationQueue *_latencyCheckQueue;
    NSMutableSet *_latencyObservers;
    double _lastMainRunLoopExecution;
    BOOL _checkingLatency;
    CTTelephonyNetworkInfo *networkInfo;
}

+ (id)keychainIdentifier;
+ (id)uniqueApplicationIdentifierForDisplay;
+ (id)uniqueApplicationIdentifier;
+ (BOOL)restoreUDRFileFromKeyChain;
+ (id)getAppLongName;
+ (BOOL)didOpenGoodShareLink:(id)fp8;
+ (BOOL)goodShareLinkSupportedForURL:(id)fp8 applicationIdentifier:(id *)fp12 minimumVersion:(id *)fp16;
+ (BOOL)isSDKApp;
+ (BOOL)isRetina;
+ (id)instance;
- (void)setNetworkInfo:(id)fp8;
- (id)networkInfo;
- (double)mainThreadLatency;
- (void)updateMainThreadLatency;
- (void)removeLatencyObserver:(id)fp8;
- (void)checkLatency;
- (void)addLatencyObserver:(id)fp8;
- (void)dealloc;
- (void)actionSheet:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (BOOL)openExternalURL:(id)fp8;
- (BOOL)openURL:(id)fp8;
- (void)updateCarrierInformationOnServer;
- (void)updateCarrierInformationIfNeeded;
- (void)beginCarrierDetection;

@end
