/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAddTriggerItem : HFItem {
    HMHome * _home;
    unsigned long long  _mode;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic) unsigned long long mode;

- (void).cxx_destruct;
- (bool)_itemisHidden;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 mode:(unsigned long long)arg2;
- (unsigned long long)mode;
- (void)setHome:(id)arg1;
- (void)setMode:(unsigned long long)arg1;

@end
