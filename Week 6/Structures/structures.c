// Parallel Arrays are used to store points, for example
char p[10];
int x[10], y[10];
// This creates 3 arrays, of length 10, where we can store the name of the point
// along with its x and y coordinate

// However we can make a structure, which allows us to link all 3 of the previous variables into one entity
// A struct encapsulates a collection of dissimilar items
// Structs can contain arrays, and we can make arrays of structs
struct Point2D{
    char name;
    int x;
    int y;
};
// We can then use this to make an array of points
struct Point2D p;
// Where p is one Point2D (A name, an x and a y coordinate)
struct Point2D a[10];
// Where a is an array of Point2D's

// Structs can be used for a variety of things, such as
// the colour of a pixel
struct Pixel{
    short int Red;
    short int Green;
    short int Blue;
};
//Addresses
struct address{
    char HouseName[20];
    char street[50];
    char town[50];
    char city[50];
    char county[50];
};
// A phone directory
struct PhoneDir{
    char name[50];
    struct address addr; // Notice we can also have a struct inside a struct
    char number[11];
};

struct PhoneDir ph1, ph2; // Declares 2 phone entries
struct Pixel red_only = {255, 0, 0}; // We can also input data into the struct ourselves
struct address gb;

gb.HouseName = "1"


// Typedef can be used to assign a new name to a type eg
typedef long int BigInt
// Here we effectively rename long int to bigint. We can still use longint, but this can also be applied to structures
typedef struct{
    int x;
    int y;
    int z;
} Point; 
// This makes a struct, and gives it the name point, so we can then use it like...

Point p1, p2, p3; //To declare 3 variables of type point