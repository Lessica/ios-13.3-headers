/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBRFCOMMChannel : NSObject {
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    CBClassicPeer * _peer;
    CBUUID * _serviceUUID;
    int  _socketFD;
}

@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) CBClassicPeer *peer;
@property (nonatomic, readonly) CBUUID *serviceUUID;
@property (nonatomic, readonly) int socketFD;

- (void).cxx_destruct;
- (id)initWithPeer:(id)arg1 info:(id)arg2;
- (id)inputStream;
- (id)outputStream;
- (id)peer;
- (id)serviceUUID;
- (int)socketFD;

@end
