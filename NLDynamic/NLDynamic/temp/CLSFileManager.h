//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFileManager, NSString;

@interface CLSFileManager : NSObject
{
    NSString *_rootPath;
    NSFileManager *_underlyingFileManager;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *activePath;
@property(readonly, nonatomic) NSArray *activePathContents;
- (id)contentsOfDirectory:(id)arg1;
- (BOOL)createDirectoryAtPath:(id)arg1;
- (void)enumerateFilesInActiveDirectoryUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFilesInDirectory:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateFilesInPreparedDirectoryUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateReportsInProcessingDirectoryUsingBlock:(CDUnknownBlockType)arg1;
- (id)fileSizeAtPath:(id)arg1;
- (id)init;
- (BOOL)moveItemAtPath:(id)arg1 toDirectory:(id)arg2;
- (BOOL)moveItemsFromDirectory:(id)arg1 toDirectory:(id)arg2;
- (BOOL)movePendingToProcessing;
- (BOOL)moveProcessingContentsToPrepared;
- (id)pathNamespace;
@property(readonly, copy, nonatomic) NSString *pendingPath;
- (BOOL)prepareForNewLaunch;
@property(readonly, copy, nonatomic) NSString *preparedPath;
@property(readonly, nonatomic) NSArray *preparedPathContents;
@property(readonly, copy, nonatomic) NSString *processingPath;
@property(readonly, nonatomic) NSArray *processingPathContents;
- (BOOL)removeContentsOfAllPaths;
- (BOOL)removeContentsOfDirectoryAtPath:(id)arg1;
- (BOOL)removeContentsOfPendingPath;
- (BOOL)removeContentsOfProcessingPath;
- (BOOL)removeItemAtPath:(id)arg1;
- (void)removeLegacyDirectories;
@property(readonly, copy, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
- (id)setupNewPathForExecutionIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *structurePath;
@property(readonly, nonatomic) NSFileManager *underlyingFileManager; // @synthesize underlyingFileManager=_underlyingFileManager;

@end

