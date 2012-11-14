#import "Task.h"

@implementation Task
@dynamic text;
@dynamic completedAt;

- (BOOL)isCompleted {
    return self.completedAt != nil;
}

- (void)setCompleted:(BOOL)completed {
    self.completedAt = completed ? [NSDate date] : nil;
}

@end
