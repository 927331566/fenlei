//
//  EOCPerson+Friendship.h
//  分类
//
//  Created by 王璐 on 2023/4/27.
//

#import "EOCPerson.h"

NS_ASSUME_NONNULL_BEGIN

@interface EOCPerson (Friendship)
- (void)addFriend:(EOCPerson*)person;
- (void)removeFriend:(EOCPerson*)person;
- (BOOL)isFrinedWith:(EOCPerson*)person;
@end

NS_ASSUME_NONNULL_END
