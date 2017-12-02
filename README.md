# Coin Dispenser
A program that prints out what coins to give out for any amount of change from 1 cent to 99 cents.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/coin-dispenser.git
   ```
    or [download as ZIP](https://github.com/cramaechi/coin-dispenser/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd standard-average-deviation-calculator
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./coin_dispenser
```

Sample Output:
```
Enter in amount of change: 99                                                                                         
                                                                                                                      
99 cents can be given as                                                                                              
3 quarter(s) 2 dime(s) 4 penny(pennies)                                                                               
                                                                                                                      
Start over? (y/n): y                                                                                                  
                                                                                                                      
                                                                                                                      
Enter in amount of change: 46                                                                                         
                                                                                                                      
46 cents can be given as                                                                                              
1 quarter(s) 2 dime(s) 1 penny(pennies)                                                                               
                                                                                                                      
Start over? (y/n): y                                                                                                  
                                                                                                                      
                                                                                                                      
Enter in amount of change: 11                                                                                         
                                                                                                                      
11 cents can be given as                                                                                              
1 dime(s) 1 penny(pennies)                                                                                            
                                                                                                                      
Start over? (y/n): n 
```
