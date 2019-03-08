This project was to teach tokenization and the many forms and ways that one can manipulate tokens. Each program built off the last till the final culmination where we introduce command line arguments influencing our program.

Program 1: Program 1 is run without any command line arguments (ex: ./a.out). The progam then takes a single, space and tab delimited, input up to 65 characters from the user. Each token is split by either a space or tab. The program then prints out each token inbetween equal signs.

Program 2: Program 2 is run without any command line arguments. The program displays a >, prompting the user for an input that creates tokens from the input. Space and tab are delimited when creating the tokens from the input. From there the tokens are individually ran through my isTokInt() function that checks each character of a token to determine if the token is an integer. If it returns 0 then the token is an integer and the program prints INT, if it returns 1 then the program prints STR. The program then exits.

Program 3: Program 3 is run without any command line arguments. The program immediately displays a >, prompting user input and creates tokens from the input. Space and tab serve as delimiters in the input when creating the tokens. The tokens as they are being created are counted, the counter is checked after token creation and if there are more than 2 tokens the program then re-prompts the user for a new input. Once a proper input is given the program checks the two tokens similarly to program 2 to determine whether the tokens are a STR or INT.

Program 4: Program 4 runs without any command line arguments. The program displays a >, prompting the user for an input. Unlike the past 3 programs, program 4 limits the input string to 20 characters and if more than 20 characters are inputted re-prompts the user. Number of token error checking similar and token type determination is exactly the same as program 3. The program also checks every iteration whether or not a single string 'quit' was the only input and if it was exits the program accordingly.

Program 5: Program 5 runs without any command line arguments. The program displays a >, to prompt the user for input. User input is limited to 65 inputs and the program checks for a maximum of two tokens to be inputted. The program then checks the tokens, the first having to be a STR and the second having to be an INT. The tokens are checked similarly to the past programs but displaying an error if Token 1 is an INT and similiarly if Token 2 is a STR. Just like Program 4, the program looks for the single token 'quit' and exits the program after that single input is given.

Program 6: Program 6 accepts a single command line argument, if any more command line arguments are given the program displays an error and closes. The single command line argument is also checked to be an integer. If it is not an integer the program displays an error and closes. If the command line argument is an integer it is stored into variable "x" so that it can be compared to the variable count, so that the program loops the appropriate amount of times. Like the last programs all checks are there but unlike last time after each input the count increases and once count equals x the program exits.
