//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface SBBookmarksExporter : NSObject
{
}

+ (id)exportToJSONFromRecords:(const vector_bfbdcd42 *)arg1;
+ (id)exportToJSON;
+ (id)JSONFromBookmarks:(id)arg1 andHistory:(id)arg2;
+ (id)historyFromRecords:(const vector_bfbdcd42 *)arg1;
+ (id)bookmarksFromRecords:(const vector_bfbdcd42 *)arg1;
+ (id)objectFromBookmarks:(id)arg1 andHistory:(id)arg2;
+ (id)fetchHistoryFromDB;
+ (id)fetchBookmarksFromDB;

@end

