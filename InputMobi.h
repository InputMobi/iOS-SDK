//
//  InputMobi.h
//  Inputmobi
//  v.0.3

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface InputMobi : NSObject
{
    NSString *applicationKey;
    NSString *bundleId;

}

@property (nonatomic, retain) NSString *applicationKey;
@property (nonatomic, retain) NSString *bundleId;

+(void)initWithApplicationKey:(NSString*)_key;

@end
