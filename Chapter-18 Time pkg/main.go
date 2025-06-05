/*
Time and Date Conversion
==========================
-> "time package " is used for time and date conversion
-> "2006-01-02 15:04:05" is used as a date time format and is a default format that is it is a reference data and time format for GO
in which
2006 - YYYY
01 - MM
02 - DD
15 - HH (24h format)
04 - MM
05 - SS

if we use the default format then only time package will be used and this time is the time when time package or go was launched
*/
package main

import (
	"fmt"
	"time"
)
func main() {
	fmt.Println("Learning Time Package......")
	currentTime := time.Now() // returns the current local time
	fmt.Println("Current Time is : ", currentTime) // prints the current time
	fmt.Printf("Type of currentTime %T\n",currentTime) // prints the type of currentTime

	formatted := currentTime.Format("02-01-2006, Monday") // 02-01-2006, Monday
	fmt.Println("formatted time: ",formatted) // output: 03-06-2025, Tuesday

	formatted = currentTime.Format("02-01-2006") // 02-01-2006
	fmt.Println("formatted time: ",formatted) // output: 03-06-2025

	formatted = currentTime.Format("02-01-2006, 15:04:05") // 15:04:05 is 15:04:05 in 24 hours format
	fmt.Println("formatted time: ",formatted) // output: 03-06-2025, 15:58:31

	formatted = currentTime.Format("2006/01/02, 03:04:05 PM") //  12h format
	fmt.Println("formatted time: ",formatted) // output: 03-06-2025, 03:58:31 PM

	// Converting string to time
	layout_str := "2006-01-02" // layout string
	dateStr := "2002-05-27" // date string
	formatted_time,_ := time.Parse(layout_str,dateStr) // parsing date string to time
	fmt.Println("formatted time: ",formatted_time) // output: 2002-05-27 00:00:00 +0000 UTC

	// add 1 more day to the current Time
	new_date := currentTime.Add(48*time.Hour) // adding 24 hours to the current time
	fmt.Println("new_date time: ",new_date) // printing new date
	formatted_new_date := new_date.Format("2006/01/02, Monday") // formatting new date
	fmt.Println("formatted new_date time: ",formatted_new_date) // printing formatted new date
}