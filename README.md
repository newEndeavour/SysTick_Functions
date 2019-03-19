#Systick_Functions Library#

The SysTick_Functions library for Arduino allows implementation of delays under a microsecond, or in situations where the sampling granularity of the the function delayMicroseconds (4 mic) can present a problem, notably, for capacitive sensors measuring very small capacitance and where 4 micros error is not acceptable. 
WARNING: The functions will not work, and should not be used in situations where the required/measured delay exceeds or is close to a millisecond, i.e. 1000 micros. 

https://github.com/newEndeavour/Systick_Functions

any question, please feel free to ask: jerome.p.drouin@gmail.com

