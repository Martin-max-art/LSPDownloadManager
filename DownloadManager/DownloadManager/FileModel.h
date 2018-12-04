//
//  FileModel.h
//  DownloadManager
//
//  Created by zhudou on 2018/12/4.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LSPDownloadManager/LSPDownloadManager.h"
NS_ASSUME_NONNULL_BEGIN

@interface FileModel : NSObject

@property (nonatomic, copy) NSString *file_id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *cover;
@property (nonatomic, copy) NSString *songLink;
@property (nonatomic, copy) NSString *video_uri;

@property (nonatomic, copy) NSString *file_url;

@property (nonatomic, assign) LSPDownloadManagerState state;
@property (nonatomic, copy) NSString *file_size;
@property (nonatomic, copy) NSString *completed_size;

@property (nonatomic, assign) float progress;
@property (nonatomic, assign) NSInteger fileLength;
@property (nonatomic, assign) NSInteger currentLength;

@end

NS_ASSUME_NONNULL_END
