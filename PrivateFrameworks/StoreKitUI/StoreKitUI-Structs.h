/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	float field1;
	char field2;
} SCD_Struct_SK7;

typedef struct {
	float progress;
	char isBouncingOffTheEdge;
} SCD_Struct_SK8;

typedef struct SKUIEditorialStyle {
	int alignment;
	int bodyFontWeight;
	float bodyFontSize;
	float linkSpacing;
	int titleFontWeight;
	float titleFontSize;
	float titleSpacing;
} SKUIEditorialStyle;

typedef struct SKUILockupStyle {
	int artworkSize;
	int layoutStyle;
	unsigned visibleFields;
} SKUILockupStyle;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct __CFAttributedString* CFAttributedStringRef;

typedef struct IKCornerRadii {
	float bottomLeft;
	float bottomRight;
	float topLeft;
	float topRight;
} IKCornerRadii;

typedef struct __CTLine* CTLineRef;

typedef struct {
	float cellHeight;
	float cellWidth;
	float interItemSpacing;
} SCD_Struct_SK16;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;

typedef struct {
	char didUpdateAdditionalTabBarButtonsContainerPositionOffset;
	UIOffset oldAdditionalTabBarButtonsContainerPositionOffset;
	char didUpdateAdditionalTabBarPalettePositionOffset;
	UIOffset oldAdditionalTabBarPalettePositionOffset;
} SCD_Struct_SK18;

typedef struct {
	UIEdgeInsets field1;
	float field2;
} SCD_Struct_SK19;

typedef struct {
	char field1;
	UIOffset field2;
	char field3;
	UIOffset field4;
} SCD_Struct_SK20;

typedef struct {
	unsigned field1;
	unsigned field2;
	float field3;
} SCD_Struct_SK21;

typedef struct {
	CGSize iconSize;
	CGSize newsstandSize;
	CGSize newsstandSwooshSize;
	CGSize videoLockupIconSize;
	CGSize videoThumbnailSize;
	float horizontalPadding;
	float interItemSpacingMixed;
	float interItemSpacingNewsstand;
	float interItemSpacingVideoLockup;
} SCD_Struct_SK22;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
	CGSize field4;
	CGSize field5;
	float field6;
	float field7;
	float field8;
	float field9;
} SCD_Struct_SK23;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
} SCD_Struct_SK24;

typedef struct CGImage* CGImageRef;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct CGContext* CGContextRef;

typedef struct {
	int style;
	char hidden;
} SCD_Struct_SK28;

typedef struct SKUIPhysicalCircleConstants {
	float circleDensity;
	float circleLinearDamping;
	float circleMaximumDiameter;
	float circleMinimumDiameter;
	float springMaximumFrequency;
	float springMinimumFrequency;
	float springDamping;
	float translationForceMultiplier;
} SKUIPhysicalCircleConstants;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	UIEdgeInsets contentInset;
	float bottomInsetValueAddedForScrollingTabBar;
} SCD_Struct_SK32;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;
