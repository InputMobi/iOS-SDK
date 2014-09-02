##Inputmobi iOS-SDK
=================

1- Clone this repository.

2- Drag and Drop both files to your XCode project.

3- Import the framework into your application's delegate. I.e: AppDelegate.m.

```
#import "InputMobi.h"
```

4- Initialize Inputmobi by adding this line somewhere in "application:didFinishLaunchingWithOptions:"

```
[InputMobi initWithApplicationKey:@"YOUR_APPLICATION_KEY"];
```

Get an application key from [http://inputmobi.com](http://inputmobi.com)

5- Add "-ObjC" in your Build Settings->Other Linker Flags option

6- and you are done. Start gathering feedback by shaking the iPhone or iPad.
