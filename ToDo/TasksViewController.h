#import <UIKit/UIKit.h>

@interface TasksViewController : UITableViewController <UITextFieldDelegate>

@property NSManagedObjectContext *managedObjectContext;

@property IBOutlet UITextField *taskTextField;

@end
