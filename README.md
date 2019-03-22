# verticalGraph

## Something you gonna understand before you do this

A standard terminal window is 80 character-columns across. If we limit the number of columns we can graph to a maximum of 80, we know how large an array we need to allocate and this program is simple to write.

## Requirements

1. Read integer values from stdin, separated by one or more spaces or newlines, until reaching EOF.
2. The input is guaranteed to be well-formed.
3. The input contains no more than 80 values.
4. On standard output, render a simple vertical column graph representation of the
input values, in order left to right, using hash '#' characters as shown in the examples below. The number of hashes printed in each column should be equal to the corresponding input value.
5. The area above a completed column should be filled with space characters.
6. Ignore empty lines. Do not output a column for an empty line.
7. The entire graph must end with a newline character.

## Example
1. Input:<br>
1131<br>
Output:<br>
    
    
    #
    # ####
    
   
In particular, notice the spaces before the newlines on the first two lines. They are necessary.

2. Input:<br>
345<br>
Output:<br>
    
    
    
    #
    ##
    ###
    ###
    ###
    
    
3. Input:<br>
0 3 0 4 5<br>
Output:<br>
       
       
       #
      ##
    # ##
    # ##
    # ##
    
Notice the empty columns that correspond to the zeros in the input, including the leading zero.

4. Input:
  5
  15
  16
  15
  12
  12
  12
  8
  6
  3
  2
  19
  21
  17
  15
  12
  11
  10
  9
  8
  7
  7
  
  Output:
  
              #
              #   
              ## 
              ##
              ### 
     #        ###
    ###       ####
    ###       ####
    ###       ####
    ######    #####
    ######    ######
    ######    #######
    ######    ########
    #######   #########
    #######   ###########
    ########  ###########
    #########  ###########
    #########  ###########
    ########## ###########
    ######################
    ######################
    
    

