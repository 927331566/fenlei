//
//  EOCPerson.h
//  分类
//
//  Created by 王璐 on 2023/4/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EOCPerson : NSObject
@property (nonatomic, copy, readonly) NSString* firstName;
@property (nonatomic, copy, readonly) NSString* lastName;
@property (nonatomic, strong, readonly) NSArray* friends;
- (id) initWithFirstName:(NSString*)firstName andLastName:(NSString*)lastName;
@end

NS_ASSUME_NONNULL_END
