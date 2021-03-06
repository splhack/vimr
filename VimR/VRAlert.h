/* vi:set ts=8 sts=4 sw=4 ft=objc:
 *
 * VIM - Vi IMproved		by Bram Moolenaar
 *				MacVim GUI port by Bjorn Winckler
 *
 * Do ":help uganda"  in Vim to read copying and usage conditions.
 * Do ":help credits" in Vim to see a list of people who contributed.
 * See README.txt for an overview of the Vim source code.
 *
 * Minor modifications by Tae Won Ha — @hataewon
 *
 * http://taewon.de
 * http://qvacua.com
 */

#import <Cocoa/Cocoa.h>


@interface VRAlert : NSAlert

@property (readonly) NSTextField *textField;

- (void)setTextFieldString:(NSString *)textFieldString;

@end
