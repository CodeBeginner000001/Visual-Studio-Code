/*
-> The net/url is used to manipulate URLs and provides functionalities to parse and construct the URls

-> Parsing URLs :- The url.Parse function is used to parse a string into a URL object. This allows you to break down the

	url into the URL into individual components such as scheme,host,path and query parameters.

-> Accessing URL components :-
  - Scheme: Indicates the protocol used ("http","https").
  - Host: Specifies the domain name and optionally the port number.
  - Path: Represents the path component of the URL, Which specifies the resources's location on the server.
  - RewQuery: Contains the raw query string, including query parameters

-> Query Parameters :- Query parameters are the key-value pairs appended to the end of a URL, usually starting with ?

	and separated by &.
*/
package main

import (
	"fmt"
	"net/url"
)
func main() {

	fmt.Println("Learning handle URL.......")
	myurl := "https://datausa.io/api/data?drilldowns=Nation&measures=Population" // it in the string form
	fmt.Printf("Type of URL: %T\n", myurl) // output: string

	parsedUrl,err := url.Parse(myurl) // parsing the myurl
	if err !=nil{ // if err
		fmt.Println("Error in parsing url: ",err) // print err
	}
	fmt.Printf("Type of parsed url: %T\n",parsedUrl) // print the type of parsedurl
	fmt.Println("Parsed URL: ",parsedUrl) // print the url

	fmt.Println("Schema: ",parsedUrl.Scheme) // output: https
	fmt.Println("Host: ",parsedUrl.Host) // output: datausa.io
	fmt.Println("Path: ",parsedUrl.Path) // output: /api/data
	fmt.Println("RawQuery: ",parsedUrl.RawQuery) // output: drilldowns=Nation&measures=Population

	// Modifying the URL Components
	parsedUrl.Path = "/gg/gta" // modifying the path
	parsedUrl.RawQuery = "username=tonystark" // modifying query

	// constructing the url string after modifying the content
	newUrl := parsedUrl.String() // making the new string
	fmt.Println("New URL: ",newUrl) // print the new URL
}