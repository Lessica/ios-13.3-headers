/* Generated by RuntimeBrowser.
 */

@protocol RCTimeObserver <NSObject>

@optional

- (void)timeController:(id <RCTimeController>)arg1 didChangeCurrentTime:(double)arg2;
- (void)timeController:(id <RCTimeController>)arg1 didChangeCurrentTime:(double)arg2 didChangeDuration:(double)arg3;
- (void)timeController:(id <RCTimeController>)arg1 didChangeCurrentTime:(double)arg2 didJumpTime:(bool)arg3;
- (void)timeController:(id <RCTimeController>)arg1 didChangeRate:(float)arg2;
- (void)timeController:(id <RCTimeController>)arg1 didChangeState:(long long)arg2;

@end
