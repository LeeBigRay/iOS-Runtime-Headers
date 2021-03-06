/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface _MPUOperationNetworkActivityController : NSObject {
    unsigned int _activityCount;
    _MPUOperationNetworkActivityControllerTimer *_timer;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_setIndicatorVisibility:(BOOL)arg1;
- (void)_updateIndicator;
- (void)networkActivityDidEnd;
- (void)networkActivityDidStart;

@end
