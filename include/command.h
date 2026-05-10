#ifndef command_h
#define command_h

#define no_op 0        //--done
#define error_op 1     //--done


#define cadd 96  //add --done
#define csub 16  //sub --done
#define cdiv 208   //div --done
#define cmul 194 //mul --done
#define cclr 112  //clear --done
#define cand 196      //and       --done
#define corr 184            //or      --done
#define cnot 242      //not       --done
#define cxor 216           //xor       --done
#define cshiftr 148      //shift
#define cmod 126        //mod --done
#define csleep 150      //sleep
#define crst 170        //reset --done
#define cdisable 77     //disable--done
#define cenable 125     //enable --done

#define cerase 23   //erase

#define ctoggle 209  //.toggle
#define hwport 100  //.hwport
#define cdefine 37  // .define
#define ccondt 140  // .condt
#define cprog 117   // prog
#define crun 184    // run
#define cexit 101   // exit

#define cgoto 59    // .goto
#define cblock 21   // .block

#define cprint 132  //.print
#define cif 168     // .if
#define cifnot 50   // .ifnot
#define cloop 146   // .loop
#define cfi 141     // .fi
#define carray 155  // .array
#define cend 166    // exit
#define cparse 195  // .parse
#define cassign 176 // .assign
#define cdelete 65  // .delete
#define cterminal 86  //terminal
#define cload 250       //.load
 
#define c_enter '\r' //On Pressing Enter Key






// cls handling done by clear_terminal system routine.


#endif  //command_h