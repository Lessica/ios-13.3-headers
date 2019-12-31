/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspace : NSObject <FBSceneClientProvider, FBWorkspaceServerDelegate> {
    RBSTarget * _assertionTarget;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMapTable * _hostToClientMap;
    bool  _invalidated;
    NSMutableSet * _invalidatingScenes;
    FBSceneClientProviderInvalidationAction * _invalidationAction;
    RBSProcessIdentity * _processIdentity;
    NSObject<OS_dispatch_queue> * _queue;
    FBWorkspaceServer * _server;
    RBSAssertion * _subordinateProcessAssertion;
    <FBWorkspaceDelegate> * _weak_delegate;
    FBProcess * _weak_process;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBProcess *process;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireSubordinateProcessAssertionIfNecessary;
- (void)_invalidateSubordinateProcessAssertionIfNecessary;
- (id)_queue;
- (void)_queue_enumerateScenes:(id /* block */)arg1;
- (void)_queue_fireInvalidationAction;
- (void)_queue_invalidateAllScenes;
- (void)_queue_sceneDidInvalidate:(id)arg1;
- (id)_server;
- (id)auditToken;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3;
- (id)injectionTargetForServer:(id)arg1;
- (id)process;
- (id)processForServer:(id)arg1;
- (id)registerHost:(id)arg1 withInitialParameters:(id)arg2;
- (void)registerInvalidationAction:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)server:(id)arg1 didReceiveSceneRequestWithOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)serverDidInvalidateConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregisterHost:(id)arg1;

@end