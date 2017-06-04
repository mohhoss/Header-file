# Header-file
The purpose of this assignment is to work with header files and multi-part programs. 

This assignment calculates income U.S. tax information for 2016, calculates the exact tax rate and then prints out a tax table that brackets a given income value.

In the United States, your income tax depends not only on your income, but on your marital and family status. Exact formulas exist for calculating the income tax and are given below. But for most people's income (< $100,000) the government feels that calculation error is a major source of problems. Consequently, tables are calculated so that a taxpayer merely has to look up their tax in the table based on their income and status.

The formulas for calculating U.S. income tax in 2016 are given in the tables below.

Single
If taxable income is over --	But not over --	The tax is:
$0	$9,275	10% of the amount over $0
$9,275	$37,650	$927.50 plus 15% of the amount over 9,275
$37,650	$91,150	$5,183.75 plus 25% of the amount over 37,650
$91,150	$190,150	$18,558.75 plus 28% of the amount over 91,150
$190,150	$413,350	$46,278.75 plus 33% of the amount over 190,150
$413,350	$415,050	$119,934.75 plus 35% of the amount over 413,350
$415,050	unlimited	$120,529.75 plus 39.6% of the amount over 415,050
Married Filing Jointly or Qualifying Widow(er)
If taxable income is over --	But not over --	The tax is:
$0	$18,550	10% of the amount over $0
$18,550	$75,300	$1,855.00 plus 15% of the amount over 18,550
$75,300	$151,900	$10,367.50 plus 25% of the amount over 75,300
$151,900	$231,450	$29,517.50 plus 28% of the amount over 151,900
$231,450	$413,350	$51,791.50 plus 33% of the amount over 231,450
$413,350	$466,950	$111,818.50 plus 35% of the amount over 413,350
$466,950	unlimited	$130,578.50 plus 39.6% of the amount over 466,950
Married Filing Separately
If taxable income is over --	But not over --	The tax is:
$0	$9,275	10% of the amount over $0
$9,275	$37,650	$927.50 plus 15% of the amount over 9,275
$37,650	$75,950	$5,183.75 plus 25% of the amount over 37,650
$75,950	$115,725	$14,758.75 plus 28% of the amount over 75,950
$115,725	$206,675	$25,895.75 plus 33% of the amount over 115,725
$206,675	$233,475	$55,909.25 plus 35% of the amount over 206,675
$233,475	unlimited	$65,289.25 plus 39.6% of the amount over 233,475
Head of Household
If taxable income is over --	But not over --	The tax is:
$0	$13,250	10% of the amount over $0
$13,250	$50,400	$1,325.00 plus 15% of the amount over 13,250
$50,400	$130,150	$6,897.50 plus 25% of the amount over 50,400
$130,150	$210,800	$26,835.00 plus 28% of the amount over 130,150
$210,800	$413,350	$49,417.00 plus 33% of the amount over 210,800
$413,350	$441,000	$116,258.50 plus 35% of the amount over 413,350
$441,000	unlimited	$125,936.00 plus 39.6% of the amount over 441,000
More information about the U.S. income tax system can be found at http://www.irs.gov/.

Program

Your program should ask the user for a taxable income amount. Using the formulas, the program should calculate and print the exact tax of that income value for each of the status categories. The tax values printed should be printed out with two digits after the decimal point.

Using the taxable income value that was input, the program should print a tax table for a range of $1,000.00 containing the input value. The starting entry in the table is the nearest multiple of $1,000.00 below the income value. This value can be calculated by dividing the income by 1000, turning the resulting value into an integer and then multiplying by 1000.

Lines in the table represent income ranges of $50.00. The tax values in the table are computed by calculating the exact tax value for the middle of the range (a figure ending in 25 or 75) and rounding to the nearest dollar. The values should be printed out as integers.

Your program should have four functions (in addition to main()). These functions caculate the tax values given by the tables above. There should be one function for each marital/tax status. The functions should take one argument, the income, and return a floating point value, the tax.

The main() function should simply input the income value, call the functions for tax values, and print the table.

Implementation Points

This assignment requires you to implement the four functions in a separate source code file from the file containing main(). You will need a header file to properly communicate program structure between the two source code files. The name for the header file and for the file containing the functions is up to you.

Output

Sample output from this program on turing/hopper is found below. The TA will use other values to check your program.
z1234567@hopper$ assign2

Income? 14927.33
Exact tax 
Single:                         1775.35
Married filing jointly:         1492.73
Married filing separately:      1775.35
Head of household:              1576.60

Income       |                 Married     Married        Head
Range        |                  Filing      Filing          of
             |      Single     Jointly  Separately   Household
--------------------------------------------------------------
 14000- 14050|        1640        1403        1640        1441
 14050- 14100|        1648        1408        1648        1449
 14100- 14150|        1655        1413        1655        1456
 14150- 14200|        1663        1418        1663        1464
 14200- 14250|        1670        1423        1670        1471
 14250- 14300|        1678        1428        1678        1479
 14300- 14350|        1685        1433        1685        1486
 14350- 14400|        1693        1438        1693        1494
 14400- 14450|        1700        1443        1700        1501
 14450- 14500|        1708        1448        1708        1509
 14500- 14550|        1715        1453        1715        1516
 14550- 14600|        1723        1458        1723        1524
 14600- 14650|        1730        1463        1730        1531
 14650- 14700|        1738        1468        1738        1539
 14700- 14750|        1745        1473        1745        1546
 14750- 14800|        1753        1478        1753        1554
 14800- 14850|        1760        1483        1760        1561
 14850- 14900|        1768        1488        1768        1569
 14900- 14950|        1775        1493        1775        1576
 14950- 15000|        1783        1498        1783        1584

