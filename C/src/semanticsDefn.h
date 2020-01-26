#define ERR1 "There are too many arguments. Please only have two arguments; the input and output filenames.\n"
#define ERR2 "Unable to open the file.\n"
#define ERR3 "Input file does not have a '.swift' extension type.\n"
#define ERR4 "Output file does not have a '.java' extension type.\n"

const *char[] swiftSemantics = {"print", "var", "let", "func", "import"};
const *char[] javaSemantics = {"println", "float", "double", "int", "String"};
//versus Swift, Java has multiple primitive types

void extensionChecker(char *input);
