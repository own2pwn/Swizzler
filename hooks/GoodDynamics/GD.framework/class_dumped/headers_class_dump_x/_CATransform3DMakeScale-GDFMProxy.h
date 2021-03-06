/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface _CATransform3DMakeScale (GDFMProxy)
+ (void)replaceNSFileManager;
+ (id)replacementDefaultManager;
+ (id)originalDefaultManager;
- (id)replacementContainerURLForSecurityApplicationGroupIdentifier:(id)fp8;
- (id)originalContainerURLForSecurityApplicationGroupIdentifier:(id)fp8;
- (id)replacementPathContentOfSymbolicLinkAtPath:(id)fp8;
- (id)originalPathContentOfSymbolicLinkAtPath:(id)fp8;
- (id)replacementFileSystemAttributesAtPath:(id)fp8;
- (id)originalFileSystemAttributesAtPath:(id)fp8;
- (id)replacementFileAttributesAtPath:(id)fp8 traverseLink:(BOOL)fp12;
- (id)originalFileAttributesAtPath:(id)fp8 traverseLink:(BOOL)fp12;
- (id)replacementDirectoryContentsAtPath:(id)fp8;
- (id)originalDirectoryContentsAtPath:(id)fp8;
- (BOOL)replacementCreateSymbolicLinkAtPath:(id)fp8 pathContent:(id)fp12;
- (BOOL)originalCreateSymbolicLinkAtPath:(id)fp8 pathContent:(id)fp12;
- (BOOL)replacementCreateDirectoryAtPath:(id)fp8 attributes:(id)fp12;
- (BOOL)originalCreateDirectoryAtPath:(id)fp8 attributes:(id)fp12;
- (BOOL)replacementChangeFileAttributes:(id)fp8 atPath:(id)fp12;
- (BOOL)originalChangeFileAttributes:(id)fp8 atPath:(id)fp12;
- (id)replacementDelegate;
- (id)originalDelegate;
- (void)replacementSetDelegate:(id)fp8;
- (void)originalSetDelegate:(id)fp8;
- (id)replacementCurrentDirectoryPath;
- (id)originalCurrentDirectoryPath;
- (BOOL)replacementChangeCurrentDirectoryPath:(id)fp8;
- (BOOL)originalChangeCurrentDirectoryPath:(id)fp8;
- (id)replacementStringWithFileSystemRepresentation:(const char *)fp8 length:(unsigned int)fp12;
- (id)originalStringWithFileSystemRepresentation:(const char *)fp8 length:(unsigned int)fp12;
- (const char *)replacementFileSystemRepresentationWithPath:(id)fp8;
- (const char *)originalFileSystemRepresentationWithPath:(id)fp8;
- (BOOL)replacementContentsEqualAtPath:(id)fp8 andPath:(id)fp12;
- (BOOL)originalContentsEqualAtPath:(id)fp8 andPath:(id)fp12;
- (id)replacementContentsAtPath:(id)fp8;
- (id)originalContentsAtPath:(id)fp8;
- (BOOL)replacementSetAttributes:(id)fp8 ofItemAtPath:(id)fp12 error:(id *)fp16;
- (BOOL)originalSetAttributes:(id)fp8 ofItemAtPath:(id)fp12 error:(id *)fp16;
- (id)replacementAttributesOfFileSystemForPath:(id)fp8 error:(id *)fp12;
- (id)originalAttributesOfFileSystemForPath:(id)fp8 error:(id *)fp12;
- (id)replacementAttributesOfItemAtPath:(id)fp8 error:(id *)fp12;
- (id)originalAttributesOfItemAtPath:(id)fp8 error:(id *)fp12;
- (id)replacementDisplayNameAtPath:(id)fp8;
- (id)originalDisplayNameAtPath:(id)fp8;
- (id)replacementComponentsToDisplayForPath:(id)fp8;
- (id)originalComponentsToDisplayForPath:(id)fp8;
- (BOOL)replacementIsDeletableFileAtPath:(id)fp8;
- (BOOL)originalIsDeletableFileAtPath:(id)fp8;
- (BOOL)replacementIsExecutableFileAtPath:(id)fp8;
- (BOOL)originalIsExecutableFileAtPath:(id)fp8;
- (BOOL)replacementIsWritableFileAtPath:(id)fp8;
- (BOOL)originalIsWritableFileAtPath:(id)fp8;
- (BOOL)replacementIsReadableFileAtPath:(id)fp8;
- (BOOL)originalIsReadableFileAtPath:(id)fp8;
- (BOOL)replacementFileExistsAtPath:(id)fp8 isDirectory:(char *)fp12;
- (BOOL)originalFileExistsAtPath:(id)fp8 isDirectory:(char *)fp12;
- (BOOL)replacementFileExistsAtPath:(id)fp8;
- (BOOL)originalFileExistsAtPath:(id)fp8;
- (id)replacementDestinationOfSymbolicLinkAtPath:(id)fp8 error:(id *)fp12;
- (id)originalDestinationOfSymbolicLinkAtPath:(id)fp8 error:(id *)fp12;
- (BOOL)replacementLinkItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)originalLinkItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)replacementLinkItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)originalLinkItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)replacementCreateSymbolicLinkAtPath:(id)fp8 withDestinationPath:(id)fp12 error:(id *)fp16;
- (BOOL)originalCreateSymbolicLinkAtPath:(id)fp8 withDestinationPath:(id)fp12 error:(id *)fp16;
- (BOOL)replacementCreateSymbolicLinkAtURL:(id)fp8 withDestinationURL:(id)fp12 error:(id *)fp16;
- (BOOL)originalCreateSymbolicLinkAtURL:(id)fp8 withDestinationURL:(id)fp12 error:(id *)fp16;
- (id)replacementURLForPublishingUbiquitousItemAtURL:(id)fp8 expirationDate:(id *)fp12 error:(id *)fp16;
- (id)originalURLForPublishingUbiquitousItemAtURL:(id)fp8 expirationDate:(id *)fp12 error:(id *)fp16;
- (BOOL)replacementEvictUbiquitousItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)originalEvictUbiquitousItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)replacementStartDownloadingUbiquitousItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)originalStartDownloadingUbiquitousItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)replacementSetUbiquitous:(BOOL)fp8 itemAtURL:(id)fp12 destinationURL:(id)fp16 error:(id *)fp20;
- (BOOL)originalSetUbiquitous:(BOOL)fp8 itemAtURL:(id)fp12 destinationURL:(id)fp16 error:(id *)fp20;
- (BOOL)replacementIsUbiquitousItemAtURL:(id)fp8;
- (BOOL)originalIsUbiquitousItemAtURL:(id)fp8;
- (id)replacementURLForUbiquityContainerIdentifier:(id)fp8;
- (id)originalURLForUbiquityContainerIdentifier:(id)fp8;
- (id)replacementUbiquityIdentityToken;
- (id)originalUbiquityIdentityToken;
- (BOOL)replacementMoveItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)originalMoveItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)replacementMoveItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)originalMoveItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)replacementCopyItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)originalCopyItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)replacementCopyItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)originalCopyItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)replacementReplaceItemAtURL:(id)fp8 withItemAtURL:(id)fp12 backupItemName:(id)fp16 options:(unsigned int)fp20 resultingItemURL:(id *)fp24 error:(id *)fp28;
- (BOOL)originalReplaceItemAtURL:(id)fp8 withItemAtURL:(id)fp12 backupItemName:(id)fp16 options:(unsigned int)fp20 resultingItemURL:(id *)fp24 error:(id *)fp28;
- (BOOL)replacementRemoveItemAtPath:(id)fp8 error:(id *)fp12;
- (BOOL)originalRemoveItemAtPath:(id)fp8 error:(id *)fp12;
- (BOOL)replacementRemoveItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)originalRemoveItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)replacementCreateFileAtPath:(id)fp8 contents:(id)fp12 attributes:(id)fp16;
- (BOOL)originalCreateFileAtPath:(id)fp8 contents:(id)fp12 attributes:(id)fp16;
- (BOOL)replacementCreateDirectoryAtPath:(id)fp8 withIntermediateDirectories:(BOOL)fp12 attributes:(id)fp16 error:(id *)fp20;
- (BOOL)originalCreateDirectoryAtPath:(id)fp8 withIntermediateDirectories:(BOOL)fp12 attributes:(id)fp16 error:(id *)fp20;
- (BOOL)replacementCreateDirectoryAtURL:(id)fp8 withIntermediateDirectories:(BOOL)fp12 attributes:(id)fp16 error:(id *)fp20;
- (BOOL)originalCreateDirectoryAtURL:(id)fp8 withIntermediateDirectories:(BOOL)fp12 attributes:(id)fp16 error:(id *)fp20;
- (id)replacementSubpathsAtPath:(id)fp8;
- (id)originalSubpathsAtPath:(id)fp8;
- (id)replacementSubpathsOfDirectoryAtPath:(id)fp8 error:(id *)fp12;
- (id)originalSubpathsOfDirectoryAtPath:(id)fp8 error:(id *)fp12;
- (id)replacementMountedVolumeURLsIncludingResourceValuesForKeys:(id)fp8 options:(unsigned int)fp12;
- (id)originalMountedVolumeURLsIncludingResourceValuesForKeys:(id)fp8 options:(unsigned int)fp12;
- (id)replacementEnumeratorAtPath:(id)fp8;
- (id)originalEnumeratorAtPath:(id)fp8;
- (id)replacementEnumeratorAtURL:(id)fp8 includingPropertiesForKeys:(id)fp12 options:(unsigned int)fp16 errorHandler:(id)fp(null);
- (id)originalEnumeratorAtURL:(id)fp8 includingPropertiesForKeys:(id)fp12 options:(unsigned int)fp16 errorHandler:(id)fp(null);
- (id)replacementContentsOfDirectoryAtPath:(id)fp8 error:(id *)fp12;
- (id)originalContentsOfDirectoryAtPath:(id)fp8 error:(id *)fp12;
- (id)replacementContentsOfDirectoryAtURL:(id)fp8 includingPropertiesForKeys:(id)fp12 options:(unsigned int)fp16 error:(id *)fp20;
- (id)originalContentsOfDirectoryAtURL:(id)fp8 includingPropertiesForKeys:(id)fp12 options:(unsigned int)fp16 error:(id *)fp20;
- (id)replacementURLsForDirectory:(unsigned int)fp8 inDomains:(unsigned int)fp12;
- (id)originalURLsForDirectory:(unsigned int)fp8 inDomains:(unsigned int)fp12;
- (id)replacementURLForDirectory:(unsigned int)fp8 inDomain:(unsigned int)fp12 appropriateForURL:(id)fp16 create:(BOOL)fp20 error:(id *)fp24;
- (id)originalURLForDirectory:(unsigned int)fp8 inDomain:(unsigned int)fp12 appropriateForURL:(id)fp16 create:(BOOL)fp20 error:(id *)fp24;
- (void)replacementDealloc;
- (void)originalDealloc;
- (id)fileManagerFor:(id)fp8;
@end

