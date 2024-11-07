/*

Subsequence Checker by CodeChum Admin
-------------------------------------

Write a program that checks whether a given string is a subsequence of another string. 
A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements. 

If the characters are found in the correct order, the program outputs that the second string is a subsequence of the first string; otherwise,
    it outputs that the second string is not a subsequence of the first string.

*/

#include <stdio.h>
#include <string.h>
        
    void main(){
            
        char s1[100], s2[100];
        int isSubsequence = 0, j = 0, count = 0, s1Len, s2Len;
            
        printf("Enter string 1: ");
        scanf(" %[^\n]s", s1);
            
        printf("Enter string 2: ");
        scanf(" %[^\n]s", s2);
            
            s1Len = strlen(s1);
            s2Len = strlen(s2); 
            
            
            for (int i = 0; i <= s1Len; i++){

                while (j <= i){
                    
                    if (s1[i] == s2[count] && s2[count] != '\0') count++;
                    
                    if (count == s2Len){
                    
                        isSubsequence = 1;
                        break;
                    }
                    
                j++;
                
                }
                
            } 

            if (isSubsequence) printf("%s is a subsequence of %s", s2, s1);
            
            else printf("%s is not a subsequence of %s", s2, s1);
                
            
        }   