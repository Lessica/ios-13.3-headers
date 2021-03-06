/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

@interface SORequestQueue : NSObject {
    id /* block */  _processItemBlock;
    id  _processingItem;
    NSMutableArray * _queue;
}

@property (nonatomic, copy) id /* block */ processItemBlock;

+ (id)debugDescription;
+ (id)requestQueueWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_itemCompleted;
- (void)_processItem:(id)arg1;
- (id)description;
- (void)enqueueRequest:(id)arg1;
- (id)init;
- (id /* block */)processItemBlock;
- (void)processNextRequest;
- (void)removeAllRequestsWithBlock:(id /* block */)arg1;
- (void)setProcessItemBlock:(id /* block */)arg1;

@end
