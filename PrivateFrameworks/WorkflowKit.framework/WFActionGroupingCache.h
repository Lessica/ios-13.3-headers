/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFActionGroupingCache : NSObject {
    NSMutableDictionary * _actionsByGroupingIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *actionsByGroupingIdentifier;

- (void).cxx_destruct;
- (id)actionsByGroupingIdentifier;
- (id)actionsForGroupingIdentifier:(id)arg1;
- (void)addAction:(id)arg1 sortingWithWorkflowActions:(id)arg2;
- (id)init;
- (void)removeAction:(id)arg1;
- (void)sortActionsForGroupingIdentifier:(id)arg1 withWorkflowActions:(id)arg2;

@end
