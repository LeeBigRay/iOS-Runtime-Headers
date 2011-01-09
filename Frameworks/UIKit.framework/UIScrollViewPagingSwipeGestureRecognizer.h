/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction;



@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer 
{
    UIDelayedAction *_swipeFailureDelay;
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastLocation;
    double _lastTime;
    NSInteger _directionalFailureCount;
}


- (void)_processNewLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end