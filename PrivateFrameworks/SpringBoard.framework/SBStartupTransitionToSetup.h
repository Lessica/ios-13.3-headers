/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBStartupTransitionToSetup : SBBaseStartupTransition {
    SBApplicationController * _appController;
    SBFUserAuthenticationController * _authController;
    SBBulletinWindowController * _bulletinWindowController;
    SBInitialRestartState * _initialRestartState;
    SBLockScreenManager * _lockScreenManager;
    SBSetupManager * _setupManager;
}

- (void).cxx_destruct;
- (void)_activateSetupWithCompletion:(id /* block */)arg1 underLock:(bool)arg2 fromSnapshot:(bool)arg3;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 initialRestartState:(id)arg3;
- (void)performTransitionWithCompletionBlock:(id /* block */)arg1;

@end