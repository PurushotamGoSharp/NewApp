

#import <UIKit/UIKit.h>
@protocol alphaViewDelegate <NSObject>
@end

@interface SubjectPrice : UIView
-(void)alphaintialiseview;
@property(nonatomic)id<alphaViewDelegate>delegate;
@property (weak, nonatomic) IBOutlet UIButton *oneMonthsButtonOutlet;
@property (weak, nonatomic) IBOutlet UIButton *threeMonthsButtonOutlet;
@property (weak, nonatomic) IBOutlet UIButton *sixMonthsButtonOutlet;
@property (weak, nonatomic) IBOutlet UIButton *oneYearButtonOutlet;
@property (weak, nonatomic) IBOutlet UIButton *proceedButtonOutlet;
@property (weak, nonatomic) IBOutlet UITextField *couponTextField;
@property (strong, nonatomic) IBOutlet SubjectPrice *subXIBMaiViewOutlet;
@property (weak, nonatomic) IBOutlet UIView *proceedViewOutlet;
@property(nonatomic, assign) NSString *subjectName;
@property (weak, nonatomic) IBOutlet UILabel *subjectNameLabelInXIB;

@end
