/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView;



@interface UIStatusBarBackgroundView : UIView 
{
    NSInteger _style;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}


- (void)setGlowAnimationEnabled:(BOOL)arg1;
- (void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2;
- (void)setSuppressesGlow:(BOOL)arg1;
- (BOOL)_styleCanGlow:(NSInteger)arg1;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1;
- (void)_stopGlowAnimation;
- (id)_imageNameForStyle:(NSInteger)arg1;
- (id)_baseImageForStyle:(NSInteger)arg1;
- (id)_glowImageForStyle:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (NSInteger)style;
- (void)dealloc;

@end