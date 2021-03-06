/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STWeatherHourlyForecast : STSiriModelObject {
    NSNumber *_chanceOfPrecipitation;
    int _conditionCode;
    NSNumber *_temperature;
    int _timeIndex;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithConditionCodeIndex:(int)arg1 timeIndex:(int)arg2 temperature:(id)arg3 chanceOfPrecipitation:(id)arg4;
- (id)chanceOfPrecipitation;
- (int)conditionCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)temperature;
- (int)timeIndex;

@end
