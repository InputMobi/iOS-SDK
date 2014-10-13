//
//  InputMobi.h
//  Inputmobi
//  v.0.3

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    InputMobiGestureNone        = 0,
    InputMobiGestureDoubleTap = (1 << 3),
    InputMobiGestureTripleTap = (1 << 4),
    InputMobiGestureLongPress = (1 << 5),
    InputMobiGestureShake = (1 << 6),
} InputMobiGestureMask;

@interface InputMobi : NSObject
{
    NSString *applicationKey;
    NSString *bundleId;

}

@property (nonatomic, retain) NSString *applicationKey;
@property (nonatomic, retain) NSString *bundleId;

+(void)initWithApplicationKey:(NSString*)_key andGesture:(InputMobiGestureMask)_gesture;

@end
