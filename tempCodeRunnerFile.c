printf("*** Start of Converting Strings to long Demo ***\n");

    // Define a character array with a constant buffer size.
    char longString[BUFFER_SIZE];
    long longNumber;

    // Start a do-while loop.
    do {
        printf("Type the long numeric string (q - to quit): \n"); 

        // Get the user input and store it in the longString variable.
        fgets(longString, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of the input string.
        longString[strlen(longString) - 1] = '\0';

        // If the user did not enter "q", convert the input string to a long integer and print the result.
        if (strcmp(longString, "q") != 0) {
            longNumber = atol(longString);
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp(longString, "q") != 0); // Continue looping until the user enters "q".

    printf("*** End of Converting Strings to long Demo ***\n\n");