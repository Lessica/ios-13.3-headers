/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDXPCServicer : NSObject <FPDDaemon> {
    NSXPCConnection * _connection;
    NSHashTable * _providerServicers;
    NSObject<OS_dispatch_queue> * _queue;
    FPDServer * _server;
}

@property (nonatomic) NSXPCConnection *connection;
@property (nonatomic) FPDServer *server;

- (void).cxx_destruct;
- (void)_forceIngestionForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_isNonSandboxedConnection;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)arg1;
- (void)_test_callRemoveTrashedItemsOlderThanDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_test_retrieveItemWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_test_simulateInstallOfBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_test_simulateUninstallOfBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 byImportingDirectoryAtURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)clientHasSandboxAccessToFile:(id)arg1;
- (id)connection;
- (id)createDomainServicerForProviderDomainID:(id)arg1 enumerateEntitlementRequired:(bool)arg2 error:(id*)arg3;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)currentMaterializedSetSyncAnchorForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)documentURLFromBookmarkableString:(id)arg1 creatingPlaceholderIfMissing:(bool)arg2 ignoreAlternateContentsURL:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)enumerateMaterializedSetForDomain:(id)arg1 inProvider:(id)arg2 syncAnchor:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(bool)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)evictItemWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)extendBookmarkForItemID:(id)arg1 consumerID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchAccessServicer:(id /* block */)arg1;
- (void)fetchAlternateContentsURLForDocumentURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDaemonOperationIDsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchDaemonOperationWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 materializingIfNeeded:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchIndexPropertiesForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchListOfMonitoredApps:(id /* block */)arg1;
- (void)forceIngestionForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceIngestionForItemIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDomainsForProviderIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSyncedRootsURLs:(id /* block */)arg1;
- (void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)ingestFromCacheItemWithID:(id)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (void)itemForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)materializeURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)noteURLBecameFrontmost:(id)arg1 inWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)pid;
- (void)pinItemWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)providerDomainForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)providerDomainForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)providerDomainsCompletionHandler:(id /* block */)arg1;
- (id)providerForCurrentConnection;
- (id)providerForIdentifier:(id)arg1 enumerateEntitlementRequired:(bool)arg2 error:(id*)arg3;
- (void)reimportItemsBelowItemWithID:(id)arg1 removeCachedItems:(bool)arg2 markItemDataless:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)reindexAllSearchableItemsForBundleIDs:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg1;
- (void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)restoreUserURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleActionOperationWithInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)server;
- (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setDownloadPolicy:(unsigned long long)arg1 forItemWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setEnabled:(bool)arg1 forDomainIdentifier:(id)arg2 providerIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setServer:(id)arg1;
- (id)stageLocation;
- (void)startAccessingExtensionForProviderDomainID:(id)arg1 handler:(id /* block */)arg2;
- (void)startAccessingOperationServiceForProviderDomainID:(id)arg1 handler:(id /* block */)arg2;
- (void)startAccessingServiceForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startAccessingServiceForItemID:(id)arg1 connection:(id)arg2 enumerateEntitlementRequired:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)startAccessingServiceForItemURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startOperation:(id)arg1 toFetchIconsForAppBundleIDs:(id)arg2 requestedSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)trashItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unpinItemWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateBlacklistedProcessNamesForProvider:(id)arg1 processNames:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateLastUsedDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)wakeUpForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)writeMetadata:(id)arg1 onURL:(id)arg2 error:(id*)arg3;

@end