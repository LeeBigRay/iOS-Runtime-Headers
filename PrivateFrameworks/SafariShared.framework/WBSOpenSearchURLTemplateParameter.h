/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSOpenSearchURLTemplateParameter : NSObject {
    NSString *_name;
    BOOL _optional;
    NSString *_prefix;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
}

@property (nonatomic, copy) NSString *name;
@property (getter=isOptional, nonatomic) BOOL optional;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;

- (void).cxx_destruct;
- (BOOL)isOptional;
- (id)name;
- (id)prefix;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setName:(id)arg1;
- (void)setOptional:(BOOL)arg1;
- (void)setPrefix:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
