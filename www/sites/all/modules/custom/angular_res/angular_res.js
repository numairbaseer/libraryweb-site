var angular_res=angular.module("angular_res",[]);jQuery(document).ready(function(){angular.bootstrap(document.getElementById("angular_res-app"),["angular_res"])}),angular.module("angularApp",["ngAnimate","ngCookies","ngResource","ngRoute","ngSanitize","ngTouch"]).config(function(a){a.when("/",{templateUrl:"views/main.html",controller:"MainCtrl",controllerAs:"main"}).when("/about",{templateUrl:"views/about.html",controller:"AboutCtrl",controllerAs:"about"}).otherwise({redirectTo:"/"})}),function(){"use strict";function a(){function a(){c.foobar="Controller Tests OK",c.quxqaz="Hello World!"}function b(a,b){return a+b}var c=this;c.addTwoNums=b,a()}angular.module("angular_res").controller("angular_resController",a),a.$inject=[]}();