//
//  EOCPerson+Friendship.m
//  分类
//
//  Created by 王璐 on 2023/4/27.
//

#import "EOCPerson+Friendship.h"

@implementation EOCPerson (Friendship)
- (void)addFriend:(EOCPerson *)person {
    NSLog(@"addFriend");
}
- (void)removeFriend:(EOCPerson *)person {
    NSLog(@"removeFriend");
}
- (BOOL)isFrinedWith:(EOCPerson *)person {
    NSLog(@"isFriendWith");
    return YES;
}
@end
