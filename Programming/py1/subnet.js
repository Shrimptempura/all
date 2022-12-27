//returns true if it is, else false
if(typeof Number.isInteger === "undefined") Number.prototype.isInteger = function(x) { return x % 1 === 0;};
//inserts a string into another string at the specified index
String.prototype.insert = function(index, string) {
  if(index > 0)
    return this.toString().substring(0, index) + string + this.toString().substring(index, this.toString().length);
  else
    return string + this.toString();
};
//repeats a string 'x' times
if(typeof String.repeat === "undefined") {
	String.prototype.repeat = function(x) {
		var temp = "";
		for(var i=0;i<x;i++) temp += this.toString();
		return temp;
	};
}
//returns true if the string starts with said string, else false
if(typeof String.startsWith === "undefined") {
	String.prototype.startsWith = function(str) {
		if(this.toString().substring(0,str.length) === str) return true;
		else return false;
	};
}
//returns true if the string ends with said string, else false
if(typeof String.endsWith === "undefined") {
	String.prototype.endsWith = function(str) {
		if(this.toString().substring(this.toString().length - str.length, this.toString().length) === str) return true;
		else return false;
	};
}
//returns true if the string has said string in it, else false
if(typeof String.includes === "undefined") {
	String.prototype.includes = function(str) {
		if(this.toString().indexOf(str) >= 0) return true;
		else return false;
	};
}
Number.prototype.intToBinary = function() {
	var binary = parseInt(this, 10).toString(2);
	return "0".repeat(8 - binary.length) + binary;
};
String.prototype.binaryToInt = function() {
	return parseInt(this.toString(), 2);
};
function intToBinary(int){
    var binStr = parseInt(int, 10).toString(2);
	binStr = "0".repeat(8 - binStr.length) + binStr;
	return binStr;
}
function binaryToInt(bin) {
	return parseInt(bin, 2);
}
var decToHex = function(dec) {
	return "0".repeat(2-(dec).toString(16).length) + (dec).toString(16);
};

var app = angular.module("myApp", []);
app.controller("myCtrl", function($scope){
	$scope.oct0 = 0;
	$scope.oct1 = 0;
	$scope.oct2 = 0;
	$scope.oct3 = 0;
	$scope.prefix = 24;
	
	$scope.class = function() {
		if($scope.prefix >= 8 && $scope.prefix <= 15) return "A";
		else if($scope.prefix >= 16 && $scope.prefix <= 23) return "B";
		else if($scope.prefix >= 24 && $scope.prefix <= 30) return "C";
		else return "";
	};
	
	$scope.IPBinary = function() {
		var ipBin = [
			intToBinary($scope.oct0 ? $scope.oct0 : 0),
			intToBinary($scope.oct1 ? $scope.oct1 : 0),
			intToBinary($scope.oct2 ? $scope.oct2 : 0),
			intToBinary($scope.oct3 ? $scope.oct3 : 0)
		];
		return ipBin.join(".");
	};
	
	$scope.subnetBits = function() {
		if($scope.class() == "A") return $scope.prefix - 8;
		else if($scope.class() == "B") return $scope.prefix - 16;
		else if($scope.class() == "C") return $scope.prefix - 24;
		else return 0;
	};
	
	$scope.subnetMask = function() {
		var mask = "1".repeat($scope.prefix);
		mask += "0".repeat(32-mask.length);
		mask = mask.replace(/\s*[01]{8}\s*/g, function(mask) {return parseInt(mask, 2).toString() + ".";});
		return mask.substring(0, mask.length-1);
	};
	
	$scope.subnetBinary = function() {
		var subnetBin = "1".repeat($scope.prefix);
		subnetBin += "0".repeat(32 - subnetBin.length);
		subnetBin = subnetBin.insert(8, ".").insert(17, ".").insert(26, ".");
		return subnetBin;
	};
	
	$scope.totalSubnets = function() {
		return Math.pow(2, $scope.subnetBits());
	};
	
	$scope.networkAddress = function() {
		var netBin = "";
		for(var i=0;i<35;i++){
			if($scope.IPBinary()[i] == $scope.subnetBinary()[i]){
				netBin += $scope.IPBinary()[i];
			} else {
				netBin += "0";
			}
		}
		$scope.networkBinary = netBin;
		var net = netBin.split(".");
		net[0] = binaryToInt(net[0]);
		net[1] = binaryToInt(net[1]);
		net[2] = binaryToInt(net[2]);
		net[3] = binaryToInt(net[3]);
		return net.join(".");
	};
	
	$scope.hostsPerSubnet = function() {
		return Math.pow(2, 32-$scope.prefix) - 2;
	};
	
	$scope.hostsLostToSubnets = function() {
		$scope.hostCount = (Math.pow(2, 32-$scope.prefix) - 2) * $scope.totalSubnets();
		if($scope.class() == "A") return (16777214 - $scope.hostCount);
		else if($scope.class() == "B") return (65534 - $scope.hostCount);
		else if($scope.class() == "C") return (254 - $scope.hostCount);
		else return;
	};
});