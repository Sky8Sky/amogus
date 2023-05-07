#include <iostream>
#include <ctime>
using namespace std;

extern "C" {
	int function_one(unsigned char *in, unsigned char *out, size_t width, size_t height);
	int function_two(int *arr, size_t n, unsigned int stride);
}

int main(int argc, char **argv) {
	int retval;
	cout << "We have " << argc << " command line parameter(s)\n";
	cout << "Parameters are:\n";
	for (int i = 0; i < argc; i++) {
		cout << "Argument " << i << ": " << argv[i] << endl;
	}

	//YOU: Create an array here

  // Seed the random number generator
  srand(time(NULL)); //apparently null makes it use current time, so truly random

  // Create an array of strings with 25 elements
  string AMOGUS[25] = {"1) The bomb's payload is esposed, I can use the batmobile's power winch to create a controlled explosion.",
                        "2) Is there a lore reason why batman refuses to use a lightsaber? Is he stupid?",
                        "3) 42 is the answer to life, the universe, and everything",
                        "4) Commit tax fraud, Defund the IRS.",
                        "5) May the Force be with you",
                        "6) This is literally 1984",
                        "7) Luke, I am your father",
                        "8) AMOGUS (sus)",
                        "9) Resistance is futile",
                        "25) Live long and prosper",
						"11) Oh, to be 99 again",
						"12) You'll recall that you also call me saul.",
						"13) Me personally, I wouldn't take that level of disrespect, that's just me though",
						"14) Do you remember? Yeah you do.",
						"15) John 3:16 KJV states: For God so loved the world, that he gave his only begotten Son",
						"16) Be Kind and compassionate with one another, forgving each other, just as in Christ, God forgave you. (Ephesians 4:32 NIV)",
						"17) Ladies and Gentelmen of the jury: You're dumb.",
						"18) Whatever stopped me before might stop me again... stop",
						"19) A cut above the rest",
						"20) Lalalala",
						"21) Hear my heavy heart beat loud",
						"22) I'm not broke, I'm just a broken-hearted man.",
						"23) Jimmy??? more like stimmy",
						"24) Salamonki, amogus",
						"25) OBJECTION!! relevance?",
						};

  // Shuffle the elements of the array
  for (int i = 0; i < 25; i++) {
    int randomIndex = rand() % 25;
    swap(AMOGUS[i], AMOGUS[randomIndex]);
  }

  // Print out each element of the array
  for (int i = 0; i < 25; i++) {
    cout << AMOGUS[i] << endl;
  }


	//OR... use a highres timer
	//Calling the assembly function like this
	clock_t start_time = clock();
	//retval = function_one(...);
	clock_t end_time = clock();
	cout << "Running time for function_one: " << end_time - start_time << " ticks\n";
	cout << "function_one returned: " << retval << endl;

	start_time = clock();
	//retval = function_two(...);
	end_time = clock();
	cout << "Running time for function_one: " << end_time - start_time << " ticks\n";
	cout << "function_one returned: " << retval << endl;
}
