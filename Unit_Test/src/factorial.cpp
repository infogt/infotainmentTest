/*
 * factorial.cpp
 *
 *  Created on: 04.11.2015
 *      Author: sthangavelmurugesa
 */

//factorial.cpp
int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}


