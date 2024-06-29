# CODSOFT
<h1> TASK-1 </h1>
<h5>
        <P style="text-align: center;">
            This program is a simple number guessing game where the player has up to 5 chances to guess a randomly
            generated number between 1 and 200.
        </P>
    </h5>
    <big><b>Code Breakdown</big></b>
    <br>
    <br>
    <h5><i><U>Including Libraries and Using Namespace:-</u></i></h5>
    <ul>
        <h5>
            <li>
                #include <iostream>: This includes the Input/Output stream library, which allows the program to use cin
                    and cout for input and output operations.
                    <br><br></li>
            <li>#include <cstdlib>: This includes the C standard library, which provides functions like rand() for
                    generating random numbers and srand() for seeding the random number generator.
                    <br><br></li>
            <li>#include <ctime>: This includes the C time library, which provides functions to get the current time
                    using time(0).
                    <br><br></li>
            <li>using namespace std;: This statement allows you to use standard library functions and objects without
                prefixing them with std::.
    </ul>
    </h5>
    </li>



<h5><i><U>Main Function Declaration:-</U></i></h5>
    <ul>
        <h5>
            <li>
                This is the starting point of the program. The main function returns an integer, which is standard for
                C++ programs.
            </li>
    </ul>
    </h5>
    </li>
    <h5><i><U>Variable Declarations and Initial Prompts:-</U></i></h5>
  <ul>
        <h5>
            <li>string name;: Declares a string variable to store the player's name.
                <br><br>
            </li>
            <li>
                int chance = 5, player;: Declares two integer variables: chance initialized to 5, which represents the
                number of guesses allowed, and player, which will store the player's guess.
                <br><br>
            </li>
            <li>
                The cout statements print the game title, instructions, and prompt the player to enter their name.
                <br><br>
            </li>
            <li>
                getline(cin, name);: Reads a line of text from the user, allowing the player to enter their name,
                including spaces.
        </h5>
    </ul>
    </li>
    <h5><i><U>Generating a Random Number:-</U></i></h5>
    <h5>
        <ul>
            <li>
                srand(time(0));: Seeds the random number generator with the current time to ensure different sequences
                of random numbers on each run.
                <br><br>
            </li>
            <li>
                int random = (rand() % 200) + 1;: Generates a random number between 1 and 200.
                <br><br>
            </li>
            <li>
                The rand() % 200 generates a number between 0 and 199, and adding 1 shifts this range to 1-200.
    </h5>
    </ul>
    </li>
 <h5><i><U> Main Game Loop:-</U></i></h5>
    <b>The loop runs 5 times, representing the 5 chances the player has to guess the number.</b>
    <br><br>
    <b> For each iteration:-</b>
    <h5>
        <ul>
            <li>
                The program displays the current number of chances left.
                <br><br>
            </li>
            <li>
                Prompts the player to enter a guess and stores it in player.
                <br><br>
            </li>
            <li>
                If the guessed number is less than 1 or greater than 200, the loop breaks, ending the game (although
                this logic seems intended to catch out-of-range numbers, it should ideally be if (player < 1 || player>
                    200)).
                    <br><br></li>
            <li>
                If the guessed number matches the random number, the player is congratulated and the loop breaks.
                <br><br>
            </li>
            <li>
                If the guessed number is less than the random number, the program prompts the player to guess higher.
                <br><br>
            </li>
            <li>
                If the guessed number is greater than the random number, the program prompts the player to guess lower.
                <br><br>
            </li>
            <li>
                The number of chances (chance) is decremented by 1 after each guess.
    </h5>
    </ul>
    </li>
    <h5><i><U>Game Over Scenario:-</U></i></h5>
    <h5>
        <ul>
            <li>
                After the loop, if chance is 0 (meaning the player has used all their guesses), a message is printed
                revealing the correct number.
                <br><br>
            </li>
            <li>return 0;: This signifies the end of the program.
    </h5>
    </ul>
    </li>
    <h5><i><U>End of Main Function:-</U></i></h5>
    <h5>
        <ul>
            <li>
                The return 0; statement indicates that the program has finished successfully
    </h5>
    </ul>
    </li>


<h1> TASK-2 </h1>

<h5>
    <P style="text-align: center;">
        This code is a simple calculator program that allows users to perform basic arithmetic operations (addition,
        <br>subtraction, division, and multiplication) on two floating-point numbers.
    </P>
</h5>
<big><b>Code Breakdown</big></b>
<br>
<br>

