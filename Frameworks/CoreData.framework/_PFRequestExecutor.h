/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFRequestExecutor : NSObject {
    NSObject<OS_dispatch_group> * _requestGroup;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *requestGroup;

- (void)dealloc;
- (bool)executeRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)init;
- (void)requestFinished;
- (id)requestGroup;
- (bool)wait;

@end