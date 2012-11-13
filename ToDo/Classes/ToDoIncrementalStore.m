#import "ToDoIncrementalStore.h"
#import "ToDoAPIClient.h"

@implementation ToDoIncrementalStore

+ (void)initialize {
    [NSPersistentStoreCoordinator registerStoreClass:self forStoreType:[self type]];
}

+ (NSString *)type {
    return NSStringFromClass(self);
}

+ (NSManagedObjectModel *)model {
    return [[NSManagedObjectModel alloc] initWithContentsOfURL:[[NSBundle mainBundle] URLForResource:@"ToDo" withExtension:@"xcdatamodeld"]];
}

- (id <AFIncrementalStoreHTTPClient>)HTTPClient {
    return [ToDoAPIClient sharedClient];
}

@end