<h5><i><U>Variable Declarations and Initial Prompts:-</U></i></h5>
<ul>
    <h5>
        <li>float num0, num1: Two float variables are declared to store the two numbers entered by the user. float is used because it can represent numbers with decimal points.
        </li>
    </h5>
</ul>
<h5><i><U>User Input Prompt:-</U></i></h5>
<h5>
    <ul>
        <li>
            The code uses cout statements to display a user-friendly menu with instructions on how to choose the desired arithmetic operation (addition, subtraction, division, or multiplication) using characters 'a', 's', 'd', and 'm' respectively.
            <br><br>
        </li>
        <li>
            cin is used to read the user's choice stored in the character variable ap.
            <br><br>
        </li>
       </h5>
</ul>
<h5><i><U> Inputting Numbers:-</U></i></h5>
<b>Separate cout statements prompt the user to enter the first and second numbers, which are then stored in num0 and num1 using cin..</b>
<br><br>
<b> Switch Statement:-</b>
<h5>
    <ul>
        <li>
            The code uses a switch statement to handle different arithmetic operations based on the value stored in ap.            <br><br>
        </li>
        <li>
            Each case ('a', 's', 'd', and 'm') checks if the user's choice matches the corresponding character.
            <br><br>
        </li>
        <li>
            If a match is found, the appropriate calculation (+, -, /, or *) is performed on num0 and num1, and the result is displayed using cout statements.
                <br><br></li>
        <li>
            The default case handles any invalid user input (characters other than 'a', 's', 'd', or 'm') and displays an error message.
            <br><br>
        </li>
  </h5>
</ul>
<h5><i><U>End of Main Function:-</U></i></h5>
<h5>
    <ul>
        <li>
            The return 0; statement indicates that the program has finished successfully
</h5>
</ul>
</li>

<h1> TASK-3 </h1>
<h5>
    <P style="text-align: center;">
        This program allows users to manage tasks by adding, viewing, marking as completed, and deleting tasks.
    </P>
</h5>
<big><b>Code Breakdown</big></b>
<br>
<br>
<h5><i><U>Including Libraries and Using Namespace:-</u></i></h5>
<ul>
    <h5>
        <li>
            #include <iostream>: This includes the Input/Output stream library, which allows the program to use cin
                and cout for input and output operations.
                <br><br></li>
        <li>#include <windows.h>: This header file is used for Windows-specific functions. However, it seems unnecessary
                in this code as no Windows-specific functions are used.
                <br><br></li>
        <li>using namespace std;: This statement allows you to use standard library functions and objects without
            prefixing them with std::.
</ul>
</h5>
</li>

<h5><i><U>Main Function and Initialization :-</U></i></h5>
<ul>
    <h5>
        <li>string task[50] = {""}, An array of 50 strings to store tasks. <br><br>
        </li>
        <li>
            int Task_Number = 0, del_task, mark;: Integer variables for task number, task to delete, and task to mark as
            completed.
            <br><br>
        </li>
        <li>
            int task_output = 0, Variable to store user choice from the menu. <br><br>
        </li>
    </h5>
</ul>

<h5><i><U>Welcome Messagen :-</U></i></h5>
<h5>
    <ul>
        <li>
            Prints a welcome message with a border.
            <br><br>
        </li>
</h5>
</ul>
<h5><i><U> Main Loop :-</U></i></h5>
<b>Displays a menu and gets user input for the desired operation. <br><br>





  <h5><i><U> Switch Statement :-</U></i></h5>
    <h5>
        <ul>
            <li>
                Case 1: Adds a new task. <br><br>
            <li>
                Checks if the task list is full.
            </li>
            <li>
                - Prompts the user to enter a new task and adds it to the list.
            </li>
            </li>
            <li>
                Case 2: Displays all tasks
                <br><br>
            </li>
            <li>
                Case 3: Marks a task as completed by appending "task is completed" to the task string.
          <br><br>
            </li>
            <li>
                Case 4: Deletes a task.
            <li>
                Prompts the user to enter the task number to delete.
            </li>
            <li>
                Moves subsequent tasks up one position to fill the gap. </li>
            </li>
            <li>
                Decrements the task count.
            </li>
            </li>
            <li>
                Case 5: Terminates the program. <br><br>
            <li>
                - Default: Handles invalid input.
            </li>
    </h5>
    </ul>
    </li>
   <h5><i><U>End of Main Function:-</U></i></h5>
    <h5>
        <ul>
            <li>
                The return 0; statement indicates that the program has finished successfully
    </h5>
    </ul>
    </li>
