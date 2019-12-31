/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject> {
    GEOAutomobileOptions * _automobileOptions;
    MapsSuggestionsManager * _entryManager;
    int  _mapType;
    NSObject<OS_dispatch_queue> * _optionsSerialQueue;
    MapsSuggestionsShortcutManager * _shortcutManager;
    MapsSuggestionsUser * _user;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mapType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)defaultCachePath;

- (void).cxx_destruct;
- (void)addAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (void)attachSink:(id)arg1;
- (id)automobileOptions;
- (bool)detachSink:(id)arg1;
- (id)fakeSource;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)hintRefreshOfType:(long long)arg1;
- (id)initWithEntryManager:(id)arg1 shortcutManager:(id)arg2;
- (bool)loadStorageFromFile:(id)arg1;
- (bool)loadStorageFromFile:(id)arg1 callback:(id /* block */)arg2 callbackQueue:(id)arg3;
- (id)manager;
- (int)mapType;
- (void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (void)reset;
- (id)routine;
- (bool)saveStorageToFile:(id)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setFakeSource:(id)arg1;
- (void)setMapType:(int)arg1;
- (id)shortcutManager;
- (void)startDemoMode;
- (id)strategy;
- (struct NSArray { Class x1; }*)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3;
- (bool)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(id /* block */)arg4 onQueue:(id)arg5;
- (struct NSArray { Class x1; }*)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4;
- (bool)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 callback:(id /* block */)arg5 onQueue:(id)arg6;
- (struct NSString { Class x1; }*)uniqueName;
- (id)user;

@end