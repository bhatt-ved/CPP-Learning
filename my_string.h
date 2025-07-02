
class String()
{
	private:
		char *buf;
		int len;	// Including the trailing '\0'
	
	public:
		String();	// Default constructor
		String(const char* input);  // Constructor that takes char* string as input
		String(const String &input); // Copy constructor
		~String();		     // Destructor

		void init_from_console();		// Prompts user for input and initializes this class

		// Returns the char* string
		const char* get();

		// Prints string
		void print();

		// Gives length of the string
		int length();
};

