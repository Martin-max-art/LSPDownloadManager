# LSPDownloadManager
基于AFNetworking封装的下载管理器，支持断点续传

![image](https://github.com/LSPBoy/LSPDownloadManager/blob/master/images/1.gif/)

```objc
//设置是否支持断点续传，默认NO 
- (void)setCanBreakpoint:(BOOL)isCan;

// 添加下载
- (void)addDownloadArr:(NSArray <LSPDownloadModel *> *)downloadArr;

// 删除下载
- (void)removeDownloadArr:(NSArray <LSPDownloadModel *> *)downloadArr;

// 暂停下载
- (void)pausedDownloadArr:(NSArray <LSPDownloadModel *> *)downloadArr;

// 继续下载
- (void)resumeDownloadArr:(NSArray <LSPDownloadModel *> *)downloadArr;

// 遍历文件（全部）
- (NSMutableArray <LSPDownloadModel *> *)downloadFileList;

// 清除下载（包括下载中和等待下载的）
- (void)clearDownload;
```
