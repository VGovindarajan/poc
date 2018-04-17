
**Curve builder http end point poc**

* Main idea. 
1. Define a set of classes that will return a set of discount factors for a given locale.
2. Use Json or other formats to transport the data.
3. Stand-up an http end-point to with GET/POST support.
4. Asynchronous logging to syslog with run-time log level changes.
5. Ability to interface with alerting protocols. 


* Dependent Libraries 
1. https://github.com/nlohmann/json


Style Guide:
Refer : https://google.github.io/styleguide/cppguide.html

