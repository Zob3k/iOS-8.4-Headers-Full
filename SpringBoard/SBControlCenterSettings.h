/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBControlCenterSettingsSectionSettings, SBControlCenterShortcutSectionSettings, UIColor;

@interface SBControlCenterSettings : _UISettings {

	char _highlightUsesPlusL;
	char _forceVibrantControls;
	char _useNewBounce;
	SBControlCenterSettingsSectionSettings* _settingsSectionSettings;
	SBControlCenterShortcutSectionSettings* _shortcutSectionSettings;
	float _controlAlpha;
	float _controlAlpha1x;
	float _minControlAlpha;
	float _maxControlAlpha;
	float _disabledAlpha;
	float _disabledAlpha1x;
	float _highlightAlpha;
	float _glowAlpha;
	UIColor* _highlightColor;
	float _oldBounceFriction;
	float _bounceDensityFactor;
	float _bounceResistance;
	float _minVelocity;
	float _maxVelocity;
	float _attachmentThreshold;
	float _attachmentFrequencyAbove;
	float _attachmentFrequencyBelow;
	float _attachmentVelocityDamping;
	float _attachmentMinDamping;
	float _attachmentMaxDamping;
	float _backgroundAlphaFactor;

}

@property (retain) SBControlCenterSettingsSectionSettings * settingsSectionSettings;              //@synthesize settingsSectionSettings=_settingsSectionSettings - In the implementation block
@property (retain) SBControlCenterShortcutSectionSettings * shortcutSectionSettings;              //@synthesize shortcutSectionSettings=_shortcutSectionSettings - In the implementation block
@property (assign) float controlAlpha;                                                            //@synthesize controlAlpha=_controlAlpha - In the implementation block
@property (assign) float controlAlpha1x;                                                          //@synthesize controlAlpha1x=_controlAlpha1x - In the implementation block
@property (assign) float minControlAlpha;                                                         //@synthesize minControlAlpha=_minControlAlpha - In the implementation block
@property (assign) float maxControlAlpha;                                                         //@synthesize maxControlAlpha=_maxControlAlpha - In the implementation block
@property (assign) float disabledAlpha;                                                           //@synthesize disabledAlpha=_disabledAlpha - In the implementation block
@property (assign) float disabledAlpha1x;                                                         //@synthesize disabledAlpha1x=_disabledAlpha1x - In the implementation block
@property (assign) float highlightAlpha;                                                          //@synthesize highlightAlpha=_highlightAlpha - In the implementation block
@property (assign) char highlightUsesPlusL;                                                       //@synthesize highlightUsesPlusL=_highlightUsesPlusL - In the implementation block
@property (assign) char forceVibrantControls;                                                     //@synthesize forceVibrantControls=_forceVibrantControls - In the implementation block
@property (assign) float glowAlpha;                                                               //@synthesize glowAlpha=_glowAlpha - In the implementation block
@property (retain) UIColor * highlightColor;                                                      //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign) char useNewBounce;                                                             //@synthesize useNewBounce=_useNewBounce - In the implementation block
@property (assign) float oldBounceFriction;                                                       //@synthesize oldBounceFriction=_oldBounceFriction - In the implementation block
@property (assign) float bounceDensityFactor;                                                     //@synthesize bounceDensityFactor=_bounceDensityFactor - In the implementation block
@property (assign) float bounceResistance;                                                        //@synthesize bounceResistance=_bounceResistance - In the implementation block
@property (assign) float minVelocity;                                                             //@synthesize minVelocity=_minVelocity - In the implementation block
@property (assign) float maxVelocity;                                                             //@synthesize maxVelocity=_maxVelocity - In the implementation block
@property (assign) float attachmentThreshold;                                                     //@synthesize attachmentThreshold=_attachmentThreshold - In the implementation block
@property (assign) float attachmentFrequencyAbove;                                                //@synthesize attachmentFrequencyAbove=_attachmentFrequencyAbove - In the implementation block
@property (assign) float attachmentFrequencyBelow;                                                //@synthesize attachmentFrequencyBelow=_attachmentFrequencyBelow - In the implementation block
@property (assign) float attachmentVelocityDamping;                                               //@synthesize attachmentVelocityDamping=_attachmentVelocityDamping - In the implementation block
@property (assign) float attachmentMinDamping;                                                    //@synthesize attachmentMinDamping=_attachmentMinDamping - In the implementation block
@property (assign) float attachmentMaxDamping;                                                    //@synthesize attachmentMaxDamping=_attachmentMaxDamping - In the implementation block
@property (assign) float backgroundAlphaFactor;                                                   //@synthesize backgroundAlphaFactor=_backgroundAlphaFactor - In the implementation block
+(id)settingsControllerModule;
-(SBControlCenterShortcutSectionSettings *)shortcutSectionSettings;
-(float)oldBounceFriction;
-(char)useNewBounce;
-(float)bounceResistance;
-(float)bounceDensityFactor;
-(float)maxVelocity;
-(float)minVelocity;
-(float)attachmentThreshold;
-(float)attachmentFrequencyAbove;
-(float)attachmentFrequencyBelow;
-(float)attachmentVelocityDamping;
-(float)attachmentMaxDamping;
-(float)attachmentMinDamping;
-(float)backgroundAlphaFactor;
-(SBControlCenterSettingsSectionSettings *)settingsSectionSettings;
-(void)setForceVibrantControls:(char)arg1 ;
-(void)setControlAlpha:(float)arg1 ;
-(void)setControlAlpha1x:(float)arg1 ;
-(void)setMinControlAlpha:(float)arg1 ;
-(void)setMaxControlAlpha:(float)arg1 ;
-(void)setDisabledAlpha:(float)arg1 ;
-(void)setDisabledAlpha1x:(float)arg1 ;
-(void)setHighlightAlpha:(float)arg1 ;
-(void)setHighlightUsesPlusL:(char)arg1 ;
-(void)setUseNewBounce:(char)arg1 ;
-(void)setOldBounceFriction:(float)arg1 ;
-(void)setBounceDensityFactor:(float)arg1 ;
-(void)setBounceResistance:(float)arg1 ;
-(void)setMinVelocity:(float)arg1 ;
-(void)setMaxVelocity:(float)arg1 ;
-(void)setAttachmentThreshold:(float)arg1 ;
-(void)setAttachmentFrequencyAbove:(float)arg1 ;
-(void)setAttachmentFrequencyBelow:(float)arg1 ;
-(void)setAttachmentVelocityDamping:(float)arg1 ;
-(void)setAttachmentMinDamping:(float)arg1 ;
-(void)setAttachmentMaxDamping:(float)arg1 ;
-(void)setBackgroundAlphaFactor:(float)arg1 ;
-(float)controlAlpha1x;
-(float)disabledAlpha1x;
-(float)disabledAlpha;
-(void)setSettingsSectionSettings:(SBControlCenterSettingsSectionSettings *)arg1 ;
-(void)setShortcutSectionSettings:(SBControlCenterShortcutSectionSettings *)arg1 ;
-(float)glowAlpha;
-(void)setGlowAlpha:(float)arg1 ;
-(void)setDefaultValues;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(float)controlAlpha;
-(float)resolvedControlAlpha;
-(float)highlightAlpha;
-(float)resolvedDisabledAlpha;
-(char)highlightUsesPlusL;
-(char)forceVibrantControls;
-(float)maxControlAlpha;
-(float)minControlAlpha;
@end