z1234567@hopper$ assign2

Income? 42362
Exact tax 
Single:                         6361.75
Married filing jointly:         5426.80
Married filing separately:      6361.75
Head of household:              5691.80

Income       |                 Married     Married        Head
Range        |                  Filing      Filing          of
             |      Single     Jointly  Separately   Household
--------------------------------------------------------------
 42000- 42050|        6278        5376        6278        5641
 42050- 42100|        6290        5384        6290        5649
 42100- 42150|        6303        5391        6303        5656
 42150- 42200|        6315        5399        6315        5664
 42200- 42250|        6328        5406        6328        5671
 42250- 42300|        6340        5414        6340        5679
 42300- 42350|        6353        5421        6353        5686
 42350- 42400|        6365        5429        6365        5694
 42400- 42450|        6378        5436        6378        5701
 42450- 42500|        6390        5444        6390        5709
 42500- 42550|        6403        5451        6403        5716
 42550- 42600|        6415        5459        6415        5724
 42600- 42650|        6428        5466        6428        5731
 42650- 42700|        6440        5474        6440        5739
 42700- 42750|        6453        5481        6453        5746
 42750- 42800|        6465        5489        6465        5754
 42800- 42850|        6478        5496        6478        5761
 42850- 42900|        6490        5504        6490        5769
 42900- 42950|        6503        5511        6503        5776
 42950- 43000|        6515        5519        6515        5784

z1234567@hopper$ assign2

Income? 82120.11
Exact tax 
Single:                        16301.28
Married filing jointly:        12072.53
Married filing separately:     16486.38
Head of household:             14827.53

Income       |                 Married     Married        Head
Range        |                  Filing      Filing          of
             |      Single     Jointly  Separately   Household
--------------------------------------------------------------
 82000- 82050|       16278       12049       16460       14804
 82050- 82100|       16290       12061       16474       14816
 82100- 82150|       16303       12074       16488       14829
 82150- 82200|       16315       12086       16502       14841
 82200- 82250|       16328       12099       16516       14854
 82250- 82300|       16340       12111       16530       14866
 82300- 82350|       16353       12124       16544       14879
 82350- 82400|       16365       12136       16558       14891
 82400- 82450|       16378       12149       16572       14904
 82450- 82500|       16390       12161       16586       14916
 82500- 82550|       16403       12174       16600       14929
 82550- 82600|       16415       12186       16614       14941
 82600- 82650|       16428       12199       16628       14954
 82650- 82700|       16440       12211       16642       14966
 82700- 82750|       16453       12224       16656       14979
 82750- 82800|       16465       12236       16670       14991
 82800- 82850|       16478       12249       16684       15004
 82850- 82900|       16490       12261       16698       15016
 82900- 82950|       16503       12274       16712       15029
 82950- 83000|       16515       12286       16726       15041

z1234567@hopper$ assign2

Income? 156789.01
Exact tax 
Single:                        36937.68
Married filing jointly:        30886.42
Married filing separately:     39446.88
Head of household:             34293.93

Income       |                 Married     Married        Head
Range        |                  Filing      Filing          of
             |      Single     Jointly  Separately   Household
--------------------------------------------------------------
156000-156050|       36724       30673       39195       34080
156050-156100|       36738       30687       39211       34094
156100-156150|       36752       30701       39228       34108
156150-156200|       36766       30715       39244       34122
156200-156250|       36780       30729       39261       34136
156250-156300|       36794       30743       39277       34150
156300-156350|       36808       30757       39294       34164
156350-156400|       36822       30771       39310       34178
156400-156450|       36836       30785       39327       34192
156450-156500|       36850       30799       39343       34206
156500-156550|       36864       30813       39360       34220
156550-156600|       36878       30827       39376       34234
156600-156650|       36892       30841       39393       34248
156650-156700|       36906       30855       39409       34262
156700-156750|       36920       30869       39426       34276
156750-156800|       36934       30883       39442       34290
156800-156850|       36948       30897       39459       34304
156850-156900|       36962       30911       39475       34318
156900-156950|       36976       30925       39492       34332
156950-157000|       36990       30939       39508       34346

z1234567@hopper$

Other Points

The C++ string class is allowed but not needed for this assignment.
A Makefile is required. Make sure that the Makefile handles all of the files in your assignment.
Symbolic constants should be used to avoid magic numbers. You may use either #define or const, whichever you know best at this point. You do not have to create symbolic constants for the numbers used in the tax formulas. There are too many to make it worth our time here. You must have symbolic constants for the field widths used in the table.
The name of your source code file containing main() should be assign2.cc.
The name of the final executable should be assign2.
Programs that do not compile on turing/hopper automatically receive 0 points.
Submit your program using the electronic submission guidelines posted on the course web site.
