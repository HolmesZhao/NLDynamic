//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSInvocation, NSMutableURLRequest, NSString, SUAppcast, SUAppcastItem, SUUpdater;

@protocol SUUpdaterDelegate <NSObject>

@optional
- (SUAppcastItem *)bestValidUpdateInAppcast:(SUAppcast *)arg1 forUpdater:(SUUpdater *)arg2;
- (NSArray *)feedParametersForUpdater:(SUUpdater *)arg1 sendingSystemProfile:(BOOL)arg2;
- (NSString *)feedURLStringForUpdater:(SUUpdater *)arg1;
- (NSString *)pathToRelaunchForUpdater:(SUUpdater *)arg1;
- (void)updater:(SUUpdater *)arg1 didAbortWithError:(NSError *)arg2;
- (void)updater:(SUUpdater *)arg1 didCancelInstallUpdateOnQuit:(SUAppcastItem *)arg2;
- (void)updater:(SUUpdater *)arg1 didDownloadUpdate:(SUAppcastItem *)arg2;
- (void)updater:(SUUpdater *)arg1 didExtractUpdate:(SUAppcastItem *)arg2;
- (void)updater:(SUUpdater *)arg1 didFindValidUpdate:(SUAppcastItem *)arg2;
- (void)updater:(SUUpdater *)arg1 didFinishLoadingAppcast:(SUAppcast *)arg2;
- (void)updater:(SUUpdater *)arg1 failedToDownloadUpdate:(SUAppcastItem *)arg2 error:(NSError *)arg3;
- (BOOL)updater:(SUUpdater *)arg1 shouldPostponeRelaunchForUpdate:(SUAppcastItem *)arg2 untilInvoking:(NSInvocation *)arg3;
- (void)updater:(SUUpdater *)arg1 willDownloadUpdate:(SUAppcastItem *)arg2 withRequest:(NSMutableURLRequest *)arg3;
- (void)updater:(SUUpdater *)arg1 willExtractUpdate:(SUAppcastItem *)arg2;
- (void)updater:(SUUpdater *)arg1 willInstallUpdate:(SUAppcastItem *)arg2;
- (void)updater:(SUUpdater *)arg1 willInstallUpdateOnQuit:(SUAppcastItem *)arg2 immediateInstallationInvocation:(NSInvocation *)arg3;
- (void)updaterDidNotFindUpdate:(SUUpdater *)arg1;
- (void)updaterDidRelaunchApplication:(SUUpdater *)arg1;
- (void)updaterDidShowModalAlert:(SUUpdater *)arg1;
- (BOOL)updaterMayCheckForUpdates:(SUUpdater *)arg1;
- (BOOL)updaterShouldPromptForPermissionToCheckForUpdates:(SUUpdater *)arg1;
- (BOOL)updaterShouldRelaunchApplication:(SUUpdater *)arg1;
- (void)updaterWillRelaunchApplication:(SUUpdater *)arg1;
- (void)updaterWillShowModalAlert:(SUUpdater *)arg1;
- (void)userDidCancelDownload:(SUUpdater *)arg1;
- (id <SUVersionComparison>)versionComparatorForUpdater:(SUUpdater *)arg1;
- (id <SUVersionDisplay>)versionDisplayerForUpdater:(SUUpdater *)arg1;
@end
