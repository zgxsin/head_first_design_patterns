## Observer Pattern

Publishers + Subscribers = Observer Pattern

If you understand newspaper subscriptions, you pretty much understand the Observer Pattern, only we call the publisher
the SUBJECT and the subscribers the OBSERVERS.

The Observer Pattern defines a one-to-many dependency between objects so that when one object changes state, all of its
dependents are notified and updated automatically.

![img.png](resource/img.png)

### Class Diagram

![img_1.png](resource/img_1.png)
When two objects are loosely coupled, they can interact, but have very little knowledge of each other. The Observer
Pattern provides an object design where subjects and observers are loosely coupled. Loosely coupled designs allow us to
build flexible OO systems that can handle change because they minimize the interdependency between objects.
