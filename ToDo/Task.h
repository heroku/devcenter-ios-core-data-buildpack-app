#import <CoreData/CoreData.h>

@interface Task : NSManagedObject

@property NSString *text;
@property NSDate *completedAt;

@property (nonatomic, getter = isCompleted) BOOL completed;

@end
