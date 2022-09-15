console.log("Looping a Triangle\n") //Formating
//-----------------------------------------------------------------------------------------------------
//Code Name: Looping a Triangle
//Description: prints a triangle of 'x's to the console
//Name: Matthew McManness
//Preconditions: None
//Postconditions: prints a triangle of x's to the console
//Errors: None Expected
{
let output=''; //creates an output variable (empty)
   const repitionAmount = 10; //states how many lines/how wide the triangle should be
   for(let i = 1; i <= repitionAmount; i++) // for loop that adds an 'x' to the output and prints it to the console for the repition amount
     {
       output = output+'x';
       console.log(output);
     }
}
//End of Looping a Triangle
//-----------------------------------------------------------------------------------------------------

console.log("End of Looping a Triangle\n\n") //Formating





console.log("FizzBuzz\n") //Formating

//-----------------------------------------------------------------------------------------------------
//Code Name: FizzBuzz
//Description: uses console.log to print all the numbers from 1 to 100, with three exceptions:
// 1) For numbers divisible by 4, print "Divisible by 4" instead of the number.
// 2) For numbers divisible by 7, but not 4, print "Divisible by 7, but not 4" instead.
// 3) For numbers divisible by both 4 and 7, print “Divisible by both 4 and 7”.
//Name: Matthew McManness
//Preconditions: None
//Postconditions: prints the common FizzBuzz to the console
//Errors: None Expected
const fizz = 4; //sets the number for Fizz
const buzz = 7; //sets the number for Buzz
for(let i = 1; i<=100; i++) //For loop for 1 - 100
  {
    if((i%fizz==0) && (i%buzz==0)) // if the number (i) is divisible by both fizz and buzz prints the correct statement.
    {
      console.log("divisible by both " + fizz + " and " + buzz + ".");
    }
    else if(i%fizz==0) //if the number is only divisible by fizz prints the correct statement
    {
      console.log("divisible by " + fizz + ".");
    }
        else if(i%buzz==0) // if the number is only divisible by buzz prints the correct statement
    {
      console.log("divisible by " + buzz + ".");
    }
    else //if none of the above prints the number
    {
      console.log(i);  
    }
  }

//End of FizzBuzz
//-----------------------------------------------------------------------------------------------------

console.log("End of FizzBuzz\n\n") //Formating




console.log("n-byn Grid\n") //Formating

//-----------------------------------------------------------------------------------------------------
//Code Name: n-by-n grid
//Description: prints out a grid of a set size using spaces and '*'s
//Name: Matthew McManness
//Preconditions: None
//Postconditions: prints out a grid of a set size using spaces and '*'s
//Errors: None Expected


const print_array = function(size) //declares function print_array
{
  let output = `size = ${size}\n`; // formats the output to display size = the size variable inputed
  for(let i = 0; i <= size; i++) //for loop to create rows
    {
      for(let j = 0; j <(size/2); j++) // for loop to rill columns
        {
          output += " *";
        }
      output += "\n";
    }
  console.log(output + "\n\n"); // formating
}

print_array(8); // calls function for size 8
print_array(14) // calls function for size 14




//End of n-by-n grid
//-----------------------------------------------------------------------------------------------------

console.log("End of n-by-n Grid\n\n") //Formating