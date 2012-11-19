Building an iOS App with AFIncrementalStore and the Core Data Buildpack
=======================================================================

Heroku makes it easy to develop mobile applications. With [AFIncrementalStore](https://github.com/AFNetworking/AFIncrementalStore) and the [Core Data Buildpack](https://github.com/mattt/heroku-buildpack-core-data), developers are able to get working on the core of their application in a matter of minutes, creating a robust webservice scaffolding that is able to generate RESTful APIs from just the project's Core Data model.

## Deploying to Heroku

```
  $ git clone https://github.com/heroku/devcenter-ios-15-minute-app
  $ cd devcenter-ios-15-minute-app
  $ pod install
  $ heroku create --buildpack git://github.com/mattt/heroku-buildpack-core-data.git
  $ git push heroku master
```
