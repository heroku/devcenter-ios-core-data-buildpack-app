#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface ToDoAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (ToDoAPIClient *)sharedClient;

@end
