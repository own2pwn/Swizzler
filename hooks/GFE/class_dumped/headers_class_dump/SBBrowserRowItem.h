//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSString;

@interface SBBrowserRowItem : NSObject
{
    int _cellType;
    NSString *_cellId;
    NSString *_cellLabelText;
}

+ (id)rowItemWithCellType:(int)arg1;
@property(readonly, nonatomic) NSString *cellLabelText; // @synthesize cellLabelText=_cellLabelText;
@property(readonly, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(readonly, nonatomic) int cellType; // @synthesize cellType=_cellType;
- (void)initCell;
- (void)dealloc;
- (id)initWithCellType:(int)arg1;

@end
