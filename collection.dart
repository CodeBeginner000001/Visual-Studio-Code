import "dart:io";
void main() {

  // -------------------------------------------------------- Lists --------------------------------------------------------
  // difference between const and final
  /* const is a compile-time constant used to declare a constant variable. 
      When to use const? When the value is known at compile-time. It is more efficient than final. 
  */
  /* final is a runtime constant used to declare a variable that can be assigned only once.
      When to use final? When value is not known at compile-time. It is more efficient than final. 
  */

  // Immutable list
  final List<int> immutableNumbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
  // Immutable list of strings
  final List<String> immutableNames = ['Raman', 'Rajeev', 'Raghav', 'Ramanujan'];
  // Immutable list of booleans
  final List<bool> immutableBooleans = [true, false, true, false];
  // Immutable list of doubles
  final List<double> immutableDoubles = [1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0];

  // List is a collection of objects of different types but mutable
  List mix = ['Raman', 'Rajeev', 'Raghav', 'Ramanujan', 85, true, 34.34];
  // List of numbers but mutable
  List<int> numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
  // List of booleans but mutable
  List<bool> booleans = [true, false, true, false];
  // List of doubles but mutable
  List<double> doubles = [1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0];
  
  // List of strings but mutable
  List<String> names = ['Raman', 'Rajeev', 'Raghav', 'Ramanujan'];
  List<String> friends = ['David', 'Ash', 'Nick', 'Mark'];

  // Add an element to the list
  names.add('Rajesh');
  print(names);

  // Insert an element at a specific index
  names.insert(1, 'Rahul');
  print(names);

  // update an element at a specific index
  names[2] = "Raghvendra";
  print(names);

  // get an element at a specific index
  print(names[4]);

  // remove an element at a specific index
  names.removeAt(3);
  print(names);

  // add all elements of a list to another list
  names.addAll(friends);
  print(names);

  // add a list to another list at a specific index
  names.insertAll(2, friends);
  print(names);


  // -------------------------------------------------------- Maps --------------------------------------------------------
    stdout.write("\nWorking on Maps now... \n");
  // Sytax:
  /*
      Map<KeyType, ValueType> mapName = {
        key1: value1,
        key2: value2,
        key3: value3,
      };
  */
  Map <int, dynamic> statusMapping = {
    1: "Active",
    2: true,
    3: 3.14,
    4: [1, 2, 3, 4, 5]
  };
  print("dynamic type of map: $statusMapping");

  Map <String, dynamic> stuDetails = {
    "name": "David",
    "age": 20,
    "isActive": true,
    "class": "12th",
    "sec": "C"
  };
  print("Student details: $stuDetails");
  /**
   * So it the key exists in the map, value get updated,
   * if the key doesn't exists, a new key-value pair is added to map.
   */
  // Add a new key-value pair to the map
  stuDetails["rollNo"] = 23;

  // update a value of a key in the map
  stuDetails["sec"] = "C";

  print("Student Details after adding and updating : $stuDetails");

  // remove a key-value pair from the map
  stuDetails.remove("class");

  print("Student Details after removing : $stuDetails");

  // -------------------------------------------------------- Sets --------------------------------------------------------
    stdout.write("\nWorking on Sets now... \n");
  // Sytax:
  /**
    Set<Type> setName = {
          value1,
          value2,
          value3,
    };
   */

  // if type is not specified, it will be dynamic by default
  Set<String> directionSet = {"North", "South", "East", "West", "East", "North"};
  print("Direction Set: $directionSet");
  // Set stores only unique values, so duplicate values are not allowed.

  // --------------------------Spread Operator in Dart--------------------------
  // Spread operator is used to insert all the elements of a list into another list.
  stdout.write("\nWorking on Spreads now... \n");

  names = ['Raman', 'Rajeev', 'Raghav', 'Ramanujan'];
  friends = ['David', 'Ash', 'Nick', 'Mark'];

  List<String> allPeople = [...names, ...friends];
  print("names: $names");
  print("friends: $friends");
  print("All People: $allPeople");


  List<String>? enemy;
  allPeople = [...names, ...friends, ...?enemy]; // if enemy is null, it will not be added to the list.
  print("All People after adding enemy: $allPeople");
}