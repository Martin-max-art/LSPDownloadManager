//
//  FileCell.h
//  DownloadManager
//
//  Created by zhudou on 2018/12/4.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FileModel.h"
NS_ASSUME_NONNULL_BEGIN
static NSString *const kFileViewCellID = @"FileViewCellID";
@interface FileCell : UITableViewCell

@property (nonatomic, strong) FileModel *model;

@end

NS_ASSUME_NONNULL_END
