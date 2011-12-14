//
//  DetailViewController.h
//  SVGPad
//
//  Copyright Matt Rajca 2010-2011. All rights reserved.
//

#import "SVGKit.h"
#import "CALayerExporter.h"

@interface DetailViewController : UIViewController < UIPopoverControllerDelegate, UISplitViewControllerDelegate , CALayerExporterDelegate, UIScrollViewDelegate> {
  @private
	NSString *_name;
    UITextView* _exportText;
    NSMutableString* _exportLog;
    CALayerExporter* _layerExporter;
}

@property (nonatomic, strong) IBOutlet UIToolbar *toolbar;
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (nonatomic, strong) IBOutlet SVGView *contentView;

@property (nonatomic, strong) id detailItem;

- (IBAction)animate:(id)sender;
- (IBAction)exportLayers:(id)sender;

@end
