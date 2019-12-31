/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMediaRemoteLegacyKeyboardImpl : NSObject <_TVRCMediaRemoteKeyboardAdapterDelegate, _TVRXKeyboardImpl> {
    _TVRCMediaRemoteKeyboardAdapter * _adapter;
    TVRCKeyboardAttributes * _currentAttributes;
    bool  _editing;
    _TVRXKeyboardController * _keyboardController;
    _TVRCMRTelevisionWrapper * _television;
}

@property (nonatomic, retain) _TVRCMediaRemoteKeyboardAdapter *adapter;
@property (nonatomic, retain) TVRCKeyboardAttributes *currentAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) _TVRXKeyboardController *keyboardController;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TVRCMRTelevisionWrapper *television;

- (void).cxx_destruct;
- (void)_sessionAttributesDidChange:(id)arg1;
- (void)_sessionDidBegin:(id)arg1;
- (void)_sessionDidEnd:(id)arg1;
- (void)_sessionTextDidChange:(id)arg1;
- (void)_textEditingHandlerUpdatedWithEvent:(unsigned int)arg1 session:(id)arg2;
- (id)adapter;
- (id)attributes;
- (id)currentAttributes;
- (bool)editing;
- (bool)isEditing;
- (void)keyboardAdapter:(id)arg1 receivedUnexpectedTextUpdate:(id)arg2;
- (id)keyboardController;
- (void)sendReturnKey;
- (void)setAdapter:(id)arg1;
- (void)setCurrentAttributes:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setKeyboardController:(id)arg1;
- (void)setTelevision:(id)arg1;
- (void)setText:(id)arg1;
- (id)television;
- (id)text;

@